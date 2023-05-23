#pragma once

namespace Tanks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class gameover : public System::Windows::Forms::Form
	{
	public:
		gameover(void)
		{
			InitializeComponent();
		}

	protected:
		~gameover()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::Label^ label23;
	public: System::Windows::Forms::Label^ label22;
	public: System::Windows::Forms::Label^ label21;
	public: System::Windows::Forms::Label^ label20;
	public: System::Windows::Forms::Label^ label19;
	public: System::Windows::Forms::Label^ label18;
	public: System::Windows::Forms::Label^ label17;
	public: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::Label^ label15;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(824, 391);
			this->panel2->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(196, 310);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 45);
			this->button5->TabIndex = 2;
			this->button5->Text = L"выйти";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &gameover::ClickToExit);
			this->button5->Enter += gcnew System::EventHandler(this, &gameover::gotFocus);
			this->button5->Leave += gcnew System::EventHandler(this, &gameover::lostFocus);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(481, 310);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 45);
			this->button4->TabIndex = 1;
			this->button4->Text = L"заново";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &gameover::ClickToRetry);
			this->button4->Enter += gcnew System::EventHandler(this, &gameover::gotFocus);
			this->button4->Leave += gcnew System::EventHandler(this, &gameover::lostFocus);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(603, 230);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(172, 36);
			this->label23->TabIndex = 14;
			this->label23->Text = L"смертей: 0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(603, 161);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(163, 36);
			this->label22->TabIndex = 13;
			this->label22->Text = L"убийств: 0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(38, 230);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(172, 36);
			this->label21->TabIndex = 9;
			this->label21->Text = L"смертей: 0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(38, 161);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(163, 36);
			this->label20->TabIndex = 9;
			this->label20->Text = L"убийств: 0";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(354, 188);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(103, 36);
			this->label19->TabIndex = 12;
			this->label19->Text = L"Игрок";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(338, 121);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(138, 36);
			this->label18->TabIndex = 11;
			this->label18->Text = L"WINNER";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(603, 84);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(128, 36);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Игрок 2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(37, 84);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(128, 36);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Игрок 1";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(275, 20);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(263, 46);
			this->label15->TabIndex = 0;
			this->label15->Text = L"GAME OVER";
			// 
			// gameover
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 391);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"gameover";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"gameover";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool choseretryleave;

		   //нажатие кнопки выйти
	private: System::Void ClickToExit(System::Object^ sender, System::EventArgs^ e);
		   //нажатие кнопки заново
	private: System::Void ClickToRetry(System::Object^ sender, System::EventArgs^ e);
		   //кнопка становится активной
	private: System::Void gotFocus(System::Object^ sender, System::EventArgs^ e);
		   //кнопка становится не активной
	private: System::Void lostFocus(System::Object^ sender, System::EventArgs^ e);
};
}
