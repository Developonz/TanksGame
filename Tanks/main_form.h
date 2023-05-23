#include "game_field.h"
#include "registration.h"
#include "autorization.h"

#pragma once

namespace Tanks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	

	public ref class main_form : public System::Windows::Forms::Form
	{
	public:
		main_form(void)
		{
			InitializeComponent();
		}

	protected:

		~main_form()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code	

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main_form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(491, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 84);
			this->button1->TabIndex = 1;
			this->button1->Text = L"играть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &main_form::ClickToPlay);
			this->button1->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button1->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(491, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 84);
			this->button2->TabIndex = 2;
			this->button2->Text = L"выбрать игроков";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &main_form::ClickToPChoosePlayer);
			this->button2->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button2->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(491, 562);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 84);
			this->button3->TabIndex = 5;
			this->button3->Text = L"выход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &main_form::ClickToExit);
			this->button3->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button3->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(491, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 84);
			this->button4->TabIndex = 3;
			this->button4->Text = L"статистика";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &main_form::ClickToOpenStatictic);
			this->button4->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button4->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(491, 450);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 84);
			this->button5->TabIndex = 4;
			this->button5->Text = L"справка";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &main_form::info);
			this->button5->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button5->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button5->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(415, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(337, 46);
			this->label2->TabIndex = 16;
			this->label2->Text = L"ГЛАВНОЕ МЕНЮ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(346, 103);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(474, 439);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(376, 250);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(54, 22);
			this->numericUpDown2->TabIndex = 22;
			this->numericUpDown2->Click += gcnew System::EventHandler(this, &main_form::ClickToNumeric);
			this->numericUpDown2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main_form::downEnter);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(288, 250);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->numericUpDown1->Size = System::Drawing::Size(54, 22);
			this->numericUpDown1->TabIndex = 21;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Click += gcnew System::EventHandler(this, &main_form::ClickToNumeric);
			this->numericUpDown1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main_form::downEnter);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::Gainsboro;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(77, 338);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(141, 55);
			this->button8->TabIndex = 24;
			this->button8->Text = L"отмена";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &main_form::ClickToCancelGame);
			this->button8->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button8->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button8->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::Color::Gainsboro;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(259, 338);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(141, 55);
			this->button7->TabIndex = 23;
			this->button7->Text = L"начать";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &main_form::ClickToBeginGame);
			this->button7->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button7->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button7->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(348, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 32);
			this->label5->TabIndex = 22;
			this->label5->Text = L":";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(43, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 36);
			this->label4->TabIndex = 21;
			this->label4->Text = L"время";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(43, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 36);
			this->label3->TabIndex = 20;
			this->label3->Text = L"сложность";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"easy", L"middle", L"hard",
					L"crazy"
			});
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"easy", L"middle", L"hard", L"crazy" });
			this->comboBox1->Location = System::Drawing::Point(274, 129);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(179, 39);
			this->comboBox1->TabIndex = 20;
			this->comboBox1->Click += gcnew System::EventHandler(this, &main_form::ClickToCombo);
			this->comboBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main_form::downEnter);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(70, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 38);
			this->label1->TabIndex = 18;
			this->label1->Text = L"ПАРАМЕТРЫ ИГРЫ";
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Location = System::Drawing::Point(279, 0);
			this->panel2->Name = L"panel2";
			this->helpProvider1->SetShowHelp(this->panel2, false);
			this->panel2->Size = System::Drawing::Size(691, 679);
			this->panel2->TabIndex = 18;
			this->panel2->Visible = false;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(403, 321);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(194, 36);
			this->label11->TabIndex = 22;
			this->label11->Text = L"поражений: ";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(65, 321);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(194, 36);
			this->label10->TabIndex = 21;
			this->label10->Text = L"поражений: ";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(403, 242);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 36);
			this->label7->TabIndex = 20;
			this->label7->Text = L"побед: ";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(403, 484);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 36);
			this->label8->TabIndex = 18;
			this->label8->Text = L"смертей: ";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(403, 402);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 36);
			this->label9->TabIndex = 19;
			this->label9->Text = L"киллов:";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(65, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 36);
			this->label6->TabIndex = 17;
			this->label6->Text = L"побед: ";
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(275, 563);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(170, 45);
			this->button9->TabIndex = 16;
			this->button9->Text = L"назад";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &main_form::ClickToBack);
			this->button9->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button9->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button9->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(64, 484);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(155, 36);
			this->label21->TabIndex = 9;
			this->label21->Text = L"смертей: ";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(65, 402);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(135, 36);
			this->label20->TabIndex = 9;
			this->label20->Text = L"киллов: ";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(403, 152);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(128, 36);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Игрок 2";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(64, 152);
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
			this->label15->Location = System::Drawing::Point(207, 40);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(283, 46);
			this->label15->TabIndex = 0;
			this->label15->Text = L"СТАТИСТИКА";
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(1043, 601);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 45);
			this->button6->TabIndex = 23;
			this->button6->Text = L"об игре";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &main_form::about);
			this->button6->Enter += gcnew System::EventHandler(this, &main_form::gotFocus);
			this->button6->Leave += gcnew System::EventHandler(this, &main_form::lostFocus);
			this->button6->MouseEnter += gcnew System::EventHandler(this, &main_form::btn_MouseEnter);
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"D:\\study\\программирование\\курсовая\\information\\info.chm";
			// 
			// main_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1204, 678);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimizeBox = false;
			this->Name = L"main_form";
			this->helpProvider1->SetShowHelp(this, true);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: String^ player1 = "NONAME";
	private: String^ player2 = "NONAME";
	private: bool firstopenstat = true;
	private: bool checkingforerror = false;

		   //наведение мыши
	private: System::Void btn_MouseEnter(System::Object^ sender, System::EventArgs^ e); 
		   //нажатие на кнопку играть
	private: System::Void ClickToPlay(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку выбрать игроков
	private: System::Void ClickToPChoosePlayer(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку выход
	private: System::Void ClickToExit(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку начать
	private: System::Void ClickToBeginGame(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку отмена
	private: System::Void ClickToCancelGame(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку статистика
	private: System::Void ClickToOpenStatictic(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку назад
	private: System::Void ClickToBack(System::Object^ sender, System::EventArgs^ e);
		   //кнопка становится активной
	private: System::Void gotFocus(System::Object^ sender, System::EventArgs^ e);
		   //кнопка теряет фокус
	private: System::Void lostFocus(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку клавиатуры Enter
	private: System::Void downEnter(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		   //нажатие на элементы, регулирующие время игры
	private: System::Void ClickToNumeric(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на элемент, регулирующий сложность игры
	private: System::Void ClickToCombo(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку об игре
	private: System::Void about(System::Object^ sender, System::EventArgs^ e);
		   //нажатие на кнопку справка
	private: System::Void info(System::Object^ sender, System::EventArgs^ e);

};
}
