#include "registration.h"
#pragma once

namespace Tanks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class autorization : public System::Windows::Forms::Form
	{
	public:
		autorization(void)
		{
			InitializeComponent();
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	protected:
		~autorization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lab_log;
	private: System::Windows::Forms::Label^ label2;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(autorization::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lab_log = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(46, 497);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 53);
			this->button2->TabIndex = 6;
			this->button2->Text = L"отмена";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &autorization::ClickToCancel);
			this->button2->Enter += gcnew System::EventHandler(this, &autorization::gotFocus);
			this->button2->Leave += gcnew System::EventHandler(this, &autorization::lostFocus);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &autorization::MouseEnterbtn);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(350, 497);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 53);
			this->button1->TabIndex = 5;
			this->button1->Text = L"подтверить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &autorization::ClickToConfirm);
			this->button1->Enter += gcnew System::EventHandler(this, &autorization::gotFocus);
			this->button1->Leave += gcnew System::EventHandler(this, &autorization::lostFocus);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &autorization::MouseEnterbtn);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(149, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(272, 46);
			this->label3->TabIndex = 0;
			this->label3->Text = L"јвторизаци€";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(286, 236);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &autorization::ClickToText);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &autorization::downEnter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(286, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Tag = L"";
			this->textBox1->Click += gcnew System::EventHandler(this, &autorization::ClickToText);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &autorization::downEnter);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(41, 236);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"¬ведите пароль";
			// 
			// lab_log
			// 
			this->lab_log->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lab_log->AutoSize = true;
			this->lab_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_log->ForeColor = System::Drawing::Color::White;
			this->lab_log->Location = System::Drawing::Point(41, 135);
			this->lab_log->Name = L"lab_log";
			this->lab_log->Size = System::Drawing::Size(163, 58);
			this->lab_log->TabIndex = 9;
			this->lab_log->Text = L"¬ведите им€\r\n1-го игрока\r\n";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(198, 590);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 22);
			this->label2->TabIndex = 18;
			this->label2->Text = L"ещЄ нет аккаунта\?";
			this->label2->Click += gcnew System::EventHandler(this, &autorization::label2_Click);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &autorization::noacc);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &autorization::noaccleave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(286, 313);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 22);
			this->textBox3->TabIndex = 3;
			this->textBox3->Click += gcnew System::EventHandler(this, &autorization::ClickToText);
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &autorization::downEnter);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(286, 396);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(217, 22);
			this->textBox4->TabIndex = 4;
			this->textBox4->Tag = L"";
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->Click += gcnew System::EventHandler(this, &autorization::ClickToText);
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &autorization::downEnter);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(41, 396);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"¬ведите пароль";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(41, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 58);
			this->label5->TabIndex = 19;
			this->label5->Text = L"¬ведите им€\r\n2-го игрока\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(525, 236);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 21);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &autorization::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(525, 396);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 21);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &autorization::pictureBox2_Click);
			// 
			// autorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(578, 649);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lab_log);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"autorization";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ player1 = "NONAME";
	public: String^ player2 = "NONAME";
	private: bool checkingforerror = false;

		   //наведение мыши на label нет аккаунта?
	private: System::Void noacc(System::Object^ sender, System::EventArgs^ e);
		   //убираем мышь с label нет аккаунта?
	private: System::Void noaccleave(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку отмена
	private: System::Void ClickToCancel(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на label нет аккаунта?
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку подтвердить
	private: System::Void ClickToConfirm(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку клавиатуры Enter когда фокус находитс€ на элементах ввода данных
	private: System::Void downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		   //кнопка становитс€ активной
	private: System::Void gotFocus(System::Object^ sender, System::EventArgs^ e);
		   //кнопка становитс€ не активной
	private: System::Void lostFocus(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на пикчербокс чтобы скртить/показать пароль
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на пикчербокс чтобы скртить/показать пароль
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);
		   //наведение мыши на кнопку
	private: System::Void MouseEnterbtn(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на элемент ввода данных
	private: System::Void ClickToText(System::Object^ sender, System::EventArgs^ e);
};
}
