#include "pause.h"


//������� ������ ����������
System::Void Tanks::pause::ClickToContinue(System::Object^ sender, System::EventArgs^ e)
{
	cursost = 0;
	Close();
}
//������� ������ ������
System::Void Tanks::pause::ClickToRetry(System::Object^ sender, System::EventArgs^ e)
{
	cursost = 1;
	Close();
}
//������� ������ �����
System::Void Tanks::pause::ClickToLeave(System::Object^ sender, System::EventArgs^ e)
{
	cursost = -1;
	Close();
}
//������� ������ ���������� Esc
System::Void Tanks::pause::leavekey(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (Char)Keys::Escape)
	{
		cursost = 0;
		Close();
	}
}
//������ ���������� ��������
System::Void Tanks::pause::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::Orange;

}
//������ ���������� �� ��������
System::Void Tanks::pause::lostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = SystemColors::Control;
}
//������� ������ ���������� Enter
System::Void Tanks::pause::downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		button2->Focus();
	}
}
