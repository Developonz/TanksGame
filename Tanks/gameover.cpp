#include "gameover.h"

//������� ������ �����
System::Void Tanks::gameover::ClickToExit(System::Object^ sender, System::EventArgs^ e)
{
	Close();
}
//������� ������ ������
System::Void Tanks::gameover::ClickToRetry(System::Object^ sender, System::EventArgs^ e)
{
	choseretryleave = true;
	Close();
}
//������ ���������� ��������
System::Void Tanks::gameover::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::Yellow;
}
//������ ���������� �� ��������
System::Void Tanks::gameover::lostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = SystemColors::Control;
}
