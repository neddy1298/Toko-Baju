#pragma once

#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "FormBayar.h"

namespace TokoOnline
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CheckOut
	/// </summary>
public
	ref class CheckOut : public System::Windows::Forms::Form
	{
	public:
		CheckOut(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}
		CheckOut(String ^ data, int jumlah)
		{
			Image ^ backgroundImage = nullptr;
			String ^ nama_barang;
			double harga;

			InitializeComponent();

			if (data == "1")
			{
				nama_barang = "T-shirt pria / baju kaos samurai jepang / baju kaos warna putih";
				harga = 25000;
			}
			else if (data == "2")
			{
				nama_barang = "Horizen T-shirt CAT VERY BUSY - White Reguler, M";
				harga = 99000;
			}
			else if (data == "3")
			{
				nama_barang = "Baju Kaos Pria Lengan Pendek Kayser Time T-Shrt Distro Keren - Black yellow, M";
				harga = 49000;
			}
			else if (data == "4")
			{
				nama_barang = "Baju Kaos Pria Distro Lengan Pendek Kayser Falls Terlaris T-Shirt Kere - Hitam, L";
				harga = 42000;
			}
			namaBarang->Text = nama_barang;

			int subtotal = harga * jumlah;
			System::String ^ subTotal = System::Convert::ToString(subtotal);
			System::String ^ hargaText = System::Convert::ToString(harga);

			harga_1_barang->Text = String::Format("Rp.{0:N0}", hargaText);
			harga_barang->Text = String::Format("Rp.{0:N0}", hargaText);
			image_produk->BackgroundImage = Image::FromFile("Assets/Dashboard/baju_" + data + ".jpg");

			jumlah_barang->Text = System::Convert::ToString(jumlah) + " Baju";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CheckOut()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Panel ^ right_panel;
		System::Windows::Forms::Panel ^ left_panel;
		System::Windows::Forms::Panel ^ card_1;


		System::Windows::Forms::Label ^ harga_barang;
		System::Windows::Forms::Label ^ namaBarang;
		System::Windows::Forms::Panel ^ image_produk;
		System::Windows::Forms::Label ^ label1;
		System::Windows::Forms::Label ^ label6;
		System::Windows::Forms::Panel ^ panel4;
		System::Windows::Forms::Label ^ label17;
		System::Windows::Forms::Label ^ Total_tagihan;
		System::Windows::Forms::Label ^ label15;
		System::Windows::Forms::Label ^ label12;
		System::Windows::Forms::Label ^ label13;
		System::Windows::Forms::Label ^ label14;
		System::Windows::Forms::Label ^ label11;
		System::Windows::Forms::Label ^ ongkos_kirim;
		System::Windows::Forms::Label ^ label10;
		System::Windows::Forms::Label ^ label7;
		System::Windows::Forms::Label ^ label8;
		System::Windows::Forms::Label ^ harga_1_barang;
		System::Windows::Forms::Label ^ label4;
		System::Windows::Forms::Label ^ label3;
		System::Windows::Forms::Label ^ label2;
		System::Windows::Forms::ComboBox ^ comboBox2;
		System::Windows::Forms::ComboBox ^ comboBox1;
		System::Windows::Forms::Label ^ label19;
		System::Windows::Forms::Label ^ label18;
		System::Windows::Forms::Label ^ label5;
		System::Windows::Forms::RichTextBox ^ richTextBox1;

	private:
		System::Windows::Forms::Button ^ button2;

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		System::Windows::Forms::Label ^ label9;

	private:
		System::Windows::Forms::ComboBox ^ comboBox3;
private: System::Windows::Forms::Label^ jumlah_barang;

private: System::Windows::Forms::Label^ label20;
	   /// <summary>
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckOut::typeid));
			this->right_panel = (gcnew System::Windows::Forms::Panel());
			this->jumlah_barang = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Total_tagihan = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ongkos_kirim = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->harga_1_barang = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->left_panel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->card_1 = (gcnew System::Windows::Forms::Panel());
			this->harga_barang = (gcnew System::Windows::Forms::Label());
			this->namaBarang = (gcnew System::Windows::Forms::Label());
			this->image_produk = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->right_panel->SuspendLayout();
			this->left_panel->SuspendLayout();
			this->card_1->SuspendLayout();
			this->SuspendLayout();
			// 
			// right_panel
			// 
			this->right_panel->Controls->Add(this->jumlah_barang);
			this->right_panel->Controls->Add(this->label20);
			this->right_panel->Controls->Add(this->button2);
			this->right_panel->Controls->Add(this->label17);
			this->right_panel->Controls->Add(this->Total_tagihan);
			this->right_panel->Controls->Add(this->label15);
			this->right_panel->Controls->Add(this->label12);
			this->right_panel->Controls->Add(this->label13);
			this->right_panel->Controls->Add(this->label14);
			this->right_panel->Controls->Add(this->label11);
			this->right_panel->Controls->Add(this->ongkos_kirim);
			this->right_panel->Controls->Add(this->label10);
			this->right_panel->Controls->Add(this->label7);
			this->right_panel->Controls->Add(this->label8);
			this->right_panel->Controls->Add(this->harga_1_barang);
			this->right_panel->Controls->Add(this->label4);
			this->right_panel->Controls->Add(this->label3);
			this->right_panel->Controls->Add(this->label2);
			this->right_panel->Dock = System::Windows::Forms::DockStyle::Right;
			this->right_panel->Location = System::Drawing::Point(843, 0);
			this->right_panel->Name = L"right_panel";
			this->right_panel->Size = System::Drawing::Size(378, 696);
			this->right_panel->TabIndex = 3;
			this->right_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CheckOut::right_panel_Paint);
			// 
			// jumlah_barang
			// 
			this->jumlah_barang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->jumlah_barang->Location = System::Drawing::Point(251, 241);
			this->jumlah_barang->Name = L"jumlah_barang";
			this->jumlah_barang->Size = System::Drawing::Size(103, 22);
			this->jumlah_barang->TabIndex = 17;
			this->jumlah_barang->Text = L"0";
			this->jumlah_barang->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(40, 241);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 22);
			this->label20->TabIndex = 16;
			this->label20->Text = L"Total Barang";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(48, 535);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(306, 55);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Bayar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CheckOut::button2_Click);
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(251, 355);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(103, 22);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Rp.1.000";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Total_tagihan
			// 
			this->Total_tagihan->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Total_tagihan->Location = System::Drawing::Point(247, 494);
			this->Total_tagihan->Name = L"Total_tagihan";
			this->Total_tagihan->Size = System::Drawing::Size(107, 22);
			this->Total_tagihan->TabIndex = 13;
			this->Total_tagihan->Text = L"Rp. 5.000";
			this->Total_tagihan->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(43, 490);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(129, 27);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Total Tagihan";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(247, 443);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 22);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Rp. 1.000";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(43, 443);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 22);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Biaya Jasa Aplikasi";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(43, 396);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(125, 27);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Total Belanja";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(43, 355);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(158, 22);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Asuransi Pengiriman";
			// 
			// ongkos_kirim
			// 
			this->ongkos_kirim->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ongkos_kirim->Location = System::Drawing::Point(251, 314);
			this->ongkos_kirim->Name = L"ongkos_kirim";
			this->ongkos_kirim->Size = System::Drawing::Size(103, 22);
			this->ongkos_kirim->TabIndex = 7;
			this->ongkos_kirim->Text = L"0000";
			this->ongkos_kirim->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(43, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(149, 22);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Total Ongkos Kirim";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(248, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 22);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Rp.3.000";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(43, 274);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(165, 22);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Total Proteksi Produk";
			// 
			// harga_1_barang
			// 
			this->harga_1_barang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->harga_1_barang->Location = System::Drawing::Point(251, 202);
			this->harga_1_barang->Name = L"harga_1_barang";
			this->harga_1_barang->Size = System::Drawing::Size(103, 22);
			this->harga_1_barang->TabIndex = 3;
			this->harga_1_barang->Text = L"0000";
			this->harga_1_barang->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(43, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 22);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Total Harga (1 Barang)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 27);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Total Belanja";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 27);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ringkasan Belanja";
			// 
			// left_panel
			// 
			this->left_panel->Controls->Add(this->label9);
			this->left_panel->Controls->Add(this->comboBox3);
			this->left_panel->Controls->Add(this->comboBox2);
			this->left_panel->Controls->Add(this->comboBox1);
			this->left_panel->Controls->Add(this->label19);
			this->left_panel->Controls->Add(this->label18);
			this->left_panel->Controls->Add(this->label5);
			this->left_panel->Controls->Add(this->richTextBox1);
			this->left_panel->Controls->Add(this->label6);
			this->left_panel->Controls->Add(this->panel4);
			this->left_panel->Controls->Add(this->card_1);
			this->left_panel->Controls->Add(this->label1);
			this->left_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->left_panel->Location = System::Drawing::Point(0, 0);
			this->left_panel->Name = L"left_panel";
			this->left_panel->Size = System::Drawing::Size(842, 696);
			this->left_panel->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(473, 578);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(189, 37);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Metode Bayar";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Indomaret", L"Alfamaret", L"Virtual Account",
					L"Bayar Ditempat (COD)"
			});
			this->comboBox3->Location = System::Drawing::Point(473, 628);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(273, 35);
			this->comboBox3->TabIndex = 19;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"SiCepat Reg (Rp.14.000)", L"J&T (Rp. 8.000)",
					L"Lion Parcel (Rp. 9.000)"
			});
			this->comboBox2->Location = System::Drawing::Point(473, 517);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(273, 30);
			this->comboBox2->TabIndex = 18;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &CheckOut::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Reguler", L"Instan" });
			this->comboBox1->Location = System::Drawing::Point(63, 517);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(273, 30);
			this->comboBox1->TabIndex = 18;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(473, 461);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(135, 37);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Pilih Kurir";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(63, 461);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(215, 37);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Pilih Pengiriman";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(63, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(250, 37);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Alamat Pengiriman";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(63, 382);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(758, 50);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(80, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 37);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Kembali";
			this->label6->Click += gcnew System::EventHandler(this, &CheckOut::CloseForm);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Location = System::Drawing::Point(18, 33);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(56, 51);
			this->panel4->TabIndex = 15;
			this->panel4->Click += gcnew System::EventHandler(this, &CheckOut::CloseForm);
			// 
			// card_1
			// 
			this->card_1->Controls->Add(this->harga_barang);
			this->card_1->Controls->Add(this->namaBarang);
			this->card_1->Controls->Add(this->image_produk);
			this->card_1->Location = System::Drawing::Point(54, 155);
			this->card_1->Name = L"card_1";
			this->card_1->Size = System::Drawing::Size(774, 133);
			this->card_1->TabIndex = 1;
			// 
			// harga_barang
			// 
			this->harga_barang->AutoSize = true;
			this->harga_barang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_barang->Location = System::Drawing::Point(159, 86);
			this->harga_barang->Name = L"harga_barang";
			this->harga_barang->Size = System::Drawing::Size(77, 27);
			this->harga_barang->TabIndex = 13;
			this->harga_barang->Text = L"20.000";
			// 
			// namaBarang
			// 
			this->namaBarang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namaBarang->Location = System::Drawing::Point(157, 19);
			this->namaBarang->Name = L"namaBarang";
			this->namaBarang->Size = System::Drawing::Size(601, 58);
			this->namaBarang->TabIndex = 2;
			this->namaBarang->Text = L"nama_barang";
			// 
			// image_produk
			// 
			this->image_produk->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->image_produk->Location = System::Drawing::Point(33, 16);
			this->image_produk->Name = L"image_produk";
			this->image_produk->Size = System::Drawing::Size(109, 99);
			this->image_produk->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kategori";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// CheckOut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 696);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->right_panel);
			this->Controls->Add(this->left_panel);
			this->Name = L"CheckOut";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CheckOut";
			this->Load += gcnew System::EventHandler(this, &CheckOut::CheckOut_Load);
			this->right_panel->ResumeLayout(false);
			this->right_panel->PerformLayout();
			this->left_panel->ResumeLayout(false);
			this->left_panel->PerformLayout();
			this->card_1->ResumeLayout(false);
			this->card_1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	protected:
		void priceChange()
		{
			String ^ ongkosCleaned = ongkos_kirim->Text->Replace("Rp.", "")->Replace(".", "");
			String ^ jumlahCleaned = jumlah_barang->Text;
			String ^ hargaCleaned = harga_1_barang->Text->Replace("Rp.", "")->Replace(".", "");

			int ongkosKirim = System::Convert::ToInt64(ongkosCleaned);
			int jumlahBarang = System::Convert::ToInt64(jumlahCleaned);
			int harga = System::Convert::ToInt64(hargaCleaned);

			int subtotal = (jumlahBarang * harga) + ongkosKirim + 5000;

			Total_tagihan->Text = String::Format("Rp.{0:N0}", subtotal);
		}

	private:
		System::Void CloseForm(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Close();
		}
		System::Void comboBox2_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (comboBox2->Text == "SiCepat Reg (Rp.14.000)")
			{
				ongkos_kirim->Text = "Rp.14.000";
			}
			else if (comboBox2->Text == "J&T (Rp. 8.000)")
			{
				ongkos_kirim->Text = "Rp.8.000";
			}
			else if (comboBox2->Text == "Lion Parcel (Rp. 9.000)")
			{
				ongkos_kirim->Text = "Rp.9.000";
			}
			priceChange();
		}

		System::Void right_panel_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e)
		{
		}

	private:
		System::Void CheckOut_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
			priceChange();
		}

	private:
		System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			String^ finalBayar = Total_tagihan->Text;
			FormBayar ^ BayarForm = gcnew FormBayar(finalBayar);
			// valueToSend->Tag = valueToSend;
			BayarForm->ShowDialog();
			this->Close();
		}
	};
}
