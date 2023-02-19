#pragma once

namespace TokoOnline
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
public
	ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Form ^ loginForm;
		Dashboard(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}
		Dashboard(Form ^ dashboardForm)
		{
			loginForm = dashboardForm;
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label ^ label1;
		System::Windows::Forms::Panel ^ panel1;
		System::Windows::Forms::Panel ^ panel2;
		System::Windows::Forms::Panel ^ panel3;
		System::Windows::Forms::Panel ^ panel6;
		System::Windows::Forms::Label ^ label4;
		System::Windows::Forms::Panel ^ panel7;
		System::Windows::Forms::Panel ^ panel4;
		System::Windows::Forms::Label ^ label3;
		System::Windows::Forms::Panel ^ panel5;
		System::Windows::Forms::Label ^ label2;
		System::Windows::Forms::Panel ^ panel8;
		System::Windows::Forms::TextBox ^ search;
		System::Windows::Forms::Panel ^ panel9;
		System::Windows::Forms::Panel ^ panel11;
		System::Windows::Forms::Panel ^ panel10;
		System::Windows::Forms::Panel ^ panel12;
		System::Windows::Forms::FlowLayoutPanel ^ flowLayoutPanel1;
		System::Windows::Forms::Panel ^ panel13;
		System::Windows::Forms::Panel ^ produk_card_1;
		System::Windows::Forms::Label ^ produk_harga_1;
		System::Windows::Forms::Label ^ produk_text_1;
		System::Windows::Forms::Panel ^ produk_image_1; /// <summary>

		System::Windows::Forms::Panel ^ panel16;

		System::Windows::Forms::Label ^ label9;

		System::Windows::Forms::Label ^ label10;

		System::Windows::Forms::Panel ^ panel19;

		System::Windows::Forms::Panel ^ panel17;

		System::Windows::Forms::Label ^ label7;

		System::Windows::Forms::Label ^ label8;

		System::Windows::Forms::Panel ^ panel18;

		System::Windows::Forms::Panel ^ panel14;

		System::Windows::Forms::Label ^ label5;

		System::Windows::Forms::Label ^ label6;

		System::Windows::Forms::Panel ^ panel15;

		System::Windows::Forms::Panel ^ panel20;

		System::Windows::Forms::Label ^ label11;

		System::Windows::Forms::Label ^ label12;

		System::Windows::Forms::Panel ^ panel21;

		System::Windows::Forms::Panel ^ panel22;

		System::Windows::Forms::Label ^ label13;

		System::Windows::Forms::Label ^ label14;

		System::Windows::Forms::Panel ^ panel23;

		System::Windows::Forms::Panel ^ panel24;

		System::Windows::Forms::Label ^ label15;

		System::Windows::Forms::Label ^ label16;

		System::Windows::Forms::Panel ^ panel25;

		System::Windows::Forms::Panel ^ panel26;

		System::Windows::Forms::Label ^ label17;

		System::Windows::Forms::Label ^ label18;

		System::Windows::Forms::Panel ^ panel27;

		System::Windows::Forms::Panel ^ panel62;

		System::Windows::Forms::Label ^ label53;

		System::Windows::Forms::Label ^ label54;

		System::Windows::Forms::Panel ^ panel63;

		System::Windows::Forms::Panel ^ panel60;

		System::Windows::Forms::Label ^ label51;

		System::Windows::Forms::Label ^ label52;

		System::Windows::Forms::Panel ^ panel61;

		System::Windows::Forms::Panel ^ panel58;

		System::Windows::Forms::Label ^ label49;

		System::Windows::Forms::Label ^ label50;

		System::Windows::Forms::Panel ^ panel59;

		System::Windows::Forms::Panel ^ panel56;

		System::Windows::Forms::Label ^ label47;

		System::Windows::Forms::Label ^ label48;

		System::Windows::Forms::Panel ^ panel57;

		System::Windows::Forms::Panel ^ panel54;

		System::Windows::Forms::Label ^ label45;

		System::Windows::Forms::Label ^ label46;

		System::Windows::Forms::Panel ^ panel55;

		System::Windows::Forms::Panel ^ panel52;

		System::Windows::Forms::Label ^ label43;

		System::Windows::Forms::Label ^ label44;

		System::Windows::Forms::Panel ^ panel53;

		System::Windows::Forms::Panel ^ panel64;

		System::Windows::Forms::Label ^ label55;

		System::Windows::Forms::Label ^ label56;

		System::Windows::Forms::Panel ^ panel65;

		System::Windows::Forms::Panel ^ panel74;

		System::Windows::Forms::Label ^ label65;

		System::Windows::Forms::Label ^ label66;

		System::Windows::Forms::Panel ^ panel75;

		System::Windows::Forms::Panel ^ panel72;

		System::Windows::Forms::Label ^ label63;

		System::Windows::Forms::Label ^ label64;

		System::Windows::Forms::Panel ^ panel73;

		System::Windows::Forms::Panel ^ panel70;

		System::Windows::Forms::Label ^ label61;

		System::Windows::Forms::Label ^ label62;

		System::Windows::Forms::Panel ^ panel71;

		System::Windows::Forms::Panel ^ panel68;

		System::Windows::Forms::Label ^ label59;

		System::Windows::Forms::Label ^ label60;

		System::Windows::Forms::Panel ^ panel69;

		System::Windows::Forms::Panel ^ panel66;

		System::Windows::Forms::Label ^ label57;

		System::Windows::Forms::Label ^ label58;

		System::Windows::Forms::Panel ^ panel67;

		System::Windows::Forms::Panel ^ panel28;

		System::Windows::Forms::Label ^ label19;

		System::Windows::Forms::Label ^ label20;

		System::Windows::Forms::Panel ^ panel29;

		System::Windows::Forms::Panel ^ panel38;

		System::Windows::Forms::Label ^ label29;

		System::Windows::Forms::Label ^ label30;

		System::Windows::Forms::Panel ^ panel39;

		System::Windows::Forms::Panel ^ panel36;

		System::Windows::Forms::Label ^ label27;

		System::Windows::Forms::Label ^ label28;

		System::Windows::Forms::Panel ^ panel37;

		System::Windows::Forms::Panel ^ panel34;

		System::Windows::Forms::Label ^ label25;

		System::Windows::Forms::Label ^ label26;

		System::Windows::Forms::Panel ^ panel35;

		System::Windows::Forms::Panel ^ panel32;

		System::Windows::Forms::Label ^ label23;

		System::Windows::Forms::Label ^ label24;

		System::Windows::Forms::Panel ^ panel33;

		System::Windows::Forms::Panel ^ panel40;

		System::Windows::Forms::Label ^ label31;

		System::Windows::Forms::Label ^ label32;

		System::Windows::Forms::Panel ^ panel41;

		System::Windows::Forms::Panel ^ panel50;

		System::Windows::Forms::Label ^ label41;

		System::Windows::Forms::Label ^ label42;

		System::Windows::Forms::Panel ^ panel51;

		System::Windows::Forms::Panel ^ panel48;

		System::Windows::Forms::Label ^ label39;

		System::Windows::Forms::Label ^ label40;

		System::Windows::Forms::Panel ^ panel49;

		System::Windows::Forms::Panel ^ panel46;

		System::Windows::Forms::Label ^ label37;

		System::Windows::Forms::Label ^ label38;

		System::Windows::Forms::Panel ^ panel47;

		System::Windows::Forms::Panel ^ panel44;

		System::Windows::Forms::Label ^ label35;

		System::Windows::Forms::Label ^ label36;

		System::Windows::Forms::Panel ^ panel45;

		System::Windows::Forms::Panel ^ panel42;

		System::Windows::Forms::Label ^ label33;

		System::Windows::Forms::Label ^ label34;

		System::Windows::Forms::Panel ^ panel43;

		System::Windows::Forms::Panel ^ panel30;

		System::Windows::Forms::Label ^ label21;

		System::Windows::Forms::Label ^ label22;

		System::Windows::Forms::Panel ^ panel31;
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->produk_card_1 = (gcnew System::Windows::Forms::Panel());
			this->produk_harga_1 = (gcnew System::Windows::Forms::Label());
			this->produk_text_1 = (gcnew System::Windows::Forms::Label());
			this->produk_image_1 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel62 = (gcnew System::Windows::Forms::Panel());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->panel63 = (gcnew System::Windows::Forms::Panel());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->panel64 = (gcnew System::Windows::Forms::Panel());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel65 = (gcnew System::Windows::Forms::Panel());
			this->panel74 = (gcnew System::Windows::Forms::Panel());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel75 = (gcnew System::Windows::Forms::Panel());
			this->panel72 = (gcnew System::Windows::Forms::Panel());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->panel73 = (gcnew System::Windows::Forms::Panel());
			this->panel70 = (gcnew System::Windows::Forms::Panel());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->panel71 = (gcnew System::Windows::Forms::Panel());
			this->panel68 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->panel69 = (gcnew System::Windows::Forms::Panel());
			this->panel66 = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->panel67 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel8->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->produk_card_1->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel62->SuspendLayout();
			this->panel60->SuspendLayout();
			this->panel58->SuspendLayout();
			this->panel56->SuspendLayout();
			this->panel54->SuspendLayout();
			this->panel52->SuspendLayout();
			this->panel64->SuspendLayout();
			this->panel74->SuspendLayout();
			this->panel72->SuspendLayout();
			this->panel70->SuspendLayout();
			this->panel68->SuspendLayout();
			this->panel66->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel36->SuspendLayout();
			this->panel34->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel40->SuspendLayout();
			this->panel50->SuspendLayout();
			this->panel48->SuspendLayout();
			this->panel46->SuspendLayout();
			this->panel44->SuspendLayout();
			this->panel42->SuspendLayout();
			this->panel30->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HARAPAN JAYA";
			this->label1->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 702);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1062, 105);
			this->panel1->TabIndex = 2;
			this->panel1->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel6
			// 
			this->panel6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Location = System::Drawing::Point(600, 12);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(92, 88);
			this->panel6->TabIndex = 3;
			this->panel6->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 22);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Settings";
			this->label4->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(92, 58);
			this->panel7->TabIndex = 0;
			this->panel7->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel4
			// 
			this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(485, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(92, 88);
			this->panel4->TabIndex = 2;
			this->panel4->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Profile";
			this->label3->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(92, 58);
			this->panel5->TabIndex = 0;
			this->panel5->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(370, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(92, 88);
			this->panel2->TabIndex = 0;
			this->panel2->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Home";
			this->label2->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(92, 58);
			this->panel3->TabIndex = 0;
			this->panel3->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->Controls->Add(this->panel12);
			this->panel8->Controls->Add(this->panel11);
			this->panel8->Controls->Add(this->panel10);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(this->search);
			this->panel8->Controls->Add(this->label1);
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1062, 100);
			this->panel8->TabIndex = 3;
			this->panel8->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel12
			// 
			this->panel12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel12->Location = System::Drawing::Point(980, 33);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(41, 37);
			this->panel12->TabIndex = 2;
			this->panel12->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel11
			// 
			this->panel11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel11->Location = System::Drawing::Point(920, 33);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(41, 37);
			this->panel11->TabIndex = 2;
			this->panel11->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel10
			// 
			this->panel10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel10->Location = System::Drawing::Point(860, 33);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(41, 37);
			this->panel10->TabIndex = 2;
			this->panel10->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel9
			// 
			this->panel9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel9->Location = System::Drawing::Point(300, 33);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(41, 37);
			this->panel9->TabIndex = 2;
			// 
			// search
			// 
			this->search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->search->BackColor = System::Drawing::Color::White;
			this->search->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(347, 33);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(477, 34);
			this->search->TabIndex = 1;
			this->search->Text = L"Cari barang yang Kamu butuhkan disini\r\n";
			this->search->Click += gcnew System::EventHandler(this, &Dashboard::search_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel13);
			this->flowLayoutPanel1->Controls->Add(this->produk_card_1);
			this->flowLayoutPanel1->Controls->Add(this->panel16);
			this->flowLayoutPanel1->Controls->Add(this->panel17);
			this->flowLayoutPanel1->Controls->Add(this->panel14);
			this->flowLayoutPanel1->Controls->Add(this->panel20);
			this->flowLayoutPanel1->Controls->Add(this->panel22);
			this->flowLayoutPanel1->Controls->Add(this->panel24);
			this->flowLayoutPanel1->Controls->Add(this->panel26);
			this->flowLayoutPanel1->Controls->Add(this->panel62);
			this->flowLayoutPanel1->Controls->Add(this->panel60);
			this->flowLayoutPanel1->Controls->Add(this->panel58);
			this->flowLayoutPanel1->Controls->Add(this->panel56);
			this->flowLayoutPanel1->Controls->Add(this->panel54);
			this->flowLayoutPanel1->Controls->Add(this->panel52);
			this->flowLayoutPanel1->Controls->Add(this->panel64);
			this->flowLayoutPanel1->Controls->Add(this->panel74);
			this->flowLayoutPanel1->Controls->Add(this->panel72);
			this->flowLayoutPanel1->Controls->Add(this->panel70);
			this->flowLayoutPanel1->Controls->Add(this->panel68);
			this->flowLayoutPanel1->Controls->Add(this->panel66);
			this->flowLayoutPanel1->Controls->Add(this->panel28);
			this->flowLayoutPanel1->Controls->Add(this->panel38);
			this->flowLayoutPanel1->Controls->Add(this->panel36);
			this->flowLayoutPanel1->Controls->Add(this->panel34);
			this->flowLayoutPanel1->Controls->Add(this->panel32);
			this->flowLayoutPanel1->Controls->Add(this->panel40);
			this->flowLayoutPanel1->Controls->Add(this->panel50);
			this->flowLayoutPanel1->Controls->Add(this->panel48);
			this->flowLayoutPanel1->Controls->Add(this->panel46);
			this->flowLayoutPanel1->Controls->Add(this->panel44);
			this->flowLayoutPanel1->Controls->Add(this->panel42);
			this->flowLayoutPanel1->Controls->Add(this->panel30);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 106);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1043, 590);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// panel13
			// 
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel13->Location = System::Drawing::Point(3, 3);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(662, 255);
			this->panel13->TabIndex = 0;
			// 
			// produk_card_1
			// 
			this->produk_card_1->Controls->Add(this->produk_harga_1);
			this->produk_card_1->Controls->Add(this->produk_text_1);
			this->produk_card_1->Controls->Add(this->produk_image_1);
			this->produk_card_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->produk_card_1->Location = System::Drawing::Point(671, 3);
			this->produk_card_1->Name = L"produk_card_1";
			this->produk_card_1->Size = System::Drawing::Size(161, 255);
			this->produk_card_1->TabIndex = 4;
			// 
			// produk_harga_1
			// 
			this->produk_harga_1->AutoSize = true;
			this->produk_harga_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->produk_harga_1->Location = System::Drawing::Point(3, 219);
			this->produk_harga_1->Name = L"produk_harga_1";
			this->produk_harga_1->Size = System::Drawing::Size(107, 27);
			this->produk_harga_1->TabIndex = 5;
			this->produk_harga_1->Text = L"RP.25.000";
			// 
			// produk_text_1
			// 
			this->produk_text_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->produk_text_1->Location = System::Drawing::Point(3, 171);
			this->produk_text_1->Name = L"produk_text_1";
			this->produk_text_1->Size = System::Drawing::Size(155, 48);
			this->produk_text_1->TabIndex = 4;
			this->produk_text_1->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// produk_image_1
			// 
			this->produk_image_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"produk_image_1.BackgroundImage")));
			this->produk_image_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->produk_image_1->Location = System::Drawing::Point(0, 3);
			this->produk_image_1->Name = L"produk_image_1";
			this->produk_image_1->Size = System::Drawing::Size(161, 165);
			this->produk_image_1->TabIndex = 3;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->label9);
			this->panel16->Controls->Add(this->label10);
			this->panel16->Controls->Add(this->panel19);
			this->panel16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel16->Location = System::Drawing::Point(838, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(161, 255);
			this->panel16->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 27);
			this->label9->TabIndex = 5;
			this->label9->Text = L"RP.25.000";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 171);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(155, 48);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel19
			// 
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel19->Location = System::Drawing::Point(0, 3);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(161, 165);
			this->panel19->TabIndex = 3;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label7);
			this->panel17->Controls->Add(this->label8);
			this->panel17->Controls->Add(this->panel18);
			this->panel17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel17->Location = System::Drawing::Point(3, 264);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(161, 255);
			this->panel17->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 27);
			this->label7->TabIndex = 5;
			this->label7->Text = L"RP.25.000";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 171);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 48);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel18
			// 
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel18->Location = System::Drawing::Point(0, 3);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(161, 165);
			this->panel18->TabIndex = 3;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->label5);
			this->panel14->Controls->Add(this->label6);
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel14->Location = System::Drawing::Point(170, 264);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(161, 255);
			this->panel14->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 27);
			this->label5->TabIndex = 5;
			this->label5->Text = L"RP.25.000";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 48);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel15
			// 
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel15->Location = System::Drawing::Point(0, 3);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(161, 165);
			this->panel15->TabIndex = 3;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->label11);
			this->panel20->Controls->Add(this->label12);
			this->panel20->Controls->Add(this->panel21);
			this->panel20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel20->Location = System::Drawing::Point(337, 264);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(161, 255);
			this->panel20->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 219);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(107, 27);
			this->label11->TabIndex = 5;
			this->label11->Text = L"RP.25.000";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(155, 48);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel21
			// 
			this->panel21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel21.BackgroundImage")));
			this->panel21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel21->Location = System::Drawing::Point(0, 3);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(161, 165);
			this->panel21->TabIndex = 3;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->label13);
			this->panel22->Controls->Add(this->label14);
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel22->Location = System::Drawing::Point(504, 264);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(161, 255);
			this->panel22->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 219);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(107, 27);
			this->label13->TabIndex = 5;
			this->label13->Text = L"RP.25.000";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 171);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(155, 48);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel23
			// 
			this->panel23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel23.BackgroundImage")));
			this->panel23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel23->Location = System::Drawing::Point(0, 3);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(161, 165);
			this->panel23->TabIndex = 3;
			// 
			// panel24
			// 
			this->panel24->Controls->Add(this->label15);
			this->panel24->Controls->Add(this->label16);
			this->panel24->Controls->Add(this->panel25);
			this->panel24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel24->Location = System::Drawing::Point(671, 264);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(161, 255);
			this->panel24->TabIndex = 6;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(3, 219);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(107, 27);
			this->label15->TabIndex = 5;
			this->label15->Text = L"RP.25.000";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(3, 171);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(155, 48);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel25
			// 
			this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel25.BackgroundImage")));
			this->panel25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel25->Location = System::Drawing::Point(0, 3);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(161, 165);
			this->panel25->TabIndex = 3;
			// 
			// panel26
			// 
			this->panel26->Controls->Add(this->label17);
			this->panel26->Controls->Add(this->label18);
			this->panel26->Controls->Add(this->panel27);
			this->panel26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel26->Location = System::Drawing::Point(838, 264);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(161, 255);
			this->panel26->TabIndex = 6;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(3, 219);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(107, 27);
			this->label17->TabIndex = 5;
			this->label17->Text = L"RP.25.000";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(3, 171);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(155, 48);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel27
			// 
			this->panel27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel27.BackgroundImage")));
			this->panel27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel27->Location = System::Drawing::Point(0, 3);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(161, 165);
			this->panel27->TabIndex = 3;
			// 
			// panel62
			// 
			this->panel62->Controls->Add(this->label53);
			this->panel62->Controls->Add(this->label54);
			this->panel62->Controls->Add(this->panel63);
			this->panel62->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel62->Location = System::Drawing::Point(3, 525);
			this->panel62->Name = L"panel62";
			this->panel62->Size = System::Drawing::Size(161, 255);
			this->panel62->TabIndex = 6;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(3, 219);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(107, 27);
			this->label53->TabIndex = 5;
			this->label53->Text = L"RP.25.000";
			// 
			// label54
			// 
			this->label54->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(3, 171);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(155, 48);
			this->label54->TabIndex = 4;
			this->label54->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel63
			// 
			this->panel63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel63.BackgroundImage")));
			this->panel63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel63->Location = System::Drawing::Point(0, 3);
			this->panel63->Name = L"panel63";
			this->panel63->Size = System::Drawing::Size(161, 165);
			this->panel63->TabIndex = 3;
			// 
			// panel60
			// 
			this->panel60->Controls->Add(this->label51);
			this->panel60->Controls->Add(this->label52);
			this->panel60->Controls->Add(this->panel61);
			this->panel60->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel60->Location = System::Drawing::Point(170, 525);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(161, 255);
			this->panel60->TabIndex = 6;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(3, 219);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(107, 27);
			this->label51->TabIndex = 5;
			this->label51->Text = L"RP.25.000";
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(3, 171);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(155, 48);
			this->label52->TabIndex = 4;
			this->label52->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel61
			// 
			this->panel61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel61.BackgroundImage")));
			this->panel61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel61->Location = System::Drawing::Point(0, 3);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(161, 165);
			this->panel61->TabIndex = 3;
			// 
			// panel58
			// 
			this->panel58->Controls->Add(this->label49);
			this->panel58->Controls->Add(this->label50);
			this->panel58->Controls->Add(this->panel59);
			this->panel58->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel58->Location = System::Drawing::Point(337, 525);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(161, 255);
			this->panel58->TabIndex = 6;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(3, 219);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(107, 27);
			this->label49->TabIndex = 5;
			this->label49->Text = L"RP.25.000";
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(3, 171);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(155, 48);
			this->label50->TabIndex = 4;
			this->label50->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel59
			// 
			this->panel59->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel59.BackgroundImage")));
			this->panel59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel59->Location = System::Drawing::Point(0, 3);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(161, 165);
			this->panel59->TabIndex = 3;
			// 
			// panel56
			// 
			this->panel56->Controls->Add(this->label47);
			this->panel56->Controls->Add(this->label48);
			this->panel56->Controls->Add(this->panel57);
			this->panel56->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel56->Location = System::Drawing::Point(504, 525);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(161, 255);
			this->panel56->TabIndex = 6;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(3, 219);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(107, 27);
			this->label47->TabIndex = 5;
			this->label47->Text = L"RP.25.000";
			// 
			// label48
			// 
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(3, 171);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(155, 48);
			this->label48->TabIndex = 4;
			this->label48->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel57
			// 
			this->panel57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel57.BackgroundImage")));
			this->panel57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel57->Location = System::Drawing::Point(0, 3);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(161, 165);
			this->panel57->TabIndex = 3;
			// 
			// panel54
			// 
			this->panel54->Controls->Add(this->label45);
			this->panel54->Controls->Add(this->label46);
			this->panel54->Controls->Add(this->panel55);
			this->panel54->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel54->Location = System::Drawing::Point(671, 525);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(161, 255);
			this->panel54->TabIndex = 6;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(3, 219);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(107, 27);
			this->label45->TabIndex = 5;
			this->label45->Text = L"RP.25.000";
			// 
			// label46
			// 
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(3, 171);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(155, 48);
			this->label46->TabIndex = 4;
			this->label46->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel55
			// 
			this->panel55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel55.BackgroundImage")));
			this->panel55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel55->Location = System::Drawing::Point(0, 3);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(161, 165);
			this->panel55->TabIndex = 3;
			// 
			// panel52
			// 
			this->panel52->Controls->Add(this->label43);
			this->panel52->Controls->Add(this->label44);
			this->panel52->Controls->Add(this->panel53);
			this->panel52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel52->Location = System::Drawing::Point(838, 525);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(161, 255);
			this->panel52->TabIndex = 6;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(3, 219);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(107, 27);
			this->label43->TabIndex = 5;
			this->label43->Text = L"RP.25.000";
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(3, 171);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(155, 48);
			this->label44->TabIndex = 4;
			this->label44->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel53
			// 
			this->panel53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel53.BackgroundImage")));
			this->panel53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel53->Location = System::Drawing::Point(0, 3);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(161, 165);
			this->panel53->TabIndex = 3;
			// 
			// panel64
			// 
			this->panel64->Controls->Add(this->label55);
			this->panel64->Controls->Add(this->label56);
			this->panel64->Controls->Add(this->panel65);
			this->panel64->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel64->Location = System::Drawing::Point(3, 786);
			this->panel64->Name = L"panel64";
			this->panel64->Size = System::Drawing::Size(161, 255);
			this->panel64->TabIndex = 6;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(3, 219);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(107, 27);
			this->label55->TabIndex = 5;
			this->label55->Text = L"RP.25.000";
			// 
			// label56
			// 
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(3, 171);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(155, 48);
			this->label56->TabIndex = 4;
			this->label56->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel65
			// 
			this->panel65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel65.BackgroundImage")));
			this->panel65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel65->Location = System::Drawing::Point(0, 3);
			this->panel65->Name = L"panel65";
			this->panel65->Size = System::Drawing::Size(161, 165);
			this->panel65->TabIndex = 3;
			// 
			// panel74
			// 
			this->panel74->Controls->Add(this->label65);
			this->panel74->Controls->Add(this->label66);
			this->panel74->Controls->Add(this->panel75);
			this->panel74->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel74->Location = System::Drawing::Point(170, 786);
			this->panel74->Name = L"panel74";
			this->panel74->Size = System::Drawing::Size(161, 255);
			this->panel74->TabIndex = 6;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(3, 219);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(107, 27);
			this->label65->TabIndex = 5;
			this->label65->Text = L"RP.25.000";
			// 
			// label66
			// 
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(3, 171);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(155, 48);
			this->label66->TabIndex = 4;
			this->label66->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel75
			// 
			this->panel75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel75.BackgroundImage")));
			this->panel75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel75->Location = System::Drawing::Point(0, 3);
			this->panel75->Name = L"panel75";
			this->panel75->Size = System::Drawing::Size(161, 165);
			this->panel75->TabIndex = 3;
			// 
			// panel72
			// 
			this->panel72->Controls->Add(this->label63);
			this->panel72->Controls->Add(this->label64);
			this->panel72->Controls->Add(this->panel73);
			this->panel72->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel72->Location = System::Drawing::Point(337, 786);
			this->panel72->Name = L"panel72";
			this->panel72->Size = System::Drawing::Size(161, 255);
			this->panel72->TabIndex = 6;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(3, 219);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(107, 27);
			this->label63->TabIndex = 5;
			this->label63->Text = L"RP.25.000";
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(3, 171);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(155, 48);
			this->label64->TabIndex = 4;
			this->label64->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel73
			// 
			this->panel73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel73.BackgroundImage")));
			this->panel73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel73->Location = System::Drawing::Point(0, 3);
			this->panel73->Name = L"panel73";
			this->panel73->Size = System::Drawing::Size(161, 165);
			this->panel73->TabIndex = 3;
			// 
			// panel70
			// 
			this->panel70->Controls->Add(this->label61);
			this->panel70->Controls->Add(this->label62);
			this->panel70->Controls->Add(this->panel71);
			this->panel70->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel70->Location = System::Drawing::Point(504, 786);
			this->panel70->Name = L"panel70";
			this->panel70->Size = System::Drawing::Size(161, 255);
			this->panel70->TabIndex = 6;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(3, 219);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(107, 27);
			this->label61->TabIndex = 5;
			this->label61->Text = L"RP.25.000";
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(3, 171);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(155, 48);
			this->label62->TabIndex = 4;
			this->label62->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel71
			// 
			this->panel71->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel71.BackgroundImage")));
			this->panel71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel71->Location = System::Drawing::Point(0, 3);
			this->panel71->Name = L"panel71";
			this->panel71->Size = System::Drawing::Size(161, 165);
			this->panel71->TabIndex = 3;
			// 
			// panel68
			// 
			this->panel68->Controls->Add(this->label59);
			this->panel68->Controls->Add(this->label60);
			this->panel68->Controls->Add(this->panel69);
			this->panel68->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel68->Location = System::Drawing::Point(671, 786);
			this->panel68->Name = L"panel68";
			this->panel68->Size = System::Drawing::Size(161, 255);
			this->panel68->TabIndex = 6;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(3, 219);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(107, 27);
			this->label59->TabIndex = 5;
			this->label59->Text = L"RP.25.000";
			// 
			// label60
			// 
			this->label60->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(3, 171);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(155, 48);
			this->label60->TabIndex = 4;
			this->label60->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel69
			// 
			this->panel69->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel69.BackgroundImage")));
			this->panel69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel69->Location = System::Drawing::Point(0, 3);
			this->panel69->Name = L"panel69";
			this->panel69->Size = System::Drawing::Size(161, 165);
			this->panel69->TabIndex = 3;
			// 
			// panel66
			// 
			this->panel66->Controls->Add(this->label57);
			this->panel66->Controls->Add(this->label58);
			this->panel66->Controls->Add(this->panel67);
			this->panel66->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel66->Location = System::Drawing::Point(838, 786);
			this->panel66->Name = L"panel66";
			this->panel66->Size = System::Drawing::Size(161, 255);
			this->panel66->TabIndex = 6;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(3, 219);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(107, 27);
			this->label57->TabIndex = 5;
			this->label57->Text = L"RP.25.000";
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(3, 171);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(155, 48);
			this->label58->TabIndex = 4;
			this->label58->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel67
			// 
			this->panel67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel67.BackgroundImage")));
			this->panel67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel67->Location = System::Drawing::Point(0, 3);
			this->panel67->Name = L"panel67";
			this->panel67->Size = System::Drawing::Size(161, 165);
			this->panel67->TabIndex = 3;
			// 
			// panel28
			// 
			this->panel28->Controls->Add(this->label19);
			this->panel28->Controls->Add(this->label20);
			this->panel28->Controls->Add(this->panel29);
			this->panel28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel28->Location = System::Drawing::Point(3, 1047);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(161, 255);
			this->panel28->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(3, 219);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(107, 27);
			this->label19->TabIndex = 5;
			this->label19->Text = L"RP.25.000";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(3, 171);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(155, 48);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel29
			// 
			this->panel29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel29.BackgroundImage")));
			this->panel29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel29->Location = System::Drawing::Point(0, 3);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(161, 165);
			this->panel29->TabIndex = 3;
			// 
			// panel38
			// 
			this->panel38->Controls->Add(this->label29);
			this->panel38->Controls->Add(this->label30);
			this->panel38->Controls->Add(this->panel39);
			this->panel38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel38->Location = System::Drawing::Point(170, 1047);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(161, 255);
			this->panel38->TabIndex = 6;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(3, 219);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(107, 27);
			this->label29->TabIndex = 5;
			this->label29->Text = L"RP.25.000";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(3, 171);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(155, 48);
			this->label30->TabIndex = 4;
			this->label30->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel39
			// 
			this->panel39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel39.BackgroundImage")));
			this->panel39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel39->Location = System::Drawing::Point(0, 3);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(161, 165);
			this->panel39->TabIndex = 3;
			// 
			// panel36
			// 
			this->panel36->Controls->Add(this->label27);
			this->panel36->Controls->Add(this->label28);
			this->panel36->Controls->Add(this->panel37);
			this->panel36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel36->Location = System::Drawing::Point(337, 1047);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(161, 255);
			this->panel36->TabIndex = 6;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(3, 219);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(107, 27);
			this->label27->TabIndex = 5;
			this->label27->Text = L"RP.25.000";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(3, 171);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(155, 48);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel37
			// 
			this->panel37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel37.BackgroundImage")));
			this->panel37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel37->Location = System::Drawing::Point(0, 3);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(161, 165);
			this->panel37->TabIndex = 3;
			// 
			// panel34
			// 
			this->panel34->Controls->Add(this->label25);
			this->panel34->Controls->Add(this->label26);
			this->panel34->Controls->Add(this->panel35);
			this->panel34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel34->Location = System::Drawing::Point(504, 1047);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(161, 255);
			this->panel34->TabIndex = 6;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(3, 219);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(107, 27);
			this->label25->TabIndex = 5;
			this->label25->Text = L"RP.25.000";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(3, 171);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(155, 48);
			this->label26->TabIndex = 4;
			this->label26->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel35
			// 
			this->panel35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel35.BackgroundImage")));
			this->panel35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel35->Location = System::Drawing::Point(0, 3);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(161, 165);
			this->panel35->TabIndex = 3;
			// 
			// panel32
			// 
			this->panel32->Controls->Add(this->label23);
			this->panel32->Controls->Add(this->label24);
			this->panel32->Controls->Add(this->panel33);
			this->panel32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel32->Location = System::Drawing::Point(671, 1047);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(161, 255);
			this->panel32->TabIndex = 6;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(3, 219);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(107, 27);
			this->label23->TabIndex = 5;
			this->label23->Text = L"RP.25.000";
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(3, 171);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(155, 48);
			this->label24->TabIndex = 4;
			this->label24->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel33
			// 
			this->panel33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel33.BackgroundImage")));
			this->panel33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel33->Location = System::Drawing::Point(0, 3);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(161, 165);
			this->panel33->TabIndex = 3;
			// 
			// panel40
			// 
			this->panel40->Controls->Add(this->label31);
			this->panel40->Controls->Add(this->label32);
			this->panel40->Controls->Add(this->panel41);
			this->panel40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel40->Location = System::Drawing::Point(838, 1047);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(161, 255);
			this->panel40->TabIndex = 6;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(3, 219);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(107, 27);
			this->label31->TabIndex = 5;
			this->label31->Text = L"RP.25.000";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(3, 171);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(155, 48);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel41
			// 
			this->panel41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel41.BackgroundImage")));
			this->panel41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel41->Location = System::Drawing::Point(0, 3);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(161, 165);
			this->panel41->TabIndex = 3;
			// 
			// panel50
			// 
			this->panel50->Controls->Add(this->label41);
			this->panel50->Controls->Add(this->label42);
			this->panel50->Controls->Add(this->panel51);
			this->panel50->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel50->Location = System::Drawing::Point(3, 1308);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(161, 255);
			this->panel50->TabIndex = 6;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(3, 219);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(107, 27);
			this->label41->TabIndex = 5;
			this->label41->Text = L"RP.25.000";
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(3, 171);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(155, 48);
			this->label42->TabIndex = 4;
			this->label42->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel51
			// 
			this->panel51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel51.BackgroundImage")));
			this->panel51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel51->Location = System::Drawing::Point(0, 3);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(161, 165);
			this->panel51->TabIndex = 3;
			// 
			// panel48
			// 
			this->panel48->Controls->Add(this->label39);
			this->panel48->Controls->Add(this->label40);
			this->panel48->Controls->Add(this->panel49);
			this->panel48->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel48->Location = System::Drawing::Point(170, 1308);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(161, 255);
			this->panel48->TabIndex = 6;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(3, 219);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(107, 27);
			this->label39->TabIndex = 5;
			this->label39->Text = L"RP.25.000";
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(3, 171);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(155, 48);
			this->label40->TabIndex = 4;
			this->label40->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel49
			// 
			this->panel49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel49.BackgroundImage")));
			this->panel49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel49->Location = System::Drawing::Point(0, 3);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(161, 165);
			this->panel49->TabIndex = 3;
			// 
			// panel46
			// 
			this->panel46->Controls->Add(this->label37);
			this->panel46->Controls->Add(this->label38);
			this->panel46->Controls->Add(this->panel47);
			this->panel46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel46->Location = System::Drawing::Point(337, 1308);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(161, 255);
			this->panel46->TabIndex = 6;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(3, 219);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(107, 27);
			this->label37->TabIndex = 5;
			this->label37->Text = L"RP.25.000";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(3, 171);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(155, 48);
			this->label38->TabIndex = 4;
			this->label38->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel47
			// 
			this->panel47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel47.BackgroundImage")));
			this->panel47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel47->Location = System::Drawing::Point(0, 3);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(161, 165);
			this->panel47->TabIndex = 3;
			// 
			// panel44
			// 
			this->panel44->Controls->Add(this->label35);
			this->panel44->Controls->Add(this->label36);
			this->panel44->Controls->Add(this->panel45);
			this->panel44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel44->Location = System::Drawing::Point(504, 1308);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(161, 255);
			this->panel44->TabIndex = 6;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(3, 219);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(107, 27);
			this->label35->TabIndex = 5;
			this->label35->Text = L"RP.25.000";
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(3, 171);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(155, 48);
			this->label36->TabIndex = 4;
			this->label36->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel45
			// 
			this->panel45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel45.BackgroundImage")));
			this->panel45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel45->Location = System::Drawing::Point(0, 3);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(161, 165);
			this->panel45->TabIndex = 3;
			// 
			// panel42
			// 
			this->panel42->Controls->Add(this->label33);
			this->panel42->Controls->Add(this->label34);
			this->panel42->Controls->Add(this->panel43);
			this->panel42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel42->Location = System::Drawing::Point(671, 1308);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(161, 255);
			this->panel42->TabIndex = 6;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(3, 219);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(107, 27);
			this->label33->TabIndex = 5;
			this->label33->Text = L"RP.25.000";
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(3, 171);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(155, 48);
			this->label34->TabIndex = 4;
			this->label34->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel43
			// 
			this->panel43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel43.BackgroundImage")));
			this->panel43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel43->Location = System::Drawing::Point(0, 3);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(161, 165);
			this->panel43->TabIndex = 3;
			// 
			// panel30
			// 
			this->panel30->Controls->Add(this->label21);
			this->panel30->Controls->Add(this->label22);
			this->panel30->Controls->Add(this->panel31);
			this->panel30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel30->Location = System::Drawing::Point(838, 1308);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(161, 255);
			this->panel30->TabIndex = 6;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(3, 219);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(107, 27);
			this->label21->TabIndex = 5;
			this->label21->Text = L"RP.25.000";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(3, 171);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(155, 48);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// panel31
			// 
			this->panel31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel31.BackgroundImage")));
			this->panel31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel31->Location = System::Drawing::Point(0, 3);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(161, 165);
			this->panel31->TabIndex = 3;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1062, 807);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel8);
			this->MinimumSize = System::Drawing::Size(1080, 670);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->produk_card_1->ResumeLayout(false);
			this->produk_card_1->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel62->ResumeLayout(false);
			this->panel62->PerformLayout();
			this->panel60->ResumeLayout(false);
			this->panel60->PerformLayout();
			this->panel58->ResumeLayout(false);
			this->panel58->PerformLayout();
			this->panel56->ResumeLayout(false);
			this->panel56->PerformLayout();
			this->panel54->ResumeLayout(false);
			this->panel54->PerformLayout();
			this->panel52->ResumeLayout(false);
			this->panel52->PerformLayout();
			this->panel64->ResumeLayout(false);
			this->panel64->PerformLayout();
			this->panel74->ResumeLayout(false);
			this->panel74->PerformLayout();
			this->panel72->ResumeLayout(false);
			this->panel72->PerformLayout();
			this->panel70->ResumeLayout(false);
			this->panel70->PerformLayout();
			this->panel68->ResumeLayout(false);
			this->panel68->PerformLayout();
			this->panel66->ResumeLayout(false);
			this->panel66->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			this->panel36->ResumeLayout(false);
			this->panel36->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			this->panel40->ResumeLayout(false);
			this->panel40->PerformLayout();
			this->panel50->ResumeLayout(false);
			this->panel50->PerformLayout();
			this->panel48->ResumeLayout(false);
			this->panel48->PerformLayout();
			this->panel46->ResumeLayout(false);
			this->panel46->PerformLayout();
			this->panel44->ResumeLayout(false);
			this->panel44->PerformLayout();
			this->panel42->ResumeLayout(false);
			this->panel42->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->ResumeLayout(false);

		}

		System::Void panel12_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Hide();
			loginForm->Show();
			this->Close();
			// LoginForm^ loginForm = gcnew LoginForm();
			// Application::Run(loginForm);
		}

		System::Void other_Click(System::Object ^ sender, System::EventArgs ^ e)
		{

			if (search->Text == "")
			{
				search->Text = "Cari barang yang Kamu butuhkan disini ..........";
			}
		}

		System::Void search_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (search->Text == "Cari barang yang Kamu butuhkan disini ..........")
			{
				search->Text = "";
			}
		}
	};
}
