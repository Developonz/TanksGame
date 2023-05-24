#include "main_form.h"


//наведение мыши
System::Void Tanks::main_form::btn_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->ForeColor = Color::Blue;
	button->Focus();
}
//нажатие на кнопку играть
System::Void Tanks::main_form::ClickToPlay(System::Object^ sender, System::EventArgs^ e)
{
	this->panel1->Visible = true;
	comboBox1->Focus();
	this->comboBox1->SelectedIndex = 0;
	
}
//нажатие на кнопку выбрать игроков
System::Void Tanks::main_form::ClickToPChoosePlayer(System::Object^ sender, System::EventArgs^ e)
{
	autorization^ autoriz = gcnew autorization();
	autoriz->Owner = this;
	autoriz->ShowDialog();
	player1 = autoriz->player1 != "NONAME" ? autoriz->player1 : player1;
	player2 = autoriz->player2 != "NONAME" ? autoriz->player2 : player2;
	firstopenstat = true;
}
//нажатие на кнопку выход
System::Void Tanks::main_form::ClickToExit(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
//нажатие на кнопку начать
System::Void Tanks::main_form::ClickToBeginGame(System::Object^ sender, System::EventArgs^ e)
{
	firstopenstat = true;
	this->panel1->Visible = false;
	game_field^ form = gcnew game_field();
	form->label1->Text = player1;
	form->label6->Text = player2;
	form->complexity = this->comboBox1->SelectedIndex;
	form->firsttimemin = int(this->numericUpDown1->Value);
	form->firsttimesec = int(this->numericUpDown2->Value);
	form->Owner = this;
	checkingforerror = true;
	button1->Focus();
	checkingforerror = false;
	Hide();
	form->Show();
}
//нажатие на кнопку отмена
System::Void Tanks::main_form::ClickToCancelGame(System::Object^ sender, System::EventArgs^ e)
{
	this->panel1->Visible = false;
	button1->Focus();
}
//нажатие на кнопку статистика
System::Void Tanks::main_form::ClickToOpenStatictic(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	button9->Focus();
    label16->Text = player1;
    label17->Text = player2;
	if (firstopenstat)//чтобы не перепроверять данные, которые никак не изменились
	{
		firstopenstat = false;
		if (label16->Text != label17->Text)//проверка на то что игроки авторизировались
		{
			FileStream^ file = gcnew FileStream("base.bin", FileMode::Open, FileAccess::ReadWrite);
			BinaryReader^ reader = gcnew BinaryReader(file);

			bool find = false;
			int datapl1[4]{};//хранение данных игрока
			int datapl2[4]{};
			//читаем и сохраняем данные об игроках
			if (file->CanRead && file->CanWrite)
			{
				while (file->Position < file->Length)
				{
					String^ word = reader->ReadString();

					if (word == label16->Text || word == label17->Text)
					{
						if (word == label16->Text)
						{
							reader->ReadString();
							for (int i = 0; i < 4; ++i)
								datapl1[i] = reader->ReadInt32();
							if (find)
								break;
							find = true;
						}
						else
						{
							reader->ReadString();
							for (int i = 0; i < 4; ++i)
								datapl2[i] = reader->ReadInt32();
							if (find)
								break;
							find = true;
						}
					}
					else
					{
						reader->ReadString();
						for (int i = 0; i < 4; ++i)
							reader->ReadInt32();
					}
				}
				file->Close();
				//выводим полученные об игроках данные
				label6->Text = "побед: " + datapl1[0].ToString();
				label10->Text = "поражений: " + datapl1[1].ToString();
				label20->Text = "киллов: " + datapl1[2].ToString();
				label21->Text = "смертей: " + datapl1[3].ToString();
				label7->Text = "побед: " + datapl2[0].ToString();
				label11->Text = "поражений: " + datapl2[1].ToString();
				label9->Text = "киллов: " + datapl2[2].ToString();
				label8->Text = "смертей: " + datapl2[3].ToString();
			}
		}
		else
		{
			label6->Text = "побед: -";
			label10->Text = "поражений: -";
			label20->Text = "киллов: -";
			label21->Text = "смертей: -";
			label7->Text = "побед: -";
			label11->Text = "поражений: -";
			label9->Text = "киллов: -";
			label8->Text = "смертей: -";
		}
	}
}
//нажатие на кнопку назад
System::Void Tanks::main_form::ClickToBack(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = false;
	button4->Focus();
}
//кнопка становится активной
System::Void Tanks::main_form::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->ForeColor = Color::Blue;
	control->BackColor = Color::Yellow;
}
//кнопка теряет фокус
System::Void Tanks::main_form::lostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = SystemColors::Control;
	control->ForeColor = Color::Black;
	if (!checkingforerror)
	{
		if (control == button8)
		{
			button7->Focus();
		}
		else if (control == button7)
		{
			button8->Focus();
		}
		else if (control == button9)
		{
			button9->Focus();
		}
	}
}
//нажатие на кнопку клавиатуры Enter
System::Void Tanks::main_form::downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		this->SelectNextControl((Control^)sender, true, true, true, true);
	}
}
//нажатие на элементы, регулирующие время игры
System::Void Tanks::main_form::ClickToNumeric(System::Object^ sender, System::EventArgs^ e)
{
	NumericUpDown^ elem = (NumericUpDown^)sender;
	checkingforerror = true;
	elem->Focus();
	checkingforerror = false;
}
//нажатие на элемент, регулирующий сложность игры
System::Void Tanks::main_form::ClickToCombo(System::Object^ sender, System::EventArgs^ e)
{
	ComboBox^ elem = (ComboBox^)sender;
	checkingforerror = true;
	elem->Focus();
	elem->DroppedDown = true;
	checkingforerror = false;
}
//нажатие на кнопку об игре
System::Void Tanks::main_form::about(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Название игры - Tanks\nАвтор - Запруто Евгений Алексеевич\nКонтакты - zhenya2k04@gmail.com\nВерсия - 1.0\nПоследнее изменение 20.05.2023\n", "Об игре", MessageBoxButtons::OK, MessageBoxIcon::None);
}
//нажатие на кнопку справка
System::Void Tanks::main_form::info(System::Object^ sender, System::EventArgs^ e)
{
	Help::ShowHelp(this, "info.chm");
}
