#pragma once

namespace Tanks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class pause : public System::Windows::Forms::Form
	{
	public:
		pause(void)
		{
			InitializeComponent();
		}

	protected:
		~pause()
		{
			if (components)
			{
				delete components;
			}
		}
	
	public: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label14;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"easy", L"middle", L"hard", L"crazy" });
			this->comboBox1->Location = System::Drawing::Point(366, 140);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 37);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->TabStop = false;
			this->comboBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &pause::downEnter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(343, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 31);
			this->button3->TabIndex = 7;
			this->button3->Text = L"ЗАНОВО";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &pause::ClickToRetry);
			this->button3->Enter += gcnew System::EventHandler(this, &pause::gotFocus);
			this->button3->Leave += gcnew System::EventHandler(this, &pause::lostFocus);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(562, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ВЫХОД";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &pause::ClickToLeave);
			this->button1->Enter += gcnew System::EventHandler(this, &pause::gotFocus);
			this->button1->Leave += gcnew System::EventHandler(this, &pause::lostFocus);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(134, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 31);
			this->button2->TabIndex = 6;
			this->button2->Text = L"ПРОДОЛЖИТЬ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &pause::ClickToContinue);
			this->button2->Enter += gcnew System::EventHandler(this, &pause::gotFocus);
			this->button2->Leave += gcnew System::EventHandler(this, &pause::lostFocus);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(375, 46);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(102, 36);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Пауза";
			// 
			// pause
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(855, 341);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label14);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"pause";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"pause";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &pause::leavekey);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: int cursost;

		  //нажатие кнопки продолжить
	private: System::Void ClickToContinue(System::Object^ sender, System::EventArgs^ e);
		   //нажатие кнопки заново
	private: System::Void ClickToRetry(System::Object^ sender, System::EventArgs^ e);
		   //нажатие кнопки выйти
	private: System::Void ClickToLeave(System::Object^ sender, System::EventArgs^ e);
		   //нажатие кнопки клавиатуры 
	private: System::Void leavekey(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		   //кнопка становится активной
	private: System::Void gotFocus(System::Object^ sender, System::EventArgs^ e);
		   //кнопка становится не активной
	private: System::Void lostFocus(System::Object^ sender, System::EventArgs^ e);
		   //нажатие кнопки клавиатуры Enter
	private: System::Void downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
