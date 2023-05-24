#include "registration.h"

//������� �� ������ ������
System::Void Tanks::registration::button_cancel(System::Object^ sender, System::EventArgs^ e)
{
	this->Owner->Show();
	Close();
}
//������� �� ������ �����������
System::Void Tanks::registration::button_confirm(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox2->Text == textBox3->Text)
	{
		if (textBox1->Text->Length >= 3 && textBox2->Text->Length >= 5)
		{
			FileStream^ fin = gcnew FileStream("base.bin", FileMode::Open);
			if (fin->CanRead)
			{
				BinaryReader^ br = gcnew BinaryReader(fin);
				bool check;
				while (br->BaseStream->Position < br->BaseStream->Length) //��������� ��������������� �� ��� ����� � ����� ������
				{
					if (textBox1->Text == br->ReadString())
					{
						MessageBox::Show("������� � ����� ������ ��� ����������", "Error", MessageBoxButtons::OK);
						checkingforerror = true;
						textBox1->Focus();
						checkingforerror = false;
						check = true;
						break;
					}
					br->ReadString();
					for (int i = 0; i < 4; ++i)
					{
						br->ReadInt32();
					}					
				}
				fin->Close();
				if (!check)
				{
					FileStream^ fout = gcnew FileStream("base.bin", FileMode::Append);
					if (fout->CanWrite)
					{
						BinaryWriter^ br = gcnew BinaryWriter(fout);
						MessageBox::Show("�������", "Success", MessageBoxButtons::OK);
						br->Write(textBox1->Text);//�����
						br->Write(textBox2->Text);//������
						br->Write(0);//���-�� �����
						br->Write(0);//���-�� ���������
						br->Write(0);//���-�� �������
						br->Write(0);//���-�� �������
						fout->Close();
						br->Close();
					}
					else
					{
						MessageBox::Show("��������� �������� ������ � ������ �������������", "Error", MessageBoxButtons::OK);
						checkingforerror = true;
						textBox1->Focus();
						checkingforerror = false;
					}
				}
			}
			else
			{
				MessageBox::Show("��������� ������� ����", "Error", MessageBoxButtons::OK);
				checkingforerror = true;
				textBox1->Focus();
				checkingforerror = false;
			}
		}
		else
		{
			MessageBox::Show("������������ �������� � ������ ��� ������", "Error", MessageBoxButtons::OK);
			checkingforerror = true;
			textBox1->Focus();
			checkingforerror = false;
		}
	}
	else
	{
		MessageBox::Show("������ �� ���������", "Error", MessageBoxButtons::OK);
		checkingforerror = true;
		textBox1->Focus();
		checkingforerror = false;
	}
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
}
//������� �� ������ ���������� Enter ����� ����� ��������� �� ��������� ����� ������
System::Void Tanks::registration::downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
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
System::Void Tanks::registration::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::Orange;
}
//������ ���������� �� ��������
System::Void Tanks::registration::lostFocus(System::Object^ sender, System::EventArgs^ e)
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
System::Void Tanks::registration::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox2->UseSystemPasswordChar)
	{
		// ���� ������� ������, ���������� ��
		textBox2->UseSystemPasswordChar = false;
		pictureBox1->Image = Image::FromFile("eye2.png");
	}
	else
	{
		// ���� ������� ��� ������, �������� ��
		textBox2->UseSystemPasswordChar = true;
		pictureBox1->Image = Image::FromFile("eye1.png");
	}
}
//������� �� ���������� ����� �������/�������� ������
System::Void Tanks::registration::pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox3->UseSystemPasswordChar)
	{
		// ���� ������� ������, ���������� ��
		textBox3->UseSystemPasswordChar = false;
		pictureBox2->Image = Image::FromFile("eye2.png");
	}
	else
	{
		// ���� ������� ��� ������, �������� ��
		textBox3->UseSystemPasswordChar = true;
		pictureBox2->Image = Image::FromFile("eye1.png");
	}
}
//��������� ���� �� ������
System::Void Tanks::registration::MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ btn = (Button^)sender;
	btn->Focus();
}
//������� �� ������� ����� ������
System::Void Tanks::registration::ClickToText(System::Object^ sender, System::EventArgs^ e)
{
	TextBox^ txt = (TextBox^)sender;
	checkingforerror = true;
	txt->Focus();
	checkingforerror = false;
}
