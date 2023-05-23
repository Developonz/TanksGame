#pragma once
#include "gameover.h"
#include "pause.h"
namespace Tanks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System::Threading::Tasks;


	public ref class game_field : public System::Windows::Forms::Form
	{
	public:
		game_field(void)
		{
			InitializeComponent();
		}

	protected:
		~game_field()
		{
			if (components)
			{
				delete components;
				delete player1;
				delete player2;
				delete[] obstacles;
			}

		}
	private: System::Windows::Forms::Panel^ all_elem_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ tanks_field;
	private: System::Windows::Forms::Button^ pause_btn;

	private: System::Windows::Forms::Timer^ timermove;
	private: System::Windows::Forms::Panel^ player2_info_panel;
	private: System::Windows::Forms::Panel^ player1_info_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox9;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game_field::typeid));
			this->all_elem_panel = (gcnew System::Windows::Forms::Panel());
			this->player2_info_panel = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->player1_info_panel = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pause_btn = (gcnew System::Windows::Forms::Button());
			this->tanks_field = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timermove = (gcnew System::Windows::Forms::Timer(this->components));
			this->all_elem_panel->SuspendLayout();
			this->player2_info_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->player1_info_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tanks_field->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// all_elem_panel
			// 
			this->all_elem_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->all_elem_panel->Controls->Add(this->player2_info_panel);
			this->all_elem_panel->Controls->Add(this->player1_info_panel);
			this->all_elem_panel->Controls->Add(this->pause_btn);
			this->all_elem_panel->Controls->Add(this->tanks_field);
			this->all_elem_panel->Controls->Add(this->label7);
			this->all_elem_panel->ForeColor = System::Drawing::Color::White;
			this->all_elem_panel->Location = System::Drawing::Point(1, 1);
			this->all_elem_panel->Name = L"all_elem_panel";
			this->all_elem_panel->Size = System::Drawing::Size(1220, 603);
			this->all_elem_panel->TabIndex = 0;
			// 
			// player2_info_panel
			// 
			this->player2_info_panel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->player2_info_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player2_info_panel->Controls->Add(this->label13);
			this->player2_info_panel->Controls->Add(this->pictureBox10);
			this->player2_info_panel->Controls->Add(this->label11);
			this->player2_info_panel->Controls->Add(this->label10);
			this->player2_info_panel->Controls->Add(this->pictureBox8);
			this->player2_info_panel->Controls->Add(this->pictureBox6);
			this->player2_info_panel->Controls->Add(this->label2);
			this->player2_info_panel->Controls->Add(this->label6);
			this->player2_info_panel->Controls->Add(this->label5);
			this->player2_info_panel->Location = System::Drawing::Point(700, 11);
			this->player2_info_panel->Name = L"player2_info_panel";
			this->player2_info_panel->Size = System::Drawing::Size(510, 130);
			this->player2_info_panel->TabIndex = 9;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(457, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(124, 25);
			this->label13->TabIndex = 9;
			this->label13->Text = L"раз в 800мс";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(411, 6);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 40);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 8;
			this->pictureBox10->TabStop = false;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(342, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 25);
			this->label11->TabIndex = 8;
			this->label11->Text = L"20";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(342, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 25);
			this->label10->TabIndex = 7;
			this->label10->Text = L"100";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(296, 62);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(40, 40);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 5;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(296, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(40, 40);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(279, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 36);
			this->label2->TabIndex = 5;
			this->label2->Text = L"смертей: 0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(48, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 36);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Игрок 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(48, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 36);
			this->label5->TabIndex = 4;
			this->label5->Text = L"киллов: 0";
			// 
			// player1_info_panel
			// 
			this->player1_info_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->player1_info_panel->Controls->Add(this->label12);
			this->player1_info_panel->Controls->Add(this->pictureBox9);
			this->player1_info_panel->Controls->Add(this->label9);
			this->player1_info_panel->Controls->Add(this->label8);
			this->player1_info_panel->Controls->Add(this->pictureBox7);
			this->player1_info_panel->Controls->Add(this->pictureBox5);
			this->player1_info_panel->Controls->Add(this->label4);
			this->player1_info_panel->Controls->Add(this->label1);
			this->player1_info_panel->Controls->Add(this->label3);
			this->player1_info_panel->Location = System::Drawing::Point(11, 11);
			this->player1_info_panel->Name = L"player1_info_panel";
			this->player1_info_panel->Size = System::Drawing::Size(510, 130);
			this->player1_info_panel->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(455, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(124, 25);
			this->label12->TabIndex = 8;
			this->label12->Text = L"раз в 800мс";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(409, 8);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 40);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 7;
			this->pictureBox9->TabStop = false;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(341, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 25);
			this->label9->TabIndex = 6;
			this->label9->Text = L"20";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(341, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 25);
			this->label8->TabIndex = 5;
			this->label8->Text = L"100";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(295, 62);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 40);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 4;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(295, 9);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 40);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(277, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 36);
			this->label4->TabIndex = 2;
			this->label4->Text = L"смертей: 0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(45, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Игрок 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(45, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 36);
			this->label3->TabIndex = 1;
			this->label3->Text = L"киллов: 0";
			// 
			// pause_btn
			// 
			this->pause_btn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pause_btn->BackColor = System::Drawing::Color::Olive;
			this->pause_btn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->pause_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pause_btn->Location = System::Drawing::Point(546, 21);
			this->pause_btn->Name = L"pause_btn";
			this->pause_btn->Size = System::Drawing::Size(108, 32);
			this->pause_btn->TabIndex = 0;
			this->pause_btn->TabStop = false;
			this->pause_btn->Text = L"пауза";
			this->pause_btn->UseVisualStyleBackColor = false;
			this->pause_btn->Click += gcnew System::EventHandler(this, &game_field::Pause_Click);
			// 
			// tanks_field
			// 
			this->tanks_field->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tanks_field->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->tanks_field->Controls->Add(this->pictureBox3);
			this->tanks_field->Controls->Add(this->pictureBox4);
			this->tanks_field->Controls->Add(this->pictureBox1);
			this->tanks_field->Controls->Add(this->pictureBox2);
			this->tanks_field->Cursor = System::Windows::Forms::Cursors::Default;
			this->tanks_field->ForeColor = System::Drawing::Color::White;
			this->tanks_field->Location = System::Drawing::Point(0, 177);
			this->tanks_field->Name = L"tanks_field";
			this->tanks_field->Size = System::Drawing::Size(1220, 425);
			this->tanks_field->TabIndex = 10;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(51, 380);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1120, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(11, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(34, 411);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(51, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1120, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(1177, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 411);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(541, 89);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 25);
			this->label7->TabIndex = 9;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &game_field::timer);
			// 
			// timermove
			// 
			this->timermove->Enabled = true;
			this->timermove->Interval = 10;
			this->timermove->Tick += gcnew System::EventHandler(this, &game_field::timermove_Tick);
			// 
			// game_field
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1223, 606);
			this->Controls->Add(this->all_elem_panel);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"game_field";
			this->Text = L"game";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &game_field::game_field_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &game_field::tankmoving);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &game_field::tankmovingstop);
			this->all_elem_panel->ResumeLayout(false);
			this->all_elem_panel->PerformLayout();
			this->player2_info_panel->ResumeLayout(false);
			this->player2_info_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->player1_info_panel->ResumeLayout(false);
			this->player1_info_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tanks_field->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
		}

#pragma endregion
		//направление взгляда танка 
	enum class cursight
	{
		up, down, left, right
	};
		//направление танка
	private: ref struct direc
	{
		int x = 0, y = 0;
	};
	private: ref class Bullet;
	private: ref class tanker;
	private: ref struct walls;
	private: ref class list;

		   //список для хранения пуль игрока
	private: ref class list
	{
	public:
		ref class node
		{
		public:
			~node()
			{
				delete bullet;
			}
			Bullet^ bullet = gcnew Bullet();
			node^ previous;
			node^ next;

		};
		node^ head = nullptr;
		node^ tail = nullptr;

		//добавление пули в список
		Bullet^ add()
		{
			node^ key = head;
			node^ previous = nullptr;
			node^ new_elem = gcnew node();
			if (head == nullptr)
			{
				head = new_elem;
				tail = new_elem;
			}
			else
			{
				tail->next = new_elem;
				new_elem->previous = tail;
				tail = new_elem;
			}
			return new_elem->bullet;
		}
		//удаление пули из списка
		void remove(node^ key)
		{
			if (key->previous != nullptr)
			{
				key->previous->next = key->next;
			}
			else
			{
				head = key->next;
			}
			if (key->next != nullptr)
			{
				key->next->previous = key->previous;
			}
			else
			{
				if (key->previous != nullptr)
				{
					key->previous->next = nullptr;
				}
				tail = key->previous;
			}
			delete key;
		}
	};
		   //класс пули
	private: ref class Bullet
	{
	public:
		Bullet()
		{
			body->Image = Image::FromFile("D:\\study\\программирование\\курсовая\\bullet.png");
			body->SizeMode = PictureBoxSizeMode::StretchImage;
			body->Height = 25;
			body->Width = 25;
		}
		~Bullet()
		{
			delete body;
		}
		static int bulletspeed;
		PictureBox^ body = gcnew PictureBox();
		direc side;
	};
		   //класс танка
	private: ref class tanker
	{
	public:
		tanker()
		{
			if (numbertank == 0)
			{
				rightbody = "D:\\study\\программирование\\курсовая\\right.png";
				leftbody = "D:\\study\\программирование\\курсовая\\left.png";
				upbody = "D:\\study\\программирование\\курсовая\\up.png";
				downbody = "D:\\study\\программирование\\курсовая\\down.png";
				body->Image = Image::FromFile(rightbody);
				up = (Char)Keys::W;
				down = (Char)Keys::S;
				right = (Char)Keys::D;
				left = (Char)Keys::A;
				shootbtn = (Char)Keys::Space;
				sight = cursight::right;

			}
			else if (numbertank == 1)
			{
				rightbody = "D:\\study\\программирование\\курсовая\\right2.png";
				leftbody = "D:\\study\\программирование\\курсовая\\left2.png";
				upbody = "D:\\study\\программирование\\курсовая\\up2.png";
				downbody = "D:\\study\\программирование\\курсовая\\down2.png";
				body->Image = Image::FromFile(leftbody);
				up = (Char)Keys::Up;
				down = (Char)Keys::Down;
				right = (Char)Keys::Right;
				left = (Char)Keys::Left;
				shootbtn = (Char)Keys::Enter;
				sight = cursight::left;
			}
			body->Height = 50;
			body->Width = 50;
			body->SizeMode = PictureBoxSizeMode::StretchImage;
			timershoot->Enabled = false;
			timershoot->Interval = 800;

			numbertank++;
		}
		~tanker()
		{
			numbertank = 0;
			delete body;
			list::node^ cur = bullets->head;
			while (cur != nullptr)
			{
				bullets->remove(cur);
				cur = cur->next;
			}
		}
		static int deadpl1 = 0;
		static int deadpl2 = 0;
		static int winspl1 = 0;
		static int winspl2 = 0;
		static int numbertank = 0;
		bool live = true;
		int countHP = 100;
		int powershoot = 20;


		PictureBox^ body = gcnew PictureBox();
		String^ leftbody; String^ rightbody; String^ upbody; String^ downbody;

		Char up; Char down; Char right; Char left; Char shootbtn;


		bool firstshoot = true;
		bool lastshoot = false;

		int tankspeed = 5;
		direc side;
		cursight sight;

		list^ bullets = gcnew list();

		System::Windows::Forms::Timer^ timershoot = gcnew System::Windows::Forms::Timer();

		//вызов выстрела при зажатой клавише для стрельбы
		System::Void timershootplayer(System::Object^ sender, System::EventArgs^ e);
		//проверяем что перед танком ничего нет для движения
		void checkvoidplace(array<walls^, 2>^ obstacles, Panel^ tanks_field, String^ path, int locfield, int shift, int content, int locfield2, int shift2, int content2, bool vertical);
		//задание направления танка
		void movetank(KeyEventArgs^ e);
		//сброс направления танка
		void stoptank(KeyEventArgs^ e);
		//сдвиг танка в нужном направлении
		void movesectank(array<walls^, 2>^ obstacles, Panel^ tanks_field);
		//выстрел
		void shoot();
		//сдвиг пулиы
		void movebullet(tanker^ player, array<walls^, 2>^ obstacles, Panel^ tanks_field, const int% complexity);
	};
		   //структура препятствий
	private: ref struct walls
	{
		PictureBox^ body;
		int presence = 0;
	};


	private: PictureBox^ bonus;
	private: bool openedpause = false;
	private: bool end = false;
	private: bool firstgame = true;

	public: int complexity;
	private: int counttimeforbonus = 0;
	private: int widthfield;
	private: int heightfield;
	public: int firsttimesec;
	public: int firsttimemin;
	private: int timesec;
	private: int timemin;

	private: tanker^ player1;
	private: tanker^ player2;
	private: array<walls^, 2>^ obstacles;


		   //начать заново игру
	private: void startgame();
		   //генерация бонуса
	private: void genbonus();
		   //генерация блоков препятствия
	private: void generate(int row, int column, int lim1, int lim2, String^ path, Point startloc, int type);
		   //действие при открытии формы
	private: System::Void game_field_Load(System::Object^ sender, System::EventArgs^ e);
		   //таймер с интервалом в 1сек
	private: System::Void timer(System::Object^ sender, System::EventArgs^ e);
		   //вызов паузы при нажатии на кнопку паузы или кнопку клавиатуры Esc
	private: System::Void Pause_Click(System::Object^ sender, System::EventArgs^ e);
		   //вызов функций задания направления и выстрела для управления танком
	private: System::Void tankmoving(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		   //таймер с интервалом 10 мс
	private: System::Void timermove_Tick(System::Object^ sender, System::EventArgs^ e);
		   //вызов функций остановки танка и прекращения выстрела
	private: System::Void tankmovingstop(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}