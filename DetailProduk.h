#pragma once
#include <string>
#include <iostream>
#include "CheckOut.h"

namespace TokoOnline
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DetailProduk
	/// </summary>
	public
	ref class DetailProduk : public System::Windows::Forms::Form
	{
	public:
		Form^ dashboardForm;
		DetailProduk(void)
		{
			InitializeComponent();

			//
			// TODO: Add the constructor code here
			//
		}

		DetailProduk(String^ data)
		{
			Image^ backgroundImage = nullptr;
			String^ nama_barang;
			String^ harga;
			String^ deskripsi;

			InitializeComponent();

			if (data == "1")
			{
				nama_barang = "T-shirt pria / baju kaos samurai jepang / baju kaos";
				harga = "25.000";
				deskripsi = "Kondisi: Baru \n\
					Berat Satuan : 200 g \n\
					Kategori : Kaos Pria \n\
					Etalase : kaos jepang \n\
					\n \
					MOTIF TREND MASA KINI, COCOK DIPAKAI OLEH WANITA MAUPUN PRIA \n \
					\n \
					BAHAN 100 % ASLI CATOON COMBAD 30S, adem, menyerap keringat dan tidak luntur. \n \
					Cotton Combed 30s yaitu tipe atau jenis katun(cotton) yang sangat halus, yang mana pada teknik pembuatannya serat katun diolah dengan diputar di mesin pemintal dan disisir untuk membuang biji kapas nya sehingga kain menjadi sangat halus, karena itulah Bahan Kaos Cotton combed juga tampak lebih rata. \n \
					\n \
					SABLON RUBER : \n \
					Rubber juga merupakan salah satu jenis sablon yang menjadi favorit.Rubber adalah sablon yang berbahan dasar karet, yang mempunyai kelebihan pada tingkat elastisitas dan kerapatan yang tinggi, selain itu juga bahannya fleksibel, cenderung awet dan bisa disetrika. \n \
					\n \
					Ukuran L(panjang 72cm lebar 52cm)& \n \
					Ukuran XL(panjang 73cm lebar 53cm), bisa dipakai sampai berat 75kg \n \
					\n \
					WARNA DAN MOTIF SESUI FOTO YANG DIPOSTING DI TOKO \n \
					\n \
					WARNA DI FOTO DAN ASLINYA MIRIP 98 % KARENA DIPENGARUHI CAHAYA SAAT PENGAMBILAN GAMBAR \n \
					\n \
					jika ada hal yang ingin ditanyakan, silahkan chat admin karena admin akan menjawab semua pertanyaan costumer.TERIMA KASIH..HAPPY SHOPING \n \
					\n \
					";
			}
			else if (data == "2")
			{
				nama_barang = "Horizen T-shirt CAT VERY BUSY";
				harga = "99.000";
				deskripsi = "Kondisi: Baru\n \
					Berat Satuan : 200 g\n \
					Kategori : Kaos Pria\n \
					Etalase : Cat Collection\n \
					Bahan : 100 % Cotton 24s\n \
					Sablon DTF\n \
					\n \
					Size Chart : Lebar x Panjang\n \
					\n \
					OVERSIZE\n \
					Size M : 55, 5 cm x 69 cm\n \
					Size L : 58, 5 cm x 72 cm\n \
					Size XL : 62, 5 cm x 75 cm\n \
					\n \
					REGULER FIT\n \
					Size M : 52 cm x 68 cm\n \
					Size L : 55 cm x 71 cm\n \
					Size XL : 59 cm x 74 cm";
			}
			else if (data == "3")
			{
				nama_barang = "Baju Kaos Pria Lengan Pendek Kayser Time T-Shrt Distro Keren";
				harga = "49.500";
				deskripsi = "Kondisi: Baru \n \
					Berat Satuan : 350 g \n \
					Kategori : Kaos Pria \n \
					Etalase : Kaos Lengan Pendek Pria \n \
					Feel the comfort, Kayser T - shirt terbuat dari bahan Premium combed kualitas terbaik yang sejuk dan lembut.nyaman dipakai, design Exclusive, Simple& Fashionable. \n \
					\n \
					>> DETAIL : \n \
					Bahan Babyterry, Kualitas Bahan sedang. \n \
					- Motif Sablon premium dengan heat press sistem bukan manual(tangan)\n \
					- Leher manset dan tangan manset menggunakan RIB Good Quality.\n \
					- Lengan Pendek.\n \
					\n \
					DETAIL SIZE :\n \
					-SIZE M - L : Lingkar Dada 104CM x Panjang baju 68CM\n \
					Lebar Baju 52CM\n \
					\n \
					- SIZE XL : Lingkar Dada 107CM x Panjang baju 70CM\n \
					Lebar Baju 54CM\n \
					\n \
					- Size XXL : Lingkar Dada 114CM x Panjang 72CM\n \
					Lebar Baju 57CM\n \
					\n \
					Leher manset dan tangan manset menggunakan RIB Good Quality\n \
					Nyaman di pakai\n \
					Tidak Pudar(Tajam) & Tahan Lama dan tidak mudah Melar\n \
					Sisi jahitan, Samping + bawah sangat rapih.\n \
					\n \
					mengutamakan quality control sebelum pengiriman\n \
					- Pengiriman 100 % AMAN";
			}
			else if (data == "4")
			{
				nama_barang = "Baju Kaos Pria Distro Lengan Pendek Kayser Falls Terlaris T-Shirt Kere";
				harga = "42.900";
				deskripsi = "Kondisi: Baru\n \
					Berat Satuan : 300 g\n \
					Kategori : Kaos Pria\n \
					Etalase : Kaos Lengan Pendek Pria\n \
					Feel the comfort, Kayser T - shirt terbuat dari bahan Premium combed kualitas terbaik yang sejuk dan lembut.nyaman dipakai, design Exclusive, Simple& Fashionable.\n \
					\n \
					DETAIL :\n \
					Bahan Babyterry, Kualitas Bahan sedang.\n \
					- Motif Sablon premium dengan heat press sistem bukan manual(tangan)\n \
					- Leher manset dan tangan manset menggunakan RIB Good Quality.\n \
					- Lengan Pendek.\n \
					- Ada Kantong pada bagian depan..\n \
					\n \
					DETAIL SIZE :\n \
					-SIZE M - L : Lingkar Dada 104CM x Panjang baju 68CM\n \
					Lebar Dada 52CM\n \
					\n \
					- SIZE XL : Lingkar Dada 106CM x Panjang baju 70CM\n \
					Lebar Dada 54CM\n \
					\n \
					Leher manset dan tangan manset menggunakan RIB Good Quality\n \
					Nyaman di pakai\n \
					Tidak Pudar(Tajam) & Tahan Lama dan tidak mudah Melar\n \
					Sisi jahitan, Samping + bawah sangat rapih.\n \
					\n \
					mengutamakan quality control sebelum pengiriman\n \
					- Pengiriman 100 % AMAN";
			}
			else if (data == "5")
			{
				nama_barang = "Baju Kaos Pria Lengan Pendek Atasan Cowok Tshirt Taurus Fashion Distro";
				harga = "49.000";
				deskripsi = "Kondisi: Baru\n \
					Berat Satuan : 300 g\n \
					Kategori : Kaos Pria\n \
					Etalase : Kaos Pria\n \
					KETERANGAN : \n \n \
				Bahan : babyterry \n \
				Ukuran XS : ld 88cm pj 59cm \n \
				Ukuran S / M : ld 94cm pj 60cm \n \
				Ukuran L : ld 104cm pj 68cm \n \
				Ukuran XL : ld 110cm pj 70cm \n \
				Ukuran XXL : ld 120cm pj 78cm\n \
				\n \
				Motif sablon, goodquality\n \
				Tersedia 11 warna";
			}
			else if (data == "6")
			{
				nama_barang = "Baju Kaos Pria Lengan Pendek Atasan Cowok Tshirt Fashion Distro";
				harga = "69.000";
				deskripsi = "Kondisi: Baru\n \
					Berat Satuan : 300 g\n \
					Kategori : Kaos Pria\n \
					Etalase : Kaos Pria\n \
					KETERANGAN : \n \n \
				Bahan : babyterry \n \
				Ukuran XS : ld 88cm pj 59cm \n \
				Ukuran S / M : ld 94cm pj 60cm \n \
				Ukuran L : ld 104cm pj 68cm \n \
				Ukuran XL : ld 110cm pj 70cm \n \
				Ukuran XXL : ld 120cm pj 78cm\n \
				\n \
				Motif sablon, goodquality\n \
				Tersedia 11 warna";
			}
			else if (data == "7")
			{
				nama_barang = "Baju Kaos Pria Lengan Pendek Atasan Cowok Tshirt Fashion Distro";
				harga = "99.000";
				deskripsi = "Kondisi: Baru\n \
					Berat Satuan : 300 g\n \
					Kategori : Kaos Pria\n \
					Etalase : Kaos Pria\n \
					KETERANGAN : \n \n \
				Bahan : babyterry \n \
				Ukuran XS : ld 88cm pj 59cm \n \
				Ukuran S / M : ld 94cm pj 60cm \n \
				Ukuran L : ld 104cm pj 68cm \n \
				Ukuran XL : ld 110cm pj 70cm \n \
				Ukuran XXL : ld 120cm pj 78cm\n \
				\n \
				Motif sablon, goodquality\n \
				Tersedia 11 warna";
			}
			else if (data == "8")
			{
				nama_barang = "Baju Kaos Pria Lengan Pendek Atasan Cowok Tshirt Fashion Distro";
				harga = "42.000";
				deskripsi = "Kondisi: Baru\n \
					Berat Satuan : 300 g\n \
					Kategori : Kaos Pria\n \
					Etalase : Kaos Pria\n \
					KETERANGAN : \n \n \
				Bahan : babyterry \n \
				Ukuran XS : ld 88cm pj 59cm \n \
				Ukuran S / M : ld 94cm pj 60cm \n \
				Ukuran L : ld 104cm pj 68cm \n \
				Ukuran XL : ld 110cm pj 70cm \n \
				Ukuran XXL : ld 120cm pj 78cm\n \
				\n \
				Motif sablon, goodquality\n \
				Tersedia 11 warna";
			}
			produk_text_1->Text = nama_barang;
			harga_barang->Text = harga;
			label3->Text = deskripsi;
			panel1->BackgroundImage = Image::FromFile("Assets/Dashboard/baju_" + data + ".jpg");
			produk_id->Text = data;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DetailProduk()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ produk_text_1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Label^ label2;



		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::NumericUpDown^ numericUpDown1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Label^ harga_barang;
		System::Windows::Forms::Label^ produk_harga_1;
		System::Windows::Forms::Panel^ panel4;
		System::Windows::Forms::Label^ label6;

	private:
		System::Windows::Forms::Label^ produk_id;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::ComboBox^ size;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DetailProduk::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->produk_text_1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->produk_harga_1 = (gcnew System::Windows::Forms::Label());
			this->harga_barang = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->size = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->produk_id = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Location = System::Drawing::Point(12, 105);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(410, 495);
			this->panel1->TabIndex = 0;
			// 
			// produk_text_1
			// 
			this->produk_text_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->produk_text_1->Location = System::Drawing::Point(3, 0);
			this->produk_text_1->Name = L"produk_text_1";
			this->produk_text_1->Size = System::Drawing::Size(498, 103);
			this->produk_text_1->TabIndex = 6;
			this->produk_text_1->Text = L"Chocolatos Box Chocolate & Vanilla - Wafer Stick";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 27);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Terjual 250+";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(515, 912);
			this->label3->TabIndex = 10;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->produk_harga_1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->produk_text_1);
			this->panel2->Controls->Add(this->harga_barang);
			this->panel2->Location = System::Drawing::Point(428, 34);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(546, 675);
			this->panel2->TabIndex = 11;
			// 
			// produk_harga_1
			// 
			this->produk_harga_1->AutoSize = true;
			this->produk_harga_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 19.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->produk_harga_1->Location = System::Drawing::Point(3, 132);
			this->produk_harga_1->Name = L"produk_harga_1";
			this->produk_harga_1->Size = System::Drawing::Size(71, 44);
			this->produk_harga_1->TabIndex = 7;
			this->produk_harga_1->Text = L"RP.";
			// 
			// harga_barang
			// 
			this->harga_barang->AutoSize = true;
			this->harga_barang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_barang->Location = System::Drawing::Point(69, 132);
			this->harga_barang->Name = L"harga_barang";
			this->harga_barang->Size = System::Drawing::Size(124, 44);
			this->harga_barang->TabIndex = 11;
			this->harga_barang->Text = L"20.000";
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->size);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->numericUpDown1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(980, 179);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(316, 281);
			this->panel3->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(13, 120);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 27);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Size:";
			// 
			// size
			// 
			this->size->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F));
			this->size->FormattingEnabled = true;
			this->size->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"L", L"XL", L"XXL" });
			this->size->Location = System::Drawing::Point(99, 117);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(209, 30);
			this->size->TabIndex = 18;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(11, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 46);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Beli Sekarang";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DetailProduk::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(167, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 22);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Stok: 99,9 rb";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::White;
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(11, 61);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(150, 30);
			this->numericUpDown1->TabIndex = 13;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &DetailProduk::subtotal_barang);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 44);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Atur Jumlah";
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->Location = System::Drawing::Point(12, 34);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(56, 51);
			this->panel4->TabIndex = 13;
			this->panel4->Click += gcnew System::EventHandler(this, &DetailProduk::kembali);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(74, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 37);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Kembali";
			this->label6->Click += gcnew System::EventHandler(this, &DetailProduk::kembali);
			// 
			// produk_id
			// 
			this->produk_id->AutoSize = true;
			this->produk_id->Location = System::Drawing::Point(9, 704);
			this->produk_id->Name = L"produk_id";
			this->produk_id->Size = System::Drawing::Size(19, 17);
			this->produk_id->TabIndex = 14;
			this->produk_id->Text = L"id";
			this->produk_id->Visible = false;
			// 
			// DetailProduk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1308, 721);
			this->Controls->Add(this->produk_id);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->MinimumSize = System::Drawing::Size(1315, 768);
			this->Name = L"DetailProduk";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DetailProduk";
			this->Load += gcnew System::EventHandler(this, &DetailProduk::DetailProduk_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		System::Void subtotal_barang(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void DetailProduk_Load(System::Object^ sender, System::EventArgs^ e)
		{
			// Image^ backgroundImage = nullptr;

			// backgroundImage = Image::FromFile("Assets/Dashboard/baju_"+"" + ".jpg");

			// panel1->BackgroundImage = backgroundImage;
		}

		System::Void kembali(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
			// Dashboard^ dashboardForm = gcnew Dashboard();
			// valueToSend->Tag = valueToSend;
			// dashboardForm->ShowDialog();
		}

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{		
			if (numericUpDown1->Value < 1 || size->Text == "")
			{
				MessageBox::Show("Silahkan Isi data yang diperlukan", "error");
			}
			else {

				String^ barang = produk_id->Text;
				int jumlah = static_cast<int>(numericUpDown1->Value);
				CheckOut^ checkOut = gcnew CheckOut(barang, jumlah, size->Text);
				checkOut->ShowDialog();
			}

		}
};
}
