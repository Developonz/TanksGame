#include "pause.h"


//нажатие кнопки продолжить
System::Void Tanks::pause::ClickToContinue(System::Object^ sender, System::EventArgs^ e)
{
	cursost = 0;
	Close();
}
//нажатие кнопки заново
System::Void Tanks::pause::ClickToRetry(System::Object^ sender, System::EventArgs^ e)
{
	cursost = 1;
	Close();
}
//нажатие кнопки выйти
System::Void Tanks::pause::ClickToLeave(System::Object^ sender, System::EventArgs^ e)
{
	cursost = -1;
	Close();
}
//нажатие кнопки клавиатуры Esc
System::Void Tanks::pause::leavekey(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (Char)Keys::Escape)
	{
		cursost = 0;
		Close();
	}
}
//кнопка становится активной
System::Void Tanks::pause::gotFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = Color::Orange;

}
//кнопка становится не активной
System::Void Tanks::pause::lostFocus(System::Object^ sender, System::EventArgs^ e)
{
	Control^ control = dynamic_cast<Control^>(sender);
	control->BackColor = SystemColors::Control;
}
//нажатие кнопки клавиатуры Enter
System::Void Tanks::pause::downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == Keys::Enter)
	{
		button2->Focus();
	}
}
