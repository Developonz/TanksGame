#include "main_form.h"


//��������� ����
System::Void Tanks::main_form::btn_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	button->ForeColor = Color::Blue;
	button->Focus();
}
//������� �� ������ ������
System::Void Tanks::main_form::ClickToPlay(System::Object^ sender, System::EventArgs^ e)
{
	this->panel1->Visible = true;
	comboBox1->Focus();
	this->comboBox1->SelectedIndex = 0;
	
}
//������� �� ������ ������� �������
System::Void Tanks::main_form::ClickToPChoosePlayer(System::Object^ sender, System::EventArgs^ e)
{
	autorization^ autoriz = gcnew autorization();
	autoriz->Owner = this;
	autoriz->ShowDialog();
	player1 = autoriz->player1 != "NONAME" ? autoriz->player1 : player1;
	player2 = autoriz->player2 != "NONAME" ? autoriz->player2 : player2;
	firstopenstat = true;
}
//������� �� ������ �����
System::Void Tanks::main_form::ClickToExit(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
//������� �� ������ ������
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
//������� �� ������ ������
System::Void Tanks::main_form::ClickToCancelGame(System::Object^ sender, System::EventArgs^ e)
{
	this->panel1->Visible = false;
	button1->Focus();
}
//������� �� ������ ����������
System::Void Tanks::main_form::ClickToOpenStatictic(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	button9->Focus();
    label16->Text = player1;
    label17->Text = player2;
	if (firstopenstat)//����� �� ������������� ������, ������� ����� �� ����������
	{
		firstopenstat = false;
		if (label16->Text != label17->Text)//�������� �� �� ��� ������ ����������������
		{
			FileStream^ file = gcnew FileStream("base.bin", FileMode::Open, FileAccess::ReadWrite);
			BinaryReader^ reader = gcnew BinaryReader(file);

			bool find = false;
			int datapl1[4]{};//�������� ������ ������
			int datapl2[4]{};
			//������ � ��������� ������ �� �������
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
				//������� ���������� �� ������� ������
				label6->Text = "�����: " + datapl1[0].ToString();
				label10->Text = "���������: " + datapl1[1].ToString();
				label20->Text = "������: " + datapl1[2].ToString();
				label21->Text = "�������: " + datapl1[3].ToString();
				label7->Text = "�����: " + datapl2[0].ToString();
				label11->Text = "���������: " + datapl2[1].ToString();
				label9->Text = "������: " + datapl2[2].ToString();
				label8->Text = "�������: " + datapl2[3].ToString();
			}
		}
		else
		{
			label6->Text = "�����: -";
			label10->Text = "���������: -";
			label20->Text = "������: -";
			label21->Text = "�������: -";
			label7->Text = "�����: -";
			label11->Text = "���������: -";
			label9->Text = "������: -";
			label8->Text = "�������: -";
		}
	}
}
//������� �� ������ �����
System::Void Tanks::main_form::ClickToBack(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = false;
	button4->Focus();
}
//������ ���������� ��������
System::Void Tanks::main_form::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->ForeColor = Color::Blue;
	control->BackColor = Color::Yellow;
}
//������ ������ �����
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
//������� �� ������ ���������� Enter
System::Void Tanks::main_form::downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		this->SelectNextControl((Control^)sender, true, true, true, true);
	}
}
//������� �� ��������, ������������ ����� ����
System::Void Tanks::main_form::ClickToNumeric(System::Object^ sender, System::EventArgs^ e)
{
	NumericUpDown^ elem = (NumericUpDown^)sender;
	checkingforerror = true;
	elem->Focus();
	checkingforerror = false;
}
//������� �� �������, ������������ ��������� ����
System::Void Tanks::main_form::ClickToCombo(System::Object^ sender, System::EventArgs^ e)
{
	ComboBox^ elem = (ComboBox^)sender;
	checkingforerror = true;
	elem->Focus();
	elem->DroppedDown = true;
	checkingforerror = false;
}
//������� �� ������ �� ����
System::Void Tanks::main_form::about(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�������� ���� - Tanks\n����� - ������� ������� ����������\n�������� - zhenya2k04@gmail.com\n������ - 1.0\n��������� ��������� 20.05.2023\n", "�� ����", MessageBoxButtons::OK, MessageBoxIcon::None);
}
//������� �� ������ �������
System::Void Tanks::main_form::info(System::Object^ sender, System::EventArgs^ e)
{
	Help::ShowHelp(this, "info.chm");
}
