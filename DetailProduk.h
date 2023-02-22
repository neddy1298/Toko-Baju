#pragma once
#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>

namespace TokoOnline {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for DetailProduk
	/// </summary>
	public ref class DetailProduk : public System::Windows::Forms::Form
	{
	public:
		DetailProduk(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:


	private: System::Windows::Forms::Label^ produk_text_1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ harga_barang;
	private: System::Windows::Forms::Label^ produk_harga_1;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->harga_barang = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->produk_harga_1 = (gcnew System::Windows::Forms::Label());
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
			this->label3->Size = System::Drawing::Size(515, 762);
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
			// harga_barang
			// 
			this->harga_barang->AutoSize = true;
			this->harga_barang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_barang->Location = System::Drawing::Point(69, 132);
			this->harga_barang->Name = L"harga_barang";
			this->harga_barang->Size = System::Drawing::Size(124, 44);
			this->harga_barang->TabIndex = 11;
			this->harga_barang->Text = L"25.000";
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->numericUpDown1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(980, 197);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(316, 310);
			this->panel3->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(12, 251);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 46);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Beli Langsung";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(298, 46);
			this->button1->TabIndex = 16;
			this->button1->Text = L"+ Keranjang";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(298, 37);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Rp.25.000";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(7, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 27);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Subtotal";
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
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(11, 61);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(150, 30);
			this->numericUpDown1->TabIndex = 13;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &DetailProduk::subtotal_barang);
			this->numericUpDown1->Click += gcnew System::EventHandler(this, &DetailProduk::numericUpDown1_ValueChanged);
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
			// DetailProduk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1308, 721);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->MinimumSize = System::Drawing::Size(1315, 768);
			this->Name = L"DetailProduk";
			this->Text = L"DetailProduk";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	int harga = std::stoi(marshal_as<std::string>(harga_barang->Text));
	int jumlah = std::stoi(marshal_as<std::string>(numericUpDown1->Text));
	int subtotal = harga * jumlah;
	std::string myString = std::to_string(subtotal);

	// Mengonversi string ke System::String^ menggunakan marshal_as<>
	String^ subTotal = marshal_as<String^>(myString);
	label7->Text = "Rp." + subTotal + ".000";

}
private: System::Void subtotal_barang(System::Object^ sender, System::EventArgs^ e) {
	

	

}
};
}
