#pragma once

namespace PokerCards {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class TenHalf : public System::Windows::Forms::Form
	{
	public:
		TenHalf(void)
		{
			InitializeComponent();
			this->label5->Hide();
			this->label6->Hide();
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label18->Hide();
			this->label19->Hide();
			this->label20->Hide();
			this->label21->Hide();
			this->label22->Hide();
			this->label23->Hide();
			this->label24->Hide();
			this->label25->Hide();
			this->label26->Hide();
			this->label27->Hide();
			this->label28->Hide();
			this->label29->Hide();
			this->label30->Hide();
			this->label31->Hide();
			this->label32->Hide();
			this->label33->Hide();
			this->label34->Hide();
			this->label35->Hide();
			this->label36->Hide();
			this->label37->Hide();
			this->label38->Hide();
			this->label39->Hide();
			this->label40->Hide();
			this->groupBox2->Hide();
			this->groupBox3->Hide();
			this->groupBox4->Hide();
			this->groupBox5->Hide();
			this->groupBox6->Hide();
			this->groupBox7->Hide();
			this->groupBox8->Hide();
			this->groupBox9->Hide();
			this->groupBox10->Hide();
			this->groupBox11->Hide();
			this->groupBox12->Hide();
			this->button2->Hide();
			this->button3->Hide();
			this->button4->Hide();
			this->button5->Hide();
		}

	protected:
		~TenHalf()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;










	protected:
		int button3ClickTime = 0;
		int numOfMesterCard = 0;
		Random rand;
		double mesterScord = 0;
		double playerScord = 0;
		int playerCard1 = 0;
		int playerCard2 = 0;
		int playerCard3 = 0;
		int playerCard4 = 0;
		int playerCard5 = 0;

private: System::Windows::Forms::GroupBox^  groupBox12;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::PictureBox^  pictureBox1;


private: System::ComponentModel::IContainer^  components;
protected:

protected:

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{	
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TenHalf::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(307, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(265, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"樸克牌遊戲";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(371, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"十點半";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(82, 142);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(726, 302);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"遊戲規則:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(598, 168);
			this->label3->TabIndex = 0;
			this->label3->Text = L"1. 遊戲開始後，您即將與電腦對戰，一律由電腦當莊家。\r\n2. 電腦與您最多都可以補五張牌。\r\n3. 若補到第五張牌時仍未超過十點半，即獲勝。\r\n4. 若不再補牌"
				L"，即換莊家補牌。\r\n5. 若莊家也不補牌時，最後以點數較大者獲勝。\r\n6. 若其中一方先爆牌，對方即獲勝。\r\n7. 若點數相同即平手。\r\n8. J、Q、K為半點"
				L"，其餘依照牌面數字計算。";
			// 
			// groupBox12
			// 
			this->groupBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox12->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox12->Controls->Add(this->button5);
			this->groupBox12->Controls->Add(this->button2);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"標楷體", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox12->Location = System::Drawing::Point(59, 248);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(791, 68);
			this->groupBox12->TabIndex = 20;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"爆掉了，您輸囉~";
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(518, 1);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(231, 30);
			this->button5->TabIndex = 7;
			this->button5->Text = L"重新挑戰";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &TenHalf::button5_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(518, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"回首頁";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TenHalf::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->Location = System::Drawing::Point(258, 450);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(373, 21);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"我已閱讀完以上所有遊戲規則，並同意此玩法";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &TenHalf::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(351, 487);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"進入遊戲";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TenHalf::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(402, 547);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 12);
			this->label4->TabIndex = 5;
			this->label4->Text = L"©Samuel Chi 2017";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(71, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 21);
			this->label5->TabIndex = 7;
			this->label5->Text = L"莊家";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(71, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 21);
			this->label6->TabIndex = 8;
			this->label6->Text = L"玩家";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(133, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 24);
			this->label7->TabIndex = 9;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"標楷體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(133, 352);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 24);
			this->label8->TabIndex = 10;
			this->label8->Text = L"0";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(330, 478);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 36);
			this->button3->TabIndex = 11;
			this->button3->Text = L"發牌";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &TenHalf::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(495, 478);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 36);
			this->button4->TabIndex = 12;
			this->button4->Text = L"不補牌";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TenHalf::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Location = System::Drawing::Point(201, 109);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(95, 130);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-14, -30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 192);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &TenHalf::pictureBox1_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(3, 40);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 96);
			this->label11->TabIndex = 2;
			this->label11->Text = L"♠";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(5, 22);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"♠";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(5, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 19);
			this->label9->TabIndex = 0;
			this->label9->Text = L"A";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::White;
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Location = System::Drawing::Point(315, 109);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(95, 130);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(3, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 96);
			this->label12->TabIndex = 2;
			this->label12->Text = L"♠";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(5, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 19);
			this->label13->TabIndex = 1;
			this->label13->Text = L"♠";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label14->Location = System::Drawing::Point(5, 5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 19);
			this->label14->TabIndex = 0;
			this->label14->Text = L"A";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::White;
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Location = System::Drawing::Point(430, 109);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(95, 130);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label15->Location = System::Drawing::Point(3, 40);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(90, 96);
			this->label15->TabIndex = 2;
			this->label15->Text = L"♠";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label16->Location = System::Drawing::Point(5, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 19);
			this->label16->TabIndex = 1;
			this->label16->Text = L"♠";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label17->Location = System::Drawing::Point(5, 5);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 19);
			this->label17->TabIndex = 0;
			this->label17->Text = L"A";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::White;
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Location = System::Drawing::Point(546, 109);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(95, 130);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label18->Location = System::Drawing::Point(3, 40);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(90, 96);
			this->label18->TabIndex = 2;
			this->label18->Text = L"♠";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label19->Location = System::Drawing::Point(5, 22);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(20, 19);
			this->label19->TabIndex = 1;
			this->label19->Text = L"♠";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label20->Location = System::Drawing::Point(5, 5);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 19);
			this->label20->TabIndex = 0;
			this->label20->Text = L"A";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::White;
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->label23);
			this->groupBox6->Location = System::Drawing::Point(661, 109);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(95, 130);
			this->groupBox6->TabIndex = 14;
			this->groupBox6->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label21->Location = System::Drawing::Point(3, 40);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(90, 96);
			this->label21->TabIndex = 2;
			this->label21->Text = L"♠";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label22->Location = System::Drawing::Point(5, 22);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 19);
			this->label22->TabIndex = 1;
			this->label22->Text = L"♠";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label23->Location = System::Drawing::Point(5, 5);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(20, 19);
			this->label23->TabIndex = 0;
			this->label23->Text = L"A";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::White;
			this->groupBox7->Controls->Add(this->label24);
			this->groupBox7->Controls->Add(this->label25);
			this->groupBox7->Controls->Add(this->label26);
			this->groupBox7->Location = System::Drawing::Point(661, 316);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(95, 130);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label24->Location = System::Drawing::Point(3, 40);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(90, 96);
			this->label24->TabIndex = 2;
			this->label24->Text = L"♠";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label25->Location = System::Drawing::Point(5, 22);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(20, 19);
			this->label25->TabIndex = 1;
			this->label25->Text = L"♠";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label26->Location = System::Drawing::Point(5, 5);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(20, 19);
			this->label26->TabIndex = 0;
			this->label26->Text = L"A";
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::Color::White;
			this->groupBox8->Controls->Add(this->label27);
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->Controls->Add(this->label29);
			this->groupBox8->Location = System::Drawing::Point(546, 316);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(95, 130);
			this->groupBox8->TabIndex = 17;
			this->groupBox8->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label27->Location = System::Drawing::Point(3, 40);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(90, 96);
			this->label27->TabIndex = 2;
			this->label27->Text = L"♠";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label28->Location = System::Drawing::Point(5, 22);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(20, 19);
			this->label28->TabIndex = 1;
			this->label28->Text = L"♠";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label29->Location = System::Drawing::Point(5, 5);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(20, 19);
			this->label29->TabIndex = 0;
			this->label29->Text = L"A";
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::White;
			this->groupBox9->Controls->Add(this->label30);
			this->groupBox9->Controls->Add(this->label31);
			this->groupBox9->Controls->Add(this->label32);
			this->groupBox9->Location = System::Drawing::Point(430, 316);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(95, 130);
			this->groupBox9->TabIndex = 18;
			this->groupBox9->TabStop = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label30->Location = System::Drawing::Point(3, 40);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(90, 96);
			this->label30->TabIndex = 2;
			this->label30->Text = L"♠";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label31->Location = System::Drawing::Point(5, 22);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(20, 19);
			this->label31->TabIndex = 1;
			this->label31->Text = L"♠";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label32->Location = System::Drawing::Point(5, 5);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(20, 19);
			this->label32->TabIndex = 0;
			this->label32->Text = L"A";
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::Color::White;
			this->groupBox10->Controls->Add(this->label33);
			this->groupBox10->Controls->Add(this->label34);
			this->groupBox10->Controls->Add(this->label35);
			this->groupBox10->Location = System::Drawing::Point(315, 316);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(95, 130);
			this->groupBox10->TabIndex = 19;
			this->groupBox10->TabStop = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label33->Location = System::Drawing::Point(3, 40);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(90, 96);
			this->label33->TabIndex = 2;
			this->label33->Text = L"♠";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label34->Location = System::Drawing::Point(5, 22);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(20, 19);
			this->label34->TabIndex = 1;
			this->label34->Text = L"♠";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label35->Location = System::Drawing::Point(5, 5);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(20, 19);
			this->label35->TabIndex = 0;
			this->label35->Text = L"A";
			// 
			// groupBox11
			// 
			this->groupBox11->BackColor = System::Drawing::Color::White;
			this->groupBox11->Controls->Add(this->label36);
			this->groupBox11->Controls->Add(this->label37);
			this->groupBox11->Controls->Add(this->label38);
			this->groupBox11->Location = System::Drawing::Point(201, 316);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(95, 130);
			this->groupBox11->TabIndex = 15;
			this->groupBox11->TabStop = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"標楷體", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label36->Location = System::Drawing::Point(3, 40);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(90, 96);
			this->label36->TabIndex = 2;
			this->label36->Text = L"♠";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label37->Location = System::Drawing::Point(5, 22);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(20, 19);
			this->label37->TabIndex = 1;
			this->label37->Text = L"♠";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label38->Location = System::Drawing::Point(5, 5);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(20, 19);
			this->label38->TabIndex = 0;
			this->label38->Text = L"A";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"標楷體", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label39->ForeColor = System::Drawing::Color::Red;
			this->label39->Location = System::Drawing::Point(262, 23);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(46, 48);
			this->label39->TabIndex = 21;
			this->label39->Text = L"♥";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"標楷體", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label40->ForeColor = System::Drawing::Color::Red;
			this->label40->Location = System::Drawing::Point(609, 23);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(46, 48);
			this->label40->TabIndex = 22;
			this->label40->Text = L"♦";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label41->Location = System::Drawing::Point(837, 9);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(39, 13);
			this->label41->TabIndex = 23;
			this->label41->Text = L"V1.0";
			// 
			// TenHalf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->groupBox12);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TenHalf";
			this->Text = L"十點半";
			this->Load += gcnew System::EventHandler(this, &TenHalf::TenHalf_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TenHalf_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox1->Checked == true)
		{
			this->button1->Enabled = true;
		}
		else
		{
			this->button1->Enabled = false;
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = L"♠ TEN HALF ♣";
	this->label1->Location = System::Drawing::Point(300, 23);
	this->label2->Hide();
	this->label3->Hide();
	this->groupBox1->Hide();
	this->checkBox1->Hide();
	this->button1->Hide();
	this->button3->Show();
	this->button3->Location = System::Drawing::Point(380, 478);
	this->label5->Show();
	this->label6->Show();
	this->label7->Show();
	this->label8->Show();
	this->label39->Show();
	this->label40->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label1->Text = L"樸克牌遊戲";
	this->label2->Text = L"十點半";
	this->label2->ForeColor = System::Drawing::Color::Black;
	this->label1->Location = System::Drawing::Point(307, 23);
	this->label2->Show();
	this->label3->Show();
	this->checkBox1->Show();
	this->checkBox1->Checked = false;
	this->label5->Hide();
	this->label6->Hide();
	this->label7->Hide();
	this->label8->Hide();
	this->label9->Hide();
	this->label10->Hide();
	this->label11->Hide();
	this->label12->Hide();
	this->label13->Hide();
	this->label14->Hide();
	this->label15->Hide();
	this->label16->Hide();
	this->label17->Hide();
	this->label18->Hide();
	this->label19->Hide();
	this->label20->Hide();
	this->label21->Hide();
	this->label22->Hide();
	this->label23->Hide();
	this->label24->Hide();
	this->label25->Hide();
	this->label26->Hide();
	this->label27->Hide();
	this->label28->Hide();
	this->label29->Hide();
	this->label30->Hide();
	this->label31->Hide();
	this->label32->Hide();
	this->label33->Hide();
	this->label34->Hide();
	this->label35->Hide();
	this->label36->Hide();
	this->label37->Hide();
	this->label38->Hide();
	this->label39->Hide();
	this->label40->Hide();
	this->groupBox1->Show();
	this->groupBox2->Hide();
	this->groupBox3->Hide();
	this->groupBox4->Hide();
	this->groupBox5->Hide();
	this->groupBox6->Hide();
	this->groupBox7->Hide();
	this->groupBox8->Hide();
	this->groupBox9->Hide();
	this->groupBox10->Hide();
	this->groupBox11->Hide();
	this->groupBox12->Hide();
	this->button1->Show();
	this->button2->Hide();
	this->button3->Hide();
	this->button3->Text = "發牌";
	this->button4->Hide();
	this->button5->Hide();
	button3ClickTime = 0;
	this->label7->Text = (mesterScord = 0).ToString();
	this->label8->Text = (playerScord = 0).ToString();
}

//
//click button3 
//
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int checkCard[52] = { 0 };
	button3ClickTime++;
	//
	//button3 click 1 times
	//
	if (button3ClickTime == 1)
	{
		this->button3->Text = "補牌";
		this->button3->Location = System::Drawing::Point(330, 478);
		this->button4->Show();
		this->groupBox2->Show();
		this->groupBox11->Show();
		this->pictureBox1->Show();
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label36->Text = L"♣";
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label38->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label36->Text = L"♦";
			this->label36->ForeColor = System::Drawing::Color::Red;
			this->label37->ForeColor = System::Drawing::Color::Red;
			this->label38->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label36->Text = L"♥";
			this->label36->ForeColor = System::Drawing::Color::Red;
			this->label37->ForeColor = System::Drawing::Color::Red;
			this->label38->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label36->Text = L"♠";
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label38->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label37->Text = this->label36->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label38->Text = "A";
			break;
		case 11:
			this->label38->Text = "J";
			playerScord -= 10.5;
			break;
		case 12:
			this->label38->Text = "Q";
			playerScord -= 11.5;
			break;
		case 13:
			this->label38->Text = "K";
			playerScord -= 12.5;
			break;
		default:
			this->label38->Text = randOfSYMBOL.ToString();
			break;
		}
		this->label36->Show();
		this->label37->Show();
		this->label38->Show();
		this->label8->Text = (playerScord += randOfSYMBOL).ToString();
		checkCard[playerCard1 = (randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
	}
	//
	//button3 click 2 times
	//
	else if(button3ClickTime == 2)
	{
		repeatClickTime2:
		this->groupBox10->Show();
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label33->Text = L"♣";
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label35->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label33->Text = L"♦";
			this->label33->ForeColor = System::Drawing::Color::Red;
			this->label34->ForeColor = System::Drawing::Color::Red;
			this->label35->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label33->Text = L"♥";
			this->label33->ForeColor = System::Drawing::Color::Red;
			this->label34->ForeColor = System::Drawing::Color::Red;
			this->label35->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label33->Text = L"♠";
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label35->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label34->Text = this->label33->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label35->Text = "A";
			break;
		case 11:
			this->label35->Text = "J";
			playerScord -= 10.5;
			break;
		case 12:
			this->label35->Text = "Q";
			playerScord -= 11.5;
			break;
		case 13:
			this->label35->Text = "K";
			playerScord -= 12.5;
			break;
		default:
			this->label35->Text = randOfSYMBOL.ToString();
			break;
		}

		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	playerScord += 10.5;
			else if (randOfSYMBOL == 12) playerScord += 11.5;
			else if (randOfSYMBOL == 13) playerScord += 12.5;
			goto repeatClickTime2;
		}			
		else
		{
			checkCard[playerCard2 = (randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			this->label8->Text = (playerScord += randOfSYMBOL).ToString();
			this->label33->Show();
			this->label34->Show();
			this->label35->Show();
		}
	}
	//
	//button3 click 3 times
	//
	else if (button3ClickTime == 3)
	{
		repeatClickTime3:
		this->groupBox9->Show();
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label30->Text = L"♣";
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label32->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label30->Text = L"♦";
			this->label30->ForeColor = System::Drawing::Color::Red;
			this->label31->ForeColor = System::Drawing::Color::Red;
			this->label32->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label30->Text = L"♥";
			this->label30->ForeColor = System::Drawing::Color::Red;
			this->label31->ForeColor = System::Drawing::Color::Red;
			this->label32->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label30->Text = L"♠";
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label32->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label31->Text = this->label30->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label32->Text = "A";
			break;
		case 11:
			this->label32->Text = "J";
			playerScord -= 10.5;
			break;
		case 12:
			this->label32->Text = "Q";
			playerScord -= 11.5;
			break;
		case 13:
			this->label32->Text = "K";
			playerScord -= 12.5;
			break;
		default:
			this->label32->Text = randOfSYMBOL.ToString();
			break;
		}
		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	playerScord += 10.5;
			else if (randOfSYMBOL == 12) playerScord += 11.5;
			else if (randOfSYMBOL == 13) playerScord += 12.5;
			goto repeatClickTime3;
		}			
		else
		{
			checkCard[playerCard3 = (randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			this->label8->Text = (playerScord += randOfSYMBOL).ToString();
			this->label30->Show();
			this->label31->Show();
			this->label32->Show();
		}
	}
	//
	//button3 click 4 times
	//
	else if (button3ClickTime == 4)
	{
		repeatClickTime4:
		this->groupBox8->Show();
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label27->Text = L"♣";
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label29->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label27->Text = L"♦";
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label28->ForeColor = System::Drawing::Color::Red;
			this->label29->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label27->Text = L"♥";
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label28->ForeColor = System::Drawing::Color::Red;
			this->label29->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label27->Text = L"♠";
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label29->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label28->Text = this->label27->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label29->Text = "A";
			break;
		case 11:
			this->label29->Text = "J";
			playerScord -= 10.5;
			break;
		case 12:
			this->label29->Text = "Q";
			playerScord -= 11.5;
			break;
		case 13:
			this->label29->Text = "K";
			playerScord -= 12.5;
			break;
		default:
			this->label29->Text = randOfSYMBOL.ToString();
			break;
		}
		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	playerScord += 10.5;
			else if (randOfSYMBOL == 12) playerScord += 11.5;
			else if (randOfSYMBOL == 13) playerScord += 12.5;
			goto repeatClickTime4;
		}
		else
		{
			checkCard[playerCard4 = (randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			this->label8->Text = (playerScord += randOfSYMBOL).ToString();
			this->label27->Show();
			this->label28->Show();
			this->label29->Show();
		}
	}
	//
	//button3 click 5 times
	//
	else if (button3ClickTime == 5)
	{
		repeatClickTime5:
		this->groupBox7->Show();
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label24->Text = L"♣";
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label26->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label24->Text = L"♦";
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label26->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label24->Text = L"♥";
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label26->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label24->Text = L"♠";
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label26->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label25->Text = this->label24->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label26->Text = "A";
			break;
		case 11:
			this->label26->Text = "J";
			playerScord -= 10.5;
			break;
		case 12:
			this->label26->Text = "Q";
			playerScord -= 11.5;
			break;
		case 13:
			this->label26->Text = "K";
			playerScord -= 12.5;
			break;
		default:
			this->label26->Text = randOfSYMBOL.ToString();
			break;
		}
		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	playerScord += 10.5;
			else if (randOfSYMBOL == 12) playerScord += 11.5;
			else if (randOfSYMBOL == 13) playerScord += 12.5;
			goto repeatClickTime5;
		}
		else
		{
			checkCard[playerCard5 = (randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			this->label8->Text = (playerScord += randOfSYMBOL).ToString();
			this->label24->Show();
			this->label25->Show();
			this->label26->Show();
		}
	}

	if (playerScord > 10.5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "爆掉了，您輸囉~";
		this->button2->Show();
		this->button5->Show();
		this->button3->Hide();
		this->button4->Hide();
	}
	else if (playerScord == 10.5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "十點半，您贏囉~";
		this->button2->Show();
		this->button5->Show();
		this->button3->Hide();
		this->button4->Hide();
	}
	else if (playerScord < 10.5 && button3ClickTime == 5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "過五關，您贏囉~";
		this->button2->Show();
		this->button5->Show();
		this->button3->Hide();
		this->button4->Hide();
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	numOfMesterCard = 0;
	this->groupBox12->Hide();
	this->button2->Hide();
	this->button5->Hide();
	playerScord = 0;
	mesterScord = 0;
	button3ClickTime = 0;
	this->button3->Show();
	this->button3->Text = "發牌";
	this->button3->Location = System::Drawing::Point(380, 478);
	this->label8->Text = playerScord.ToString();
	this->label7->Text = mesterScord.ToString();
	this->groupBox2->Hide();
	this->groupBox3->Hide();
	this->groupBox4->Hide();
	this->groupBox5->Hide();
	this->groupBox6->Hide();
	this->groupBox7->Hide();
	this->groupBox8->Hide();
	this->groupBox9->Hide();
	this->groupBox10->Hide();
	this->groupBox11->Hide();
	this->label9->Hide();
	this->label10->Hide();
	this->label11->Hide();
	this->label12->Hide();
	this->label13->Hide();
	this->label14->Hide();
	this->label15->Hide();
	this->label16->Hide();
	this->label17->Hide();
	this->label18->Hide();
	this->label19->Hide();
	this->label20->Hide();
	this->label21->Hide();
	this->label22->Hide();
	this->label23->Hide();
	this->label24->Hide();
	this->label25->Hide();
	this->label26->Hide();
	this->label27->Hide();
	this->label28->Hide();
	this->label29->Hide();
	this->label30->Hide();
	this->label31->Hide();
	this->label32->Hide();
	this->label33->Hide();
	this->label34->Hide();
	this->label35->Hide();
	this->label36->Hide();
	this->label37->Hide();
	this->label38->Hide();
}
//
//click button4
//
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->button3->Hide();
	this->button4->Hide();
	this->pictureBox1->Hide();
	int checkCard[52] = { 0 };
	checkCard[playerCard1 != 0 ? playerCard1 : 0]++;
	checkCard[playerCard2 != 0 ? playerCard2 : 0]++;
	checkCard[playerCard3 != 0 ? playerCard3 : 0]++;
	checkCard[playerCard4 != 0 ? playerCard4 : 0]++;
	//
	//mester card1
	//
	repeatMesterCard1:
	this->groupBox2->Show();
	int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
	int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
	switch (randOfSUIT)
	{
	case 1:
		this->label11->Text = L"♣";
		this->label11->ForeColor = System::Drawing::Color::Black;
		this->label10->ForeColor = System::Drawing::Color::Black;
		this->label9->ForeColor = System::Drawing::Color::Black;
		break;
	case 2:
		this->label11->Text = L"♦";
		this->label11->ForeColor = System::Drawing::Color::Red;
		this->label10->ForeColor = System::Drawing::Color::Red;
		this->label9->ForeColor = System::Drawing::Color::Red;
		break;
	case 3:
		this->label11->Text = L"♥";
		this->label11->ForeColor = System::Drawing::Color::Red;
		this->label10->ForeColor = System::Drawing::Color::Red;
		this->label9->ForeColor = System::Drawing::Color::Red;
		break;
	case 4:
		this->label11->Text = L"♠";
		this->label11->ForeColor = System::Drawing::Color::Black;
		this->label10->ForeColor = System::Drawing::Color::Black;
		this->label9->ForeColor = System::Drawing::Color::Black;
		break;
	}
	this->label10->Text = this->label11->Text;
	switch (randOfSYMBOL)
	{
	case 1:
		this->label9->Text = "A";
		break;
	case 11:
		this->label9->Text = "J";
		mesterScord -= 10.5;
		break;
	case 12:
		this->label9->Text = "Q";
		mesterScord -= 11.5;
		break;
	case 13:
		this->label9->Text = "K";
		mesterScord -= 12.5;
		break;
	default:
		this->label9->Text = randOfSYMBOL.ToString();
		break;
	}
	if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
	{
		if (randOfSYMBOL == 11)	mesterScord += 10.5;
		else if (randOfSYMBOL == 12) mesterScord += 11.5;
		else if (randOfSYMBOL == 13) mesterScord += 12.5;
		goto repeatMesterCard1;
	}
	else
	{
		checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
		numOfMesterCard++;
		this->label7->Text = (mesterScord += randOfSYMBOL).ToString();
		this->label9->Show();
		this->label10->Show();
		this->label11->Show();
	}
	//
	//mester card2
	//
	int randOfmesterCard2 = rand.NextDouble() * 100 + 1;
	if (mesterScord <= 6 || randOfmesterCard2 <= 100 - (mesterScord / 13 * 100))
	{
		repeatMesterCard2:
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label12->Text = L"♣";
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label14->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label12->Text = L"♦";
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label14->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label12->Text = L"♥";
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label14->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label12->Text = L"♠";
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label14->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label13->Text = this->label12->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label14->Text = "A";
			break;
		case 11:
			this->label14->Text = "J";
			mesterScord -= 10.5;
			break;
		case 12:
			this->label14->Text = "Q";
			mesterScord -= 11.5;
			break;
		case 13:
			this->label14->Text = "K";
			mesterScord -= 12.5;
			break;
		default:
			this->label14->Text = randOfSYMBOL.ToString();
			break;
		}
		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	mesterScord += 10.5;
			else if (randOfSYMBOL == 12) mesterScord += 11.5;
			else if (randOfSYMBOL == 13) mesterScord += 12.5;
			goto repeatMesterCard2;
		}
		else
		{
			checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			numOfMesterCard++;
			this->label7->Text = (mesterScord += randOfSYMBOL).ToString();
			this->groupBox3->Show();
			this->label12->Show();
			this->label13->Show();
			this->label14->Show();
		}
	}
	else
	{
		goto End;
	}
	//
	//mester card3
	//
	int randOfmesterCard3 = rand.NextDouble() * 100 + 1;
	if (mesterScord <= 6 || randOfmesterCard3 <= 100 - (mesterScord / 13 * 100))
	{
		repeatMesterCard3:
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label15->Text = L"♣";
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label17->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label15->Text = L"♦";
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label17->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label15->Text = L"♥";
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label17->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label15->Text = L"♠";
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label17->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label16->Text = this->label15->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label17->Text = "A";
			break;
		case 11:
			this->label17->Text = "J";
			mesterScord -= 10.5;
			break;
		case 12:
			this->label17->Text = "Q";
			mesterScord -= 11.5;
			break;
		case 13:
			this->label17->Text = "K";
			mesterScord -= 12.5;
			break;
		default:
			this->label17->Text = randOfSYMBOL.ToString();
			break;
		}
		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	mesterScord += 10.5;
			else if (randOfSYMBOL == 12) mesterScord += 11.5;
			else if (randOfSYMBOL == 13) mesterScord += 12.5;
			goto repeatMesterCard3;
		}
		else
		{
			checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			numOfMesterCard++;
			this->label7->Text = (mesterScord += randOfSYMBOL).ToString();
			this->groupBox4->Show();
			this->label15->Show();
			this->label16->Show();
			this->label17->Show();
		}
	}
	else
	{
		goto End;
	}
	//
	//mester card4
	//
	int randOfmesterCard4 = rand.NextDouble() * 100 + 1;
	if (mesterScord <= 6 || randOfmesterCard4 <= 100 - (mesterScord / 13 * 100))
	{
		repeatMesterCard4:
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label18->Text = L"♣";
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label20->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label18->Text = L"♦";
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label20->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label18->Text = L"♥";
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label20->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label18->Text = L"♠";
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label20->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label19->Text = this->label18->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label20->Text = "A";
			break;
		case 11:
			this->label20->Text = "J";
			mesterScord -= 10.5;
			break;
		case 12:
			this->label20->Text = "Q";
			mesterScord -= 11.5;
			break;
		case 13:
			this->label20->Text = "K";
			mesterScord -= 12.5;
			break;
		default:
			this->label20->Text = randOfSYMBOL.ToString();
			break;
		}
		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	mesterScord += 10.5;
			else if (randOfSYMBOL == 12) mesterScord += 11.5;
			else if (randOfSYMBOL == 13) mesterScord += 12.5;
			goto repeatMesterCard4;
		}
		else
		{
			checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			numOfMesterCard++;
			this->label7->Text = (mesterScord += randOfSYMBOL).ToString();
			this->groupBox5->Show();
			this->label18->Show();
			this->label19->Show();
			this->label20->Show();
		}
	}
	else
	{
		goto End;
	}
	//
	//mester card5
	//
	int randOfmesterCard5 = rand.NextDouble() * 100 + 1;
	if (mesterScord <= 6 || randOfmesterCard5 <= 100 - (mesterScord / 13 * 100))
	{
		repeatMesterCard5:
		int randOfSUIT = static_cast<Int32> (rand.NextDouble() * 4 + 1);
		int randOfSYMBOL = static_cast<Int32> (rand.NextDouble() * 13 + 1);
		switch (randOfSUIT)
		{
		case 1:
			this->label21->Text = L"♣";
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label23->ForeColor = System::Drawing::Color::Black;
			break;
		case 2:
			this->label21->Text = L"♦";
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label23->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			this->label21->Text = L"♥";
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label23->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			this->label21->Text = L"♠";
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label23->ForeColor = System::Drawing::Color::Black;
			break;
		}
		this->label22->Text = this->label21->Text;
		switch (randOfSYMBOL)
		{
		case 1:
			this->label23->Text = "A";
			break;
		case 11:
			this->label23->Text = "J";
			mesterScord -= 10.5;
			break;
		case 12:
			this->label23->Text = "Q";
			mesterScord -= 11.5;
			break;
		case 13:
			this->label23->Text = "K";
			mesterScord -= 12.5;
			break;
		default:
			this->label23->Text = randOfSYMBOL.ToString();
			break;
		}
		if (checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] != 0)
		{
			if (randOfSYMBOL == 11)	mesterScord += 10.5;
			else if (randOfSYMBOL == 12) mesterScord += 11.5;
			else if (randOfSYMBOL == 13) mesterScord += 12.5;
			goto repeatMesterCard4;
		}
		else
		{
			checkCard[(randOfSUIT - 1) * 13 + randOfSYMBOL] ++;
			numOfMesterCard++;
			this->label7->Text = (mesterScord += randOfSYMBOL).ToString();
			this->groupBox6->Show();
			this->label21->Show();
			this->label22->Show();
			this->label23->Show();
		}

		if (mesterScord < 10.5)
		{
			this->groupBox12->Show();
			this->groupBox12->Text = "過五關，您輸囉~";
			this->button2->Show();
			this->button5->Show();
		}
	}
	else
	{
		goto End;
	}

	End:
	if (mesterScord > 10.5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "爆掉了，您贏囉~";
		this->button2->Show();
		this->button5->Show();
	}
	else if (mesterScord == 10.5 && numOfMesterCard != 5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "十點半，您輸囉~";
		this->button2->Show();
		this->button5->Show();
	}
	else if (mesterScord < playerScord && numOfMesterCard != 5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "您比較大，您贏囉~";
		this->button2->Show();
		this->button5->Show();
	}
	else if (mesterScord > playerScord && numOfMesterCard != 5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "您比較小，您輸囉~";
		this->button2->Show();
		this->button5->Show();
	}
	else if (mesterScord == playerScord && numOfMesterCard != 5)
	{
		this->groupBox12->Show();
		this->groupBox12->Text = "一樣大，我們平手~";
		this->button2->Show();
		this->button5->Show();
	}
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}