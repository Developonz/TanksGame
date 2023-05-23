#include "gameover.h"

//нажатие кнопки выйти
System::Void Tanks::gameover::ClickToExit(System::Object^ sender, System::EventArgs^ e)
{
	Close();
}
//нажатие кнопки заново
System::Void Tanks::gameover::ClickToRetry(System::Object^ sender, System::EventArgs^ e)
{
	choseretryleave = true;
	Close();
}
//кнопка становится активной
System::Void Tanks::gameover::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::Yellow;
}
//кнопка становится не активной
System::Void Tanks::gameover::lostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = SystemColors::Control;
}
