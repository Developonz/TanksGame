#include "autorization.h"

//��������� ���� �� label ��� ��������?
System::Void Tanks::autorization::noacc(System::Object^ sender, System::EventArgs^ e)
{
	label2->ForeColor = Color::DeepSkyBlue;
}
//������� ���� � label ��� ��������?
System::Void Tanks::autorization::noaccleave(System::Object^ sender, System::EventArgs^ e)
{
	label2->ForeColor = Color::White;
}
//������� �� ������ ������
System::Void Tanks::autorization::ClickToCancel(System::Object^ sender, System::EventArgs^ e)
{
	Close();
}
//������� �� label ��� ��������?
System::Void Tanks::autorization::label2_Click(System::Object^ sender, System::EventArgs^ e)
{
	registration^ form_reg = gcnew registration();
	form_reg->Owner = this;
	this->Hide();
	form_reg->ShowDialog();
}
//������� �� ������ �����������
System::Void Tanks::autorization::ClickToConfirm(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text != textBox3->Text) //�������� �� �� ��� ������ �� ���������
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
				if (word == textBox1->Text || word == textBox3->Text)//����� ������
				{				
					if (word == textBox1->Text)
					{
						word = br->ReadString();
						log1 = word == textBox2->Text ? true : false;//������ ��� ��� ������
						if (first)//�������� �� ��� ������� ������
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
			MessageBox::Show("�� ������� �������� ������ � ������ �������������", "Error", MessageBoxButtons::OK);
		}
		fin->Close();
		if (!log1 || !log2)
		{
			if (!log1 && !log2)
				MessageBox::Show("�������� ����� ��� ������ ��� 1-�� ������ � 2-�� ������", "Error", MessageBoxButtons::OK);
			else if (!log1)
				MessageBox::Show("�������� ����� ��� ������ ��� 1-�� ������", "Error", MessageBoxButtons::OK);
			else if (!log2)
				MessageBox::Show("�������� ����� ��� ������ ��� 2-�� ������", "Error", MessageBoxButtons::OK);
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
//������� �� ������ ���������� Enter ����� ����� ��������� �� ��������� ����� ������
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
//������ ���������� ��������
System::Void Tanks::autorization::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::Orange;
}
//������ ���������� �� ��������
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
//������� �� ���������� ����� �������/�������� ������
System::Void Tanks::autorization::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox2->UseSystemPasswordChar)
	{
		// ���� ������� ������, ���������� ��
		textBox2->UseSystemPasswordChar = false;
		pictureBox1->Image = Image::FromFile("D:\\study\\����������������\\��������\\eye2.png");
	}
	else
	{
		// ���� ������� ��� ������, �������� ��
		textBox2->UseSystemPasswordChar = true;
		pictureBox1->Image = Image::FromFile("D:\\study\\����������������\\��������\\eye1.png");
	}
}
//������� �� ���������� ����� �������/�������� ������
System::Void Tanks::autorization::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox4->UseSystemPasswordChar)
	{
		// ���� ������� ������, ���������� ��
		textBox4->UseSystemPasswordChar = false;
		pictureBox2->Image = Image::FromFile("D:\\study\\����������������\\��������\\eye2.png");
	}
	else
	{
		// ���� ������� ��� ������, �������� ��
		textBox4->UseSystemPasswordChar = true;
		pictureBox2->Image = Image::FromFile("D:\\study\\����������������\\��������\\eye1.png");
	}
}
//��������� ���� �� ������
System::Void Tanks::autorization::MouseEnterbtn(System::Object^ sender, System::EventArgs^ e)
{
	Button^ btn = (Button^)sender;
	btn->Focus();
}
//������� �� ������� ����� ������
System::Void Tanks::autorization::ClickToText(System::Object^ sender, System::EventArgs^ e)
{
	TextBox^ txt = (TextBox^)sender;
	checkingforerror = true;
	txt->Focus();
	checkingforerror = false;
}
