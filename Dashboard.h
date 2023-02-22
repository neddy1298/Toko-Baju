#pragma once
#include "DetailProduk.h"

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










		System::Windows::Forms::Panel ^ panel8;
		System::Windows::Forms::TextBox ^ search;
		System::Windows::Forms::Panel ^ panel9;

		System::Windows::Forms::Panel ^ panel10;
		System::Windows::Forms::Panel ^ panel12;
		System::Windows::Forms::FlowLayoutPanel ^ flowLayoutPanel1;




		/// <summary>
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel13;

























































































































































































































































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
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->search = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel8->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HARAPAN JAYA";
			this->label1->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->panel11);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(this->search);
			this->panel8->Controls->Add(this->label1);
			this->panel8->Controls->Add(this->panel15);
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1297, 76);
			this->panel8->TabIndex = 3;
			this->panel8->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel12
			// 
			this->panel12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel12->Location = System::Drawing::Point(6, 10);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(47, 40);
			this->panel12->TabIndex = 2;
			this->panel12->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel10
			// 
			this->panel10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel10->Location = System::Drawing::Point(6, 13);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(41, 34);
			this->panel10->TabIndex = 2;
			this->panel10->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			// 
			// panel9
			// 
			this->panel9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel9->Location = System::Drawing::Point(300, 20);
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
			this->search->Location = System::Drawing::Point(347, 20);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(660, 34);
			this->search->TabIndex = 1;
			this->search->Text = L"Cari barang yang Kamu butuhkan disini\r\n";
			this->search->Click += gcnew System::EventHandler(this, &Dashboard::search_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel7);
			this->flowLayoutPanel1->Location = System::Drawing::Point(40, 249);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1219, 460);
			this->flowLayoutPanel1->TabIndex = 4;
			this->flowLayoutPanel1->TabStop = true;
			// 
			// panel15
			// 
			this->panel15->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel15->Controls->Add(this->label5);
			this->panel15->Controls->Add(this->panel10);
			this->panel15->Location = System::Drawing::Point(1013, 7);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(119, 61);
			this->panel15->TabIndex = 3;
			// 
			// panel11
			// 
			this->panel11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->panel11->Controls->Add(this->label6);
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Location = System::Drawing::Point(1138, 7);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(119, 61);
			this->panel11->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(53, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 27);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Chart";
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
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(296, 312);
			this->panel1->TabIndex = 6;
			this->panel1->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 27);
			this->label3->TabIndex = 5;
			this->label3->Text = L"RP 125.000";
			this->label3->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(49, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(204, 48);
			this->label4->TabIndex = 4;
			this->label4->Text = L"T-shirt pria / baju kaos samurai jepang / baju kaos warna putih";
			this->label4->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Location = System::Drawing::Point(49, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(204, 213);
			this->panel2->TabIndex = 3;
			this->panel2->Click += gcnew System::EventHandler(this, &Dashboard::produk_card_1_Click);
			// 
			// panel14
			// 
			this->panel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel14->Controls->Add(this->comboBox1);
			this->panel14->Location = System::Drawing::Point(40, 194);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1219, 49);
			this->panel14->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Paling Sesuai", L"Ulasan", L"Terbaru", L"Harga Tertinggi",
					L"Harga Terendah"
			});
			this->comboBox1->Location = System::Drawing::Point(940, 9);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(263, 30);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Urutkan:";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::comboBox1_SelectedIndexChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel3->Location = System::Drawing::Point(305, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(296, 312);
			this->panel3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 27);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Rp 99.000";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(49, 223);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(204, 48);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Horizen T-shirt CAT VERY BUSY - White Reguler, M";
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Location = System::Drawing::Point(49, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(204, 213);
			this->panel4->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(607, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(296, 312);
			this->panel5->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(49, 271);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 27);
			this->label8->TabIndex = 5;
			this->label8->Text = L"RP.49.500";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(49, 223);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(204, 48);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Baju Kaos Pria Lengan Pendek Kayser Time T-Shrt Distro Keren - Black yellow, M";
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel6->Location = System::Drawing::Point(49, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(204, 213);
			this->panel6->TabIndex = 3;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->panel16);
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(909, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(296, 312);
			this->panel7->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(49, 271);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 27);
			this->label10->TabIndex = 5;
			this->label10->Text = L"RP.25.000";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(49, 223);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(204, 48);
			this->label11->TabIndex = 4;
			this->label11->Text = L"T-shirt pria / baju kaos samurai jepang / baju kaos warna putih";
			// 
			// panel16
			// 
			this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel16.BackgroundImage")));
			this->panel16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel16->Location = System::Drawing::Point(49, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(204, 213);
			this->panel16->TabIndex = 3;
			// 
			// panel13
			// 
			this->panel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel13->AutoSize = true;
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel13->Location = System::Drawing::Point(40, 91);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(1219, 97);
			this->panel13->TabIndex = 0;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1297, 721);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel8);
			this->MinimumSize = System::Drawing::Size(1315, 768);
			this->Name = L"Dashboard";
			this->Text = L"---";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->Click += gcnew System::EventHandler(this, &Dashboard::other_Click);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
private: System::Void produk_card_1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	DetailProduk^ dashboardForm = gcnew DetailProduk();
	dashboardForm->ShowDialog();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
