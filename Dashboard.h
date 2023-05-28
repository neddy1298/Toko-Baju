#pragma once
#include "DetailProduk.h"
#include "Keranjang.h"

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
		Form^ loginForm;

	private:
		System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	public:
		String^ barang;
		Dashboard(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}
		Dashboard(Form^ dashboardForm)
		{
			loginForm = dashboardForm;
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}

	private:

		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Panel^ panel4;
		System::Windows::Forms::Panel^ panel5;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::Panel^ panel6;
		System::Windows::Forms::Panel^ panel7;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::Panel^ panel11;

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
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Panel^ panel8;

		System::Windows::Forms::Panel^ panel12;
		System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		/// <summary>System::Windows::Forms::Panel ^ panel11;
		System::Windows::Forms::Label^ label6;

		System::Windows::Forms::Panel^ card_1;
		System::Windows::Forms::Label^ harga_1;
		System::Windows::Forms::Label^ nama_barang_1;
		System::Windows::Forms::Panel^ gambar_1;

		System::Windows::Forms::Panel^ card_2;
		System::Windows::Forms::Label^ harga_2;
		System::Windows::Forms::Label^ nama_barang_2;
		System::Windows::Forms::Panel^ gambar_2;
		System::Windows::Forms::Panel^ card_3;
		System::Windows::Forms::Label^ harga_3;
		System::Windows::Forms::Label^ nama_barang_3;
		System::Windows::Forms::Panel^ gambar_3;
		System::Windows::Forms::Panel^ card_4;
		System::Windows::Forms::Label^ harga_4;
		System::Windows::Forms::Label^ nama_barang_4;
		System::Windows::Forms::Panel^ gambar_4;

	private:
		System::ComponentModel::IContainer^ components;

		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->card_1 = (gcnew System::Windows::Forms::Panel());
			this->harga_1 = (gcnew System::Windows::Forms::Label());
			this->nama_barang_1 = (gcnew System::Windows::Forms::Label());
			this->gambar_1 = (gcnew System::Windows::Forms::Panel());
			this->card_2 = (gcnew System::Windows::Forms::Panel());
			this->harga_2 = (gcnew System::Windows::Forms::Label());
			this->nama_barang_2 = (gcnew System::Windows::Forms::Label());
			this->gambar_2 = (gcnew System::Windows::Forms::Panel());
			this->card_3 = (gcnew System::Windows::Forms::Panel());
			this->harga_3 = (gcnew System::Windows::Forms::Label());
			this->nama_barang_3 = (gcnew System::Windows::Forms::Label());
			this->gambar_3 = (gcnew System::Windows::Forms::Panel());
			this->card_4 = (gcnew System::Windows::Forms::Panel());
			this->harga_4 = (gcnew System::Windows::Forms::Label());
			this->nama_barang_4 = (gcnew System::Windows::Forms::Label());
			this->gambar_4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel8->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->card_1->SuspendLayout();
			this->card_2->SuspendLayout();
			this->card_3->SuspendLayout();
			this->card_4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(495, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BAJU DISTRO";
			//
			// panel8
			//
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel8->Controls->Add(this->label1);
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1297, 96);
			this->panel8->TabIndex = 3;
			//
			// panel12
			//
			this->panel12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel12->Location = System::Drawing::Point(6, 10);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(47, 60);
			this->panel12->TabIndex = 2;
			//
			// flowLayoutPanel1
			//
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Controls->Add(this->card_1);
			this->flowLayoutPanel1->Controls->Add(this->card_2);
			this->flowLayoutPanel1->Controls->Add(this->card_3);
			this->flowLayoutPanel1->Controls->Add(this->card_4);
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel7);
			this->flowLayoutPanel1->Location = System::Drawing::Point(40, 101);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1219, 647);
			this->flowLayoutPanel1->TabIndex = 4;
			this->flowLayoutPanel1->TabStop = true;
			//
			// card_1
			//
			this->card_1->BackColor = System::Drawing::Color::White;
			this->card_1->Controls->Add(this->harga_1);
			this->card_1->Controls->Add(this->nama_barang_1);
			this->card_1->Controls->Add(this->gambar_1);
			this->card_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->card_1->Location = System::Drawing::Point(3, 3);
			this->card_1->Name = L"card_1";
			this->card_1->Size = System::Drawing::Size(296, 332);
			this->card_1->TabIndex = 6;
			this->card_1->Tag = L"1";
			this->card_1->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			//
			// harga_1
			//
			this->harga_1->AutoSize = true;
			this->harga_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_1->ForeColor = System::Drawing::Color::Black;
			this->harga_1->Location = System::Drawing::Point(49, 295);
			this->harga_1->Name = L"harga_1";
			this->harga_1->Size = System::Drawing::Size(116, 27);
			this->harga_1->TabIndex = 5;
			this->harga_1->Tag = L"1";
			this->harga_1->Text = L"RP 125.000";
			this->harga_1->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			//
			// nama_barang_1
			//
			this->nama_barang_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nama_barang_1->ForeColor = System::Drawing::Color::Black;
			this->nama_barang_1->Location = System::Drawing::Point(49, 223);
			this->nama_barang_1->Name = L"nama_barang_1";
			this->nama_barang_1->Size = System::Drawing::Size(204, 78);
			this->nama_barang_1->TabIndex = 4;
			this->nama_barang_1->Tag = L"1";
			this->nama_barang_1->Text = L"T-shirt pria / baju kaos samurai jepang / baju kaos warna putih";
			this->nama_barang_1->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			//
			// gambar_1
			//
			this->gambar_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gambar_1.BackgroundImage")));
			this->gambar_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->gambar_1->Location = System::Drawing::Point(49, 3);
			this->gambar_1->Name = L"gambar_1";
			this->gambar_1->Size = System::Drawing::Size(204, 233);
			this->gambar_1->TabIndex = 3;
			this->gambar_1->Tag = L"1";
			this->gambar_1->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			//
			// card_2
			//
			this->card_2->BackColor = System::Drawing::Color::White;
			this->card_2->Controls->Add(this->harga_2);
			this->card_2->Controls->Add(this->nama_barang_2);
			this->card_2->Controls->Add(this->gambar_2);
			this->card_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->card_2->Location = System::Drawing::Point(305, 3);
			this->card_2->Name = L"card_2";
			this->card_2->Size = System::Drawing::Size(296, 332);
			this->card_2->TabIndex = 7;
			this->card_2->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_2_Click);
			//
			// harga_2
			//
			this->harga_2->AutoSize = true;
			this->harga_2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_2->ForeColor = System::Drawing::Color::Black;
			this->harga_2->Location = System::Drawing::Point(49, 295);
			this->harga_2->Name = L"harga_2";
			this->harga_2->Size = System::Drawing::Size(107, 27);
			this->harga_2->TabIndex = 5;
			this->harga_2->Text = L"Rp 99.000";
			this->harga_2->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_2_Click);
			//
			// nama_barang_2
			//
			this->nama_barang_2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nama_barang_2->ForeColor = System::Drawing::Color::Black;
			this->nama_barang_2->Location = System::Drawing::Point(49, 223);
			this->nama_barang_2->Name = L"nama_barang_2";
			this->nama_barang_2->Size = System::Drawing::Size(204, 78);
			this->nama_barang_2->TabIndex = 4;
			this->nama_barang_2->Text = L"Horizen T-shirt CAT VERY BUSY - White Reguler, M";
			this->nama_barang_2->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_2_Click);
			//
			// gambar_2
			//
			this->gambar_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gambar_2.BackgroundImage")));
			this->gambar_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->gambar_2->Location = System::Drawing::Point(49, 3);
			this->gambar_2->Name = L"gambar_2";
			this->gambar_2->Size = System::Drawing::Size(204, 233);
			this->gambar_2->TabIndex = 3;
			this->gambar_2->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_2_Click);
			//
			// card_3
			//
			this->card_3->BackColor = System::Drawing::Color::White;
			this->card_3->Controls->Add(this->harga_3);
			this->card_3->Controls->Add(this->nama_barang_3);
			this->card_3->Controls->Add(this->gambar_3);
			this->card_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->card_3->Location = System::Drawing::Point(607, 3);
			this->card_3->Name = L"card_3";
			this->card_3->Size = System::Drawing::Size(296, 332);
			this->card_3->TabIndex = 8;
			this->card_3->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_3_Click);
			//
			// harga_3
			//
			this->harga_3->AutoSize = true;
			this->harga_3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_3->ForeColor = System::Drawing::Color::Black;
			this->harga_3->Location = System::Drawing::Point(49, 295);
			this->harga_3->Name = L"harga_3";
			this->harga_3->Size = System::Drawing::Size(107, 27);
			this->harga_3->TabIndex = 5;
			this->harga_3->Text = L"RP.49.500";
			this->harga_3->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_3_Click);
			//
			// nama_barang_3
			//
			this->nama_barang_3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nama_barang_3->ForeColor = System::Drawing::Color::Black;
			this->nama_barang_3->Location = System::Drawing::Point(49, 223);
			this->nama_barang_3->Name = L"nama_barang_3";
			this->nama_barang_3->Size = System::Drawing::Size(204, 78);
			this->nama_barang_3->TabIndex = 4;
			this->nama_barang_3->Text = L"Baju Kaos Pria Lengan Pendek Kayser Time T-Shrt Distro Keren - Black yellow, M";
			this->nama_barang_3->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_3_Click);
			//
			// gambar_3
			//
			this->gambar_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gambar_3.BackgroundImage")));
			this->gambar_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->gambar_3->Location = System::Drawing::Point(49, 3);
			this->gambar_3->Name = L"gambar_3";
			this->gambar_3->Size = System::Drawing::Size(204, 233);
			this->gambar_3->TabIndex = 3;
			this->gambar_3->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_3_Click);
			//
			// card_4
			//
			this->card_4->BackColor = System::Drawing::Color::White;
			this->card_4->Controls->Add(this->harga_4);
			this->card_4->Controls->Add(this->nama_barang_4);
			this->card_4->Controls->Add(this->gambar_4);
			this->card_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->card_4->Location = System::Drawing::Point(909, 3);
			this->card_4->Name = L"card_4";
			this->card_4->Size = System::Drawing::Size(296, 332);
			this->card_4->TabIndex = 9;
			this->card_4->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_4_Click);
			//
			// harga_4
			//
			this->harga_4->AutoSize = true;
			this->harga_4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_4->ForeColor = System::Drawing::Color::Black;
			this->harga_4->Location = System::Drawing::Point(49, 295);
			this->harga_4->Name = L"harga_4";
			this->harga_4->Size = System::Drawing::Size(107, 27);
			this->harga_4->TabIndex = 5;
			this->harga_4->Text = L"RP.42.900";
			this->harga_4->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_4_Click);
			//
			// nama_barang_4
			//
			this->nama_barang_4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nama_barang_4->ForeColor = System::Drawing::Color::Black;
			this->nama_barang_4->Location = System::Drawing::Point(49, 223);
			this->nama_barang_4->Name = L"nama_barang_4";
			this->nama_barang_4->Size = System::Drawing::Size(204, 78);
			this->nama_barang_4->TabIndex = 4;
			this->nama_barang_4->Text = L"T-shirt pria / baju kaos samurai jepang / baju kaos warna putih";
			this->nama_barang_4->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_4_Click);
			//
			// gambar_4
			//
			this->gambar_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gambar_4.BackgroundImage")));
			this->gambar_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->gambar_4->Location = System::Drawing::Point(49, 3);
			this->gambar_4->Name = L"gambar_4";
			this->gambar_4->Size = System::Drawing::Size(204, 233);
			this->gambar_4->TabIndex = 3;
			this->gambar_4->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_4_Click);
			//
			// panel1
			//
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->Location = System::Drawing::Point(3, 341);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(296, 332);
			this->panel1->TabIndex = 10;
			this->panel1->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_5_click);
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(49, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 27);
			this->label2->TabIndex = 5;
			this->label2->Text = L"RP.47.000";
			this->label2->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_5_click);
			//
			// label3
			//
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(49, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 72);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Baju Kaos Pria Lengan Pendek Atasan Cowok Tshirt Taurus Fashion Distro - Abu-abu,"
				L" XS";
			this->label3->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_5_click);
			//
			// panel2
			//
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Location = System::Drawing::Point(49, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(204, 233);
			this->panel2->TabIndex = 3;
			this->panel2->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_5_click);
			//
			// panel3
			//
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel3->Location = System::Drawing::Point(305, 341);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(296, 332);
			this->panel3->TabIndex = 11;
			this->panel3->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_6_click);
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(49, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 27);
			this->label4->TabIndex = 5;
			this->label4->Text = L"RP.44.900";
			this->label4->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_6_click);
			//
			// label7
			//
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(49, 223);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(204, 78);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Baju Kaos Pria Distro Lengan Pendek Kayser Turns Motif Sablon Premium - Biru, M";
			this->label7->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_6_click);
			//
			// panel4
			//
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Location = System::Drawing::Point(49, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(204, 233);
			this->panel4->TabIndex = 3;
			this->panel4->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_6_click);
			//
			// panel5
			//
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(607, 341);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(296, 332);
			this->panel5->TabIndex = 12;
			this->panel5->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_7_click);
			//
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(49, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 27);
			this->label8->TabIndex = 5;
			this->label8->Text = L"RP.24.000";
			this->label8->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_7_click);
			//
			// label9
			//
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(49, 223);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(204, 78);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Kaos pria distro murah | Size M L XL XXL XXXL/Baju oblong\r\n";
			this->label9->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_7_click);
			//
			// panel6
			//
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel6->Location = System::Drawing::Point(49, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(204, 233);
			this->panel6->TabIndex = 3;
			this->panel6->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_7_click);
			//
			// panel7
			//
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(909, 341);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(296, 332);
			this->panel7->TabIndex = 12;
			this->panel7->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_8_click);
			//
			// label10
			//
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(49, 295);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 27);
			this->label10->TabIndex = 5;
			this->label10->Text = L"RP.29.900";
			this->label10->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_8_click);
			//
			// label11
			//
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(49, 223);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(204, 68);
			this->label11->TabIndex = 4;
			this->label11->Text = L"kaos murah baju pria t shirt distro astronot bulan - L";
			this->label11->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_8_click);
			//
			// panel11
			//
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel11->Location = System::Drawing::Point(49, 3);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(204, 233);
			this->panel11->TabIndex = 3;
			this->panel11->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_8_click);
			//
			// label6
			//
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(59, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 27);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Exit";
			//
			// contextMenuStrip1
			//
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			//
			// Dashboard
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1297, 780);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel8);
			this->MinimumSize = System::Drawing::Size(1315, 768);
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboad";
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->card_1->ResumeLayout(false);
			this->card_1->PerformLayout();
			this->card_2->ResumeLayout(false);
			this->card_2->PerformLayout();
			this->card_3->ResumeLayout(false);
			this->card_3->PerformLayout();
			this->card_4->ResumeLayout(false);
			this->card_4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
		}

	protected:
		void details(String^ barang)
		{
			DetailProduk^ detailForm = gcnew DetailProduk(barang);
			detailForm->ShowDialog();
		}

		System::Void panel12_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			loginForm->Show();
			this->Close();
		}

		System::Void produk_card_1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			details("1");
		}
		System::Void produk_card_2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			details("2");
		}
		System::Void produk_card_3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			details("3");
		}
		System::Void produk_card_4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			details("4");
		}
		System::Void produk_card_5_click(System::Object^ sender, System::EventArgs^ e)
		{
			details("5");
		}

		System::Void produk_card_6_click(System::Object^ sender, System::EventArgs^ e)
		{
			details("6");
		}
		System::Void produk_card_7_click(System::Object^ sender, System::EventArgs^ e)
		{
			details("7");
		}
		System::Void produk_card_8_click(System::Object^ sender, System::EventArgs^ e)
		{
			details("8");
		}
		System::Void keranjang_form(System::Object^ sender, System::EventArgs^ e)
		{
			Keranjang^ keranjangForm = gcnew Keranjang();
			keranjangForm->ShowDialog();
		}
	};
}
