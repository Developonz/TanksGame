#include <fstream>
#pragma once

namespace Tanks {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	public ref class registration : public System::Windows::Forms::Form
	{
	public:
		registration(void)
		{
			InitializeComponent();
		}

	protected:
		~registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lab_log;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registration::typeid));
			this->lab_log = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// lab_log
			// 
			this->lab_log->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lab_log->AutoSize = true;
			this->lab_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_log->ForeColor = System::Drawing::Color::White;
			this->lab_log->Location = System::Drawing::Point(85, 152);
			this->lab_log->Name = L"lab_log";
			this->lab_log->Size = System::Drawing::Size(207, 50);
			this->lab_log->TabIndex = 0;
			this->lab_log->Text = L"Введите имя\r\nминимум 3 символа\r\n";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(85, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите пароль\r\nминимум 5 символов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(339, 180);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Tag = L"";
			this->textBox1->Click += gcnew System::EventHandler(this, &registration::ClickToText);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &registration::downEnter);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(339, 281);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &registration::ClickToText);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &registration::downEnter);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(85, 368);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Подтвердите пароль";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(339, 368);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 22);
			this->textBox3->TabIndex = 3;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->Click += gcnew System::EventHandler(this, &registration::ClickToText);
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &registration::downEnter);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(211, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(270, 46);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Регистрация";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(395, 463);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 53);
			this->button1->TabIndex = 4;
			this->button1->Text = L"подтверить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &registration::button_confirm);
			this->button1->Enter += gcnew System::EventHandler(this, &registration::gotFocus);
			this->button1->Leave += gcnew System::EventHandler(this, &registration::lostFocus);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &registration::MouseEnter);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(91, 463);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 53);
			this->button2->TabIndex = 5;
			this->button2->Text = L"назад";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &registration::button_cancel);
			this->button2->Enter += gcnew System::EventHandler(this, &registration::gotFocus);
			this->button2->Leave += gcnew System::EventHandler(this, &registration::lostFocus);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &registration::MouseEnter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(586, 281);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 21);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &registration::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(586, 368);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 21);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &registration::pictureBox2_Click);
			// 
			// registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(668, 572);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lab_log);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"registration";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool checkingforerror = false;

		   //нажатие на кнопку отмена
	private: System::Void button_cancel(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку подтвердить
	private: System::Void button_confirm(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку клавиатуры Enter когда фокус находится на элементах ввода данных
	private: System::Void downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		   //кнопка становится активной
	private: System::Void gotFocus(System::Object^ sender, System::EventArgs^ e);
		   //кнопка становится не активной
	private: System::Void lostFocus(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на пикчербокс чтобы скртить/показать пароль
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на пикчербокс чтобы скртить/показать пароль
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e);
		   //наведение мыши на кнопку
	private: System::Void MouseEnter(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на элемент ввода данных
	private: System::Void ClickToText(System::Object^ sender, System::EventArgs^ e);
};
}