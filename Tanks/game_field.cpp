#include "game_field.h"

//начать заново игру
void Tanks::game_field::startgame()
{
    if (firstgame)
    {
        if (player1 != nullptr)
        {
            delete player1;
        }
        if (player2 != nullptr)
        {
            delete player2;
        }
        tanker::deadpl1 = 0;
        tanker::deadpl2 = 0;
        tanker::winspl1 = 0;
        tanker::winspl2 = 0;
        timemin = firsttimemin;
        timesec = firsttimesec;
        label7->Text = "Время: " + timemin.ToString() + ":" + (timesec).ToString();
        int cur = this->Width - 10 - this->player2_info_panel->Location.X;
        this->player1_info_panel->Width = cur;
        this->player2_info_panel->Width = cur;

        widthfield = tanks_field->Width / 10;
        heightfield = tanks_field->Height / 10;

        obstacles = gcnew array<walls^, 2>(heightfield, widthfield);
        for (int i = 0; i < heightfield; ++i)
        {
            for (int j = 0; j < widthfield; ++j)
            {
                obstacles[i, j] = gcnew walls();
            }
        }
        if (complexity == 3)
            Bullet::bulletspeed = 20;
        else 
            Bullet::bulletspeed = complexity == 1 || complexity == 2 ? 15 : 10;

        generate(20, 3, 8, 11, "breakwall.jpg", Point(725, 60), 1);
        generate(3, 2, 7, 10, "breakwall.jpg", Point(455, 315), 1);
        generate(3, 2, 7, 10, "breakwall.jpg", Point(1035, 315), 1);
        generate(12, 1, 5, 6, "stopwall.jpg", Point(625, 180), 2);
        generate(12, 1, 5, 6, "stopwall.jpg", Point(885, 180), 2);
        generate(1, 7, 7, 6, "stopwall.jpg", Point(335, 225), 2);
        generate(1, 7, 7, 6, "stopwall.jpg", Point(335, 465), 2);
        generate(1, 7, 7, 6, "stopwall.jpg", Point(990, 225), 2);
        generate(1, 7, 7, 6, "stopwall.jpg", Point(990, 465), 2);
        generate(5, 2, 7, 10, "breakwall.jpg", Point(395, 45), 1);
        generate(5, 2, 7, 10, "breakwall.jpg", Point(395, 525), 1);
        generate(5, 2, 7, 10, "breakwall.jpg", Point(1095, 45), 1);
        generate(5, 2, 7, 10, "breakwall.jpg", Point(1095, 525), 1);

        generate(5, 1, 5, 6, "stopwall.jpg", Point(tanks_field->Width - 70, 280), 2);
        generate(1, 2, 1, 6, "stopwall.jpg", Point(tanks_field->Width - 190, 400), 2);
        generate(4, 1, 2, 2, "stopwall.jpg", Point(tanks_field->Width - 190, 280), 2);
        generate(1, 1, 1, 6, "breakwall.jpg", Point(tanks_field->Width - 190, 340), 1);
        generate(1, 3, 1, 6, "breakwall.jpg", Point(tanks_field->Width - 160, 280), 1);
        generate(1, 2, 1, 6, "breakwall.jpg", Point(tanks_field->Width - 130, 400), 1);


        generate(5, 1, 5, 6, "stopwall.jpg", Point(40, 280), 2);
        generate(1, 2, 1, 6, "stopwall.jpg", Point(130, 280), 2);
        generate(4, 1, 1, 1, "stopwall.jpg", Point(160, 310), 2);
        generate(1, 1, 1, 6, "breakwall.jpg", Point(160, 340), 1);
        generate(1, 3, 1, 6, "breakwall.jpg", Point(70, 400), 1);
        generate(1, 2, 1, 6, "breakwall.jpg", Point(70, 280), 1);
        firstgame = false;
    }
    else
    {
        obstacles[player1->body->Location.Y / 10 - 1, player1->body->Location.X / 10 - 1]->presence = 0;
        obstacles[player2->body->Location.Y / 10 - 1, player2->body->Location.X / 10 - 1]->presence = 0;
        delete player1;
        delete player2;
    }
    label3->Text = "киллов: " + tanker::winspl1.ToString();
    label4->Text = "смертей: " + tanker::deadpl1.ToString();
    label5->Text = "киллов: " + tanker::winspl2.ToString();
    label2->Text = "смертей: " + tanker::deadpl2.ToString();
    player1 = gcnew tanker();
    player2 = gcnew tanker();
    this->tanks_field->Controls->Add(player1->body);
    this->tanks_field->Controls->Add(player2->body);
    player2->body->Location = Point(tanks_field->Width - 130, 330);
    player1->body->Location = Point(80, 330);
    obstacles[player1->body->Location.Y / 10 - 1, player1->body->Location.X / 10 - 1]->presence = 3;
    obstacles[player2->body->Location.Y / 10 - 1, player2->body->Location.X / 10 - 1]->presence = 3;

    this->timer1->Start();
    this->timermove->Start();

    player1->timershoot->Tick += gcnew System::EventHandler(player1, &game_field::tanker::timershootplayer);
    player2->timershoot->Tick += gcnew System::EventHandler(player2, &game_field::tanker::timershootplayer);
}
//задание направления танка
void Tanks::game_field::tanker::movetank(KeyEventArgs^ e)
{
    if (e->KeyValue == up)
    {   
        sight = cursight::up;
        side.x = 0;
        side.y = -1;
    }
    else if (e->KeyValue == down)
    {
        sight = cursight::down;
        side.x = 0;
        side.y = 1;
    }
    else if (e->KeyValue == right)
    {
        sight = cursight::right;
        side.x = 1;
        side.y = 0;
    }
    else if (e->KeyValue == left)
    {
        sight = cursight::left;
        side.x = -1;
        side.y = 0;
    }    
    else if (e->KeyCode == Keys::Escape)
    {
        timershoot->Enabled = false;
        side.x = 0;
        side.y = 0;
    }
}
//сброс направления танка
void Tanks::game_field::tanker::stoptank(KeyEventArgs^ e)
{
    if (e->KeyValue == up || e->KeyValue == down)
    {
        side.y = 0;
    }
    else if (e->KeyValue == right || e->KeyValue == left)
    {
        side.x = 0;
    }
}
//проверяем что перед танком ничего нет для движения и двигаем его
void Tanks::game_field::tanker::checkvoidplace(array<walls^, 2>^ obstacles, Panel^ tanks_field, String^ path, int locfield, int shift, int content, int locfield2, int shift2, int content2, bool vertical)
{
    body->Image = Image::FromFile(path);
    bool check = true;
    if (body->Location.Y >= 60 && body->Location.X >= 60 )
    {
        for (int i = locfield2; i < locfield2 + shift2; ++i)
        {       
            if (vertical)
            {
                if ((obstacles[content2, i]->presence >= 4 && obstacles[content2, i]->presence <= 6))
                {
                    switch (obstacles[content2, i]->presence)
                    {
                    case 4:
                        countHP += 20;
                        obstacles[content2, i]->presence = 0;
                        delete obstacles[content2, i]->body;
                        break;
                    case 5:
                        if (timershoot->Interval > 200)
                        {
                            timershoot->Interval -= 200;
                        }
                        obstacles[content2, i]->presence = 0;
                        delete obstacles[content2, i]->body;
                        break;
                    case 6:
                        powershoot += 15;
                        obstacles[content2, i]->presence = 0;
                        delete obstacles[content2, i]->body;
                        break;
                    }
                }
                check = obstacles[content2, i]->presence == 3 ? false : true;
            }
            else
            {
                if ((obstacles[i, content2]->presence >= 4 && obstacles[i, content2]->presence <= 6))
                {
                    switch (obstacles[i, content2]->presence)
                    {
                    case 4:
                        countHP += 20;
                        obstacles[i, content2]->presence = 0;
                        delete obstacles[i, content2]->body;
                        break;
                    case 5:
                        if (timershoot->Interval > 200)
                        {
                            timershoot->Interval -= 200;
                        }
                        obstacles[i, content2]->presence = 0;
                        delete obstacles[i, content2]->body;
                        break;
                    case 6:
                        powershoot += 15;
                        obstacles[i, content2]->presence = 0;
                        delete obstacles[i, content2]->body;
                        break;
                    }
                }
                check = obstacles[i, content2]->presence == 3 ? false : true;
            }            
        }
    }
    if (check && body->Location.Y >= 50, body->Location.X >= 50)
    {
        for (int i = locfield; i < locfield + shift; ++i)
        {
            if (vertical)
                check = obstacles[content, i]->presence == 0 ? true : false;
            else
                check = obstacles[i, content]->presence == 0 ? true : false;
            if (!check)
                break;
        }
    }
    if (check)
    {
        if ((path == upbody && body->Location.Y >= 45) || (path == downbody && body->Location.Y <= tanks_field->Height - 90) || (path == rightbody && body->Location.X <= tanks_field->Width - 90) || (path == leftbody && body->Location.X >= 45))
        {
            obstacles[body->Location.Y / 10 - 1, body->Location.X / 10 - 1]->presence = 0;
            body->Location = Point(body->Location.X + side.x*tankspeed, body->Location.Y + side.y * tankspeed);
            obstacles[body->Location.Y / 10 - 1, body->Location.X / 10 - 1]->presence = 3;
        }
    }
}
//сдвиг танка в нужном направлении
void Tanks::game_field::tanker::movesectank(array<walls^, 2>^ obstacles, Panel^ tanks_field)
{
    if (side.y == - 1)
    {
        checkvoidplace(obstacles, tanks_field, upbody, body->Location.X / 10 - 3, 7, body->Location.Y / 10 - 4, body->Location.X / 10 - 5, 10, body->Location.Y / 10 - 6, true);
    }
    else if (side.y == 1)
    {
        checkvoidplace(obstacles, tanks_field, downbody, body->Location.X / 10 - 3, 7, body->Location.Y / 10 + 4, body->Location.X / 10 - 5, 10, body->Location.Y / 10 + 4, true);
    }
    else if (side.x == 1)
    {
        checkvoidplace(obstacles, tanks_field, rightbody, body->Location.Y / 10 - 3, 7, body->Location.X / 10 + 4, body->Location.Y / 10 - 5, 9, body->Location.X / 10 + 5, false);
    }
    else if (side.x == - 1)
    {
        checkvoidplace(obstacles, tanks_field, leftbody, body->Location.Y / 10 - 3, 7, body->Location.X / 10 - 4, body->Location.Y / 10 - 5, 9, body->Location.X / 10 - 6, false);
    }   
}
//выстрел
void Tanks::game_field::tanker::shoot()
{
    Bullet^ bull = bullets->add();
    if (sight == cursight::up)
    {
        bull->body->Location = Point(body->Location.X + 13, body->Location.Y);
        bull->side.y = -1;
    }
    else if (sight == cursight::down)
    {
        bull->body->Location = Point(body->Location.X + 13, body->Location.Y);
        bull->side.y = 1;
    }
    else if (sight == cursight::left)
    {
        bull->body->Location = Point(body->Location.X, body->Location.Y + 13);
        bull->side.x = -1;
    }
    else if (sight == cursight::right)
    {
        bull->body->Location = Point(body->Location.X, body->Location.Y + 13);
        bull->side.x = 1;
    }
}
//генерация бонуса
void Tanks::game_field::genbonus()
{
    if (bonus != nullptr)
    {
        obstacles[bonus->Location.Y / 10 - 1, bonus->Location.X / 10 - 1]->presence = 0;
        delete bonus;
    }
    Random^ rand = gcnew Random();
    int selec = rand->Next(1, 4);
    bonus = gcnew PictureBox();
    bonus->Height = 50;
    bonus->Width = 50;
    bonus->SizeMode = PictureBoxSizeMode::StretchImage;
    
    
    bool check = false;
    while (!check)
    {
        bonus->Location = Point(rand->Next(100, this->tanks_field->Width - 80), rand->Next(100, this->tanks_field->Height - 100)); 
        for (int i = bonus->Location.Y / 10 - 5; i < bonus->Location.Y / 10 + 5; ++i)
        {
            for (int j = bonus->Location.X / 10 - 5; j < bonus->Location.X / 10 + 5; ++j)
            {
                check = obstacles[i, j]->presence == 0 ? true : false;
                if (!check)
                    break;
            }
            if (!check)
            {
                break;
            }
        }
    }
    switch (selec)
    {
    case 1:
        bonus->Image = Image::FromFile("hp.png");
        obstacles[bonus->Location.Y / 10 - 1, bonus->Location.X / 10 - 1]->presence = 4;
        break;
    case 2:
        bonus->Image = Image::FromFile("speedshoot.png");
        obstacles[bonus->Location.Y / 10 - 1, bonus->Location.X / 10 - 1]->presence = 5;
        break;
    case 3:
        bonus->Image = Image::FromFile("powershoot.png");
        obstacles[bonus->Location.Y / 10 - 1, bonus->Location.X / 10 - 1]->presence = 6;
        break;
    }
    obstacles[bonus->Location.Y / 10 - 1, bonus->Location.X / 10 - 1]->body = bonus;
    this->tanks_field->Controls->Add(bonus);
}
//генерация блоков препятствия
void Tanks::game_field::generate(int row, int column, int lim1, int lim2, String^ path, Point startloc, int type)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            if (i < lim1 || i > lim2)
            {
                PictureBox^ obs = gcnew PictureBox();
                tanks_field->Controls->Add(obs);
                obs->Image = Image::FromFile(path);
                obs->SizeMode = PictureBoxSizeMode::StretchImage;
                obs->Width = 30;
                obs->Height = 30;
                obs->Location = Point(startloc.X + j * 30, startloc.Y + i * 30);
                obstacles[obs->Location.Y / 10 - 1, obs->Location.X / 10 - 1]->presence = type;
                obstacles[obs->Location.Y / 10 - 1, obs->Location.X / 10 - 1]->body = obs;
            }
        }
    }
}
//сдвиг пули
void Tanks::game_field::tanker::movebullet(tanker^ player, array<walls^, 2>^ obstacles, Panel^ tanks_field, const int% complexity)
{
    list::node^ cur = bullets->head;
    while (cur != nullptr)
    {
        if (complexity < 2)
            tanks_field->Controls->Add(cur->bullet->body);
        cur->bullet->body->Location = Point(cur->bullet->body->Location.X + cur->bullet->side.x * Bullet::bulletspeed, cur->bullet->body->Location.Y + cur->bullet->side.y * Bullet::bulletspeed);
        list::node^ curnext = cur->next;
        if ((player->body->Location.X - 15 <= cur->bullet->body->Location.X && player->body->Location.X + 35 >= cur->bullet->body->Location.X) && (player->body->Location.Y - 15 <= cur->bullet->body->Location.Y && player->body->Location.Y + 35 >= cur->bullet->body->Location.Y))
        {
            bullets->remove(cur);
            player->countHP -= powershoot;
            if (player->countHP <= 0)
            {
                player->live = false;
            }
        }
        else if (cur->bullet->body->Location.X <= 30 || cur->bullet->body->Location.X >= tanks_field->Width - 25 || cur->bullet->body->Location.Y <= 18 || cur->bullet->body->Location.Y >= tanks_field->Height - 18)
        {
            bullets->remove(cur);
        }
        else
        {
            bool breaking;
            for (int j = cur->bullet->body->Location.Y / 10 - 2; j < cur->bullet->body->Location.Y / 10 + 2; ++j)
            {
                for (int g = cur->bullet->body->Location.X / 10 - 3; g < cur->bullet->body->Location.X / 10 + 1; ++g)
                {
                    if (obstacles[j, g]->presence == 1)
                    {
                        obstacles[j, g]->presence = 0;
                        delete obstacles[j, g]->body;
                        bullets->remove(cur);
                        tanks_field->Refresh();
                        breaking = true;
                        break;
                    }
                    else if (obstacles[j, g]->presence == 2)
                    {
                        bullets->remove(cur);
                        tanks_field->Refresh();
                        breaking = true;
                        break;
                    }
                }
                if (breaking)
                    break;
            }
        }
        cur = curnext;
    }
}
//вызов выстрела при зажатой клавише для стрельбы
System::Void Tanks::game_field::tanker::timershootplayer(System::Object^ sender, System::EventArgs^ e)
{
    if (lastshoot)
    {
        lastshoot = false;
        firstshoot = true;
        timershoot->Enabled = false;
    }
    else
    {
        shoot();
    }
}
//действие при открытии формы
System::Void Tanks::game_field::game_field_Load(System::Object^ sender, System::EventArgs^ e)
{
    startgame();   
}
//таймер с интервалом в 1сек
System::Void Tanks::game_field::timer(System::Object^ sender, System::EventArgs^ e)
{
    timesec--; 
    counttimeforbonus += 1;
    if (counttimeforbonus == 20 && ((timemin == 0 && timesec >= 10) || timemin > 0))
    {
        genbonus();
        counttimeforbonus = 0;
    }

    if (timesec <= 0 && timemin != 0)
    {
        timemin--;
        timesec = 59;
    }
    if (timemin == 0 && timesec == 0)
    {
        label7->Text = "Время: 0:0";
        timer1->Stop();
        timermove->Stop();
        player1->timershoot->Enabled = false;
        player2->timershoot->Enabled = false;
        end = true;

        if (label1->Text != label6->Text)
        {
            FileStream^ file = gcnew FileStream("base.bin", FileMode::Open, FileAccess::ReadWrite);

            BinaryReader^ reader = gcnew BinaryReader(file);
            BinaryWriter^ writer = gcnew BinaryWriter(file);
            bool find = false;

            if (file->CanRead && file->CanWrite)
            {
                while (file->Position < file->Length)
                {
                    String^ word = reader->ReadString();

                    if (word == label1->Text || word == label6->Text)
                    {
                        if (word == label1->Text)
                        {
                            int counts[4];
                            reader->ReadString();
                            long long pos = file->Position;
                            counts[0] = tanker::winspl1 > tanker::winspl2 ? reader->ReadInt32() + 1 : reader->ReadInt32();
                            counts[1] = tanker::winspl1 < tanker::winspl2 ? reader->ReadInt32() + 1 : reader->ReadInt32();
                            counts[2] = reader->ReadInt32() + tanker::winspl1;
                            counts[3] = reader->ReadInt32() + tanker::deadpl1;
                            writer->BaseStream->Seek(pos, SeekOrigin::Begin);
                            for (int i = 0; i < 4; ++i)
                                writer->Write(counts[i]);
                            if (find)
                                break;
                            find = true;
                        }
                        else
                        {
                            int counts[4];
                            reader->ReadString();
                            long long pos = file->Position;
                            counts[0] = tanker::winspl2 > tanker::winspl1 ? reader->ReadInt32() + 1 : reader->ReadInt32();
                            counts[1] = tanker::winspl2 < tanker::winspl1 ? reader->ReadInt32() + 1 : reader->ReadInt32();
                            counts[2] = reader->ReadInt32() + tanker::winspl2;
                            counts[3] = reader->ReadInt32() + tanker::deadpl2;
                            writer->BaseStream->Seek(pos, SeekOrigin::Begin);
                            for (int i = 0; i < 4; ++i)
                                writer->Write(counts[i]);
                            if (find)
                                break;
                            find = true;
                        }
                    }
                }
                file->Close();
            }
        }
        gameover^ form = gcnew gameover();
        form->label16->Text = label1->Text;
        form->label17->Text = label6->Text;
        form->label20->Text = label3->Text;
        form->label21->Text = label4->Text;
        form->label22->Text = label5->Text;
        form->label23->Text = label2->Text;
        if (tanker::winspl1 == tanker::winspl2)
            form->label19->Text = "НИЧЬЯ";
        else
            form->label19->Text = tanker::winspl1 > tanker::winspl2 ? label1->Text : label6->Text;
        form->label19->Location = Point(form->Width / 2 - form->label19->Width / 2, form->label19->Location.Y);
        form->ShowDialog();
        if (!form->choseretryleave)
        {
            this->Owner->Show();
            Close();
        }
        else
        {
            firstgame = true;
            delete[] obstacles;
            startgame();
        }
    } 
    label7->Text = "Время: " + timemin.ToString() + ":" + (timesec).ToString();
}
//вызов паузы при нажатии на кнопку паузы или кнопку клавиатуры Esc
System::Void Tanks::game_field::Pause_Click(System::Object^ sender, System::EventArgs^ e)
{
    pause^ form = gcnew pause();
    form->comboBox1->SelectedIndex = complexity;
    timer1->Stop();
    timermove->Stop();
    form->ShowDialog();
    complexity = form->comboBox1->SelectedIndex;
    bool exit = false;
    if (complexity == 3)
        Bullet::bulletspeed = 20;
    else
        Bullet::bulletspeed = complexity == 1 || complexity == 2 ? 15 : 10;
    if (form->cursost == 1)
    {
        System::Windows::Forms::DialogResult result = MessageBox::Show("Ваши результаты не будут сохранены,\nвы уверены что хотите начать сначала?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
        if (result == System::Windows::Forms::DialogResult::Yes)
        {
            firstgame = true;
            for (int i = 0; i < heightfield; ++i)
            {
                for (int j = 0; j < widthfield; ++j)
                {
                    delete obstacles[i, j];
                }
            }
            delete[] obstacles;
            startgame();
        }
        else
            Pause_Click(sender, e);
    }
    else if (form->cursost == -1)
    {
        System::Windows::Forms::DialogResult result = MessageBox::Show("Ваши результаты не будут сохранены,\nвы уверены что хотите выйти?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

        if (result == System::Windows::Forms::DialogResult::Yes)
        {
            this->Owner->Show();
            Close();
            exit = true;
        }
        else
            Pause_Click(sender, e);
    }
    if (!exit)
    {
        timer1->Start();
        timermove->Start();
    }
}
//вызов функций задания направления и выстрела для управления танком
System::Void Tanks::game_field::tankmoving(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if (e->KeyCode == Keys::Escape)
    {
        Pause_Click(sender, e);
    }
    if (e->KeyValue == player1->shootbtn)
    {
        player1->timershoot->Enabled = true;
        if (player1->firstshoot)
        {
            player1->shoot();
            player1->firstshoot = false;
        }    
    }
    if (e->KeyValue == player2->shootbtn)
    {
        player2->timershoot->Enabled = true;
        if (player2->firstshoot)
        {
            player2->shoot();
            player2->firstshoot = false;
        }
    }
    player1->movetank(e);
    player2->movetank(e);
}
//таймер с интервалом 10 мс
System::Void Tanks::game_field::timermove_Tick(System::Object^ sender, System::EventArgs^ e)
{
    label8->Text = player1->countHP.ToString();
    label10->Text = player2->countHP.ToString();
    label9->Text = player1->powershoot.ToString();
    label11->Text = player2->powershoot.ToString();
    label12->Text = "раз в " + player1->timershoot->Interval.ToString() + "мс";
    label13->Text = "раз в " + player2->timershoot->Interval.ToString() + "мс";
    player1->movesectank(obstacles, tanks_field);
    player2->movesectank(obstacles, tanks_field);

    player1->movebullet(player2, obstacles, tanks_field, complexity);
    player2->movebullet(player1, obstacles, tanks_field, complexity);
    if (!player1->live)
    {
        tanker::deadpl1++;
        tanker::winspl2++;
        startgame();
    }
    if(!player2->live)
    {
        tanker::deadpl2++;
        tanker::winspl1++;
        startgame();
    }
}
//вызов функций остановки танка и прекращения выстрела
System::Void Tanks::game_field::tankmovingstop(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if (e->KeyValue == player1->shootbtn)
    {
        player1->lastshoot = true;
    }
    if (e->KeyValue == player2->shootbtn)
    {
        player2->lastshoot = true;
    }
    player1->stoptank(e);
    player2->stoptank(e);
}