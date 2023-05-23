#include "SplashScreen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Tanks::SplashScreen form;
	Application::Run(% form);
}

//��� ������� ��� �������� ��������
void Tanks::SplashScreen::tick(Object^ sender, EventArgs^ e)
{
	if (indextime == 50)
	{
		label2->Visible = true;
		times = true;
	}
	if (indextime >= 50)
	{
		if (indextime % 12 == 0)
			label2->ForeColor = label2->ForeColor == Color::White ? Color::Gainsboro : Color::White;
		indextime++;
	}
	// ���������� ���� �������� �� 10 ��������
	rotationAngle += 10;
	if (rotationAngle >= 360)
		rotationAngle -= 360;
	// ���������� ����������� �� �����
	// �������� ������ ����������� � �������� �������� � ��������
	Bitmap^ rotatedImage = gcnew Bitmap(image->Width, image->Height);

	Graphics^ g = Graphics::FromImage(rotatedImage);
	int a = image->Width / 2;
	int b = image->Height / 2;
	// ������� ����������� ������ ��� ������
	g->TranslateTransform(image->Width / 2, image->Height / 2);
	g->RotateTransform(rotationAngle);
	g->TranslateTransform(-image->Width / 2 + 60, -image->Height / 2 + 60);

	// ��������� ����������� �����������
	g->DrawImage(image, Point(1, 1));

	delete g;
	pictureBox1->Image = rotatedImage;
	indextime++;
}
//������� �� ������ ���������� Enter 
System::Void Tanks::SplashScreen::DownEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (times)
	{
		if (e->KeyCode == Keys::Enter)
		{
			main_form^ form = gcnew main_form();
			this->Hide();
			form->Show();
		}
	}
}
