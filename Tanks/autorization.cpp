#include "autorization.h"

//наведение мыши на label нет аккаунта?
System::Void Tanks::autorization::noacc(System::Object^ sender, System::EventArgs^ e)
{
	label2->ForeColor = Color::DeepSkyBlue;
}
//убираем мышь с label нет аккаунта?
System::Void Tanks::autorization::noaccleave(System::Object^ sender, System::EventArgs^ e)
{
	label2->ForeColor = Color::White;
}
//нажатие на кнопку отмена
System::Void Tanks::autorization::ClickToCancel(System::Object^ sender, System::EventArgs^ e)
{
	Close();
}
//нажатие на label нет аккаунта?
System::Void Tanks::autorization::label2_Click(System::Object^ sender, System::EventArgs^ e)
{
	registration^ form_reg = gcnew registration();
	form_reg->Owner = this;
	this->Hide();
	form_reg->ShowDialog();
}
//нажатие на кнопку подтвердить
System::Void Tanks::autorization::ClickToConfirm(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text != textBox3->Text) //проверка на то что логины не совпадают
	{
		FileStream^ fin = gcnew FileStream("base.bin", FileMode::Open);
		bool log1 = false;
		bool log2 = false;
		bool first = false;
		bool both = false;
		if (fin->CanRead)
		{
			BinaryReader^ br = gcnew BinaryReader(fin);
			String^ word;
			while (br->BaseStream->Position < br->BaseStream->Length)
			{
				word = br->ReadString();
				if (word == textBox1->Text || word == textBox3->Text)//нашли игрока
				{				
					if (word == textBox1->Text)
					{
						word = br->ReadString();
						log1 = word == textBox2->Text ? true : false;//совпал или нет пароль
						if (first)//находили ли уже другого игрока
						{
							both = true;
						}
						first = true;
					}
					else if (word == textBox3->Text)
					{
						word = br->ReadString();
						log2 = word == textBox4->Text ? true : false;
						if (first)
						{
							both = true;
						}
						first = true;
					}
				}
				else
				{
					br->ReadString();
				}
				if (both)
					break;
				for (int i = 0; i < 4; ++i)
				{
					br->ReadInt32();
				}
			}
		}
		else
		{
			MessageBox::Show("Не удалось получить доступ к данным пользователей", "Error", MessageBoxButtons::OK);
		}
		fin->Close();
		if (!log1 || !log2)
		{
			if (!log1 && !log2)
				MessageBox::Show("Неверный логин или пароль для 1-го игрока и 2-го игрока", "Error", MessageBoxButtons::OK);
			else if (!log1)
				MessageBox::Show("Неверный логин или пароль для 1-го игрока", "Error", MessageBoxButtons::OK);
			else if (!log2)
				MessageBox::Show("Неверный логин или пароль для 2-го игрока", "Error", MessageBoxButtons::OK);
			checkingforerror = true;
			textBox1->Focus();
			checkingforerror = false;
		}
		else if (both)
		{
			player1 = textBox1->Text;
			player2 = textBox3->Text;
			this->Owner->Show();
			Close();
		}
	}
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
}
//нажатие на кнопку клавиатуры Enter когда фокус находится на элементах ввода данных
System::Void Tanks::autorization::downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (Char)Keys::Enter)
	{
		Control^ currentControl = dynamic_cast<Control^>(sender);
		if (currentControl != nullptr) {
			this->SelectNextControl(currentControl, true, true, true, true);
		}

	}
}
//кнопка становится активной
System::Void Tanks::autorization::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::Orange;
}
//кнопка становится не активной
System::Void Tanks::autorization::lostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::FromArgb(255, 255, 192);
	if (!checkingforerror)
	{
		if (control == button1)
		{
			button2->Focus();
		}
		else if (control == button2)
		{
			button1->Focus();
		}
	}
}
//нажатие на пикчербокс чтобы скртить/показать пароль
System::Void Tanks::autorization::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox2->UseSystemPasswordChar)
	{
		// Если символы скрыты, показываем их
		textBox2->UseSystemPasswordChar = false;
		pictureBox1->Image = Image::FromFile("D:\\study\\программирование\\курсовая\\eye2.png");
	}
	else
	{
		// Если символы уже видимы, скрываем их
		textBox2->UseSystemPasswordChar = true;
		pictureBox1->Image = Image::FromFile("D:\\study\\программирование\\курсовая\\eye1.png");
	}
}
//нажатие на пикчербокс чтобы скртить/показать пароль
System::Void Tanks::autorization::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox4->UseSystemPasswordChar)
	{
		// Если символы скрыты, показываем их
		textBox4->UseSystemPasswordChar = false;
		pictureBox2->Image = Image::FromFile("D:\\study\\программирование\\курсовая\\eye2.png");
	}
	else
	{
		// Если символы уже видимы, скрываем их
		textBox4->UseSystemPasswordChar = true;
		pictureBox2->Image = Image::FromFile("D:\\study\\программирование\\курсовая\\eye1.png");
	}
}
//наведение мыши на кнопку
System::Void Tanks::autorization::MouseEnterbtn(System::Object^ sender, System::EventArgs^ e)
{
	Button^ btn = (Button^)sender;
	btn->Focus();
}
//нажатие на элемент ввода данных
System::Void Tanks::autorization::ClickToText(System::Object^ sender, System::EventArgs^ e)
{
	TextBox^ txt = (TextBox^)sender;
	checkingforerror = true;
	txt->Focus();
	checkingforerror = false;
}
