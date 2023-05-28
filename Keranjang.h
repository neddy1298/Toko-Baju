#pragma once

namespace TokoOnline
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Threading::Tasks;

	/// <summary>
	/// Summary for Keranjang
	/// </summary>
	public
	ref class Keranjang : public System::Windows::Forms::Form
	{
	public:
		int jumlah_card;
		Keranjang(void)
		{
			InitializeComponent();

			jumlah_card = 3;

			//
			// TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Keranjang()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Panel^ left_panel;
		System::Windows::Forms::Panel^ card_1;
		System::Windows::Forms::Label^ nama_barang;
		System::Windows::Forms::CheckBox^ checkBox1;
		System::Windows::Forms::Panel^ image;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Panel^ right_panel;
		System::Windows::Forms::Label^ produk_harga_1;
		System::Windows::Forms::Label^ harga_barang;
		System::Windows::Forms::Panel^ hapus;
		System::Windows::Forms::NumericUpDown^ stok;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Keranjang::typeid));
			this->left_panel = (gcnew System::Windows::Forms::Panel());
			this->card_1 = (gcnew System::Windows::Forms::Panel());
			this->hapus = (gcnew System::Windows::Forms::Panel());
			this->stok = (gcnew System::Windows::Forms::NumericUpDown());
			this->produk_harga_1 = (gcnew System::Windows::Forms::Label());
			this->harga_barang = (gcnew System::Windows::Forms::Label());
			this->nama_barang = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->image = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->right_panel = (gcnew System::Windows::Forms::Panel());
			this->left_panel->SuspendLayout();
			this->card_1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stok))->BeginInit();
			this->SuspendLayout();
			//
			// left_panel
			//
			this->left_panel->Controls->Add(this->card_1);
			this->left_panel->Controls->Add(this->label1);
			this->left_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->left_panel->Location = System::Drawing::Point(0, 0);
			this->left_panel->Name = L"left_panel";
			this->left_panel->Size = System::Drawing::Size(890, 721);
			this->left_panel->TabIndex = 0;
			//
			// card_1
			//
			this->card_1->Controls->Add(this->hapus);
			this->card_1->Controls->Add(this->stok);
			this->card_1->Controls->Add(this->produk_harga_1);
			this->card_1->Controls->Add(this->harga_barang);
			this->card_1->Controls->Add(this->nama_barang);
			this->card_1->Controls->Add(this->checkBox1);
			this->card_1->Controls->Add(this->image);
			this->card_1->Location = System::Drawing::Point(54, 155);
			this->card_1->Name = L"card_1";
			this->card_1->Size = System::Drawing::Size(790, 133);
			this->card_1->TabIndex = 1;
			//
			// hapus
			//
			this->hapus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hapus.BackgroundImage")));
			this->hapus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->hapus->Location = System::Drawing::Point(562, 87);
			this->hapus->Name = L"hapus";
			this->hapus->Size = System::Drawing::Size(36, 30);
			this->hapus->TabIndex = 15;
			this->hapus->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Keranjang::panel5_Paint);
			//
			// stok
			//
			this->stok->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->stok->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stok->Location = System::Drawing::Point(616, 87);
			this->stok->Name = L"stok";
			this->stok->Size = System::Drawing::Size(142, 30);
			this->stok->TabIndex = 14;
			this->stok->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// produk_harga_1
			//
			this->produk_harga_1->AutoSize = true;
			this->produk_harga_1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->produk_harga_1->Location = System::Drawing::Point(159, 80);
			this->produk_harga_1->Name = L"produk_harga_1";
			this->produk_harga_1->Size = System::Drawing::Size(42, 27);
			this->produk_harga_1->TabIndex = 12;
			this->produk_harga_1->Text = L"RP.";
			//
			// harga_barang
			//
			this->harga_barang->AutoSize = true;
			this->harga_barang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->harga_barang->Location = System::Drawing::Point(203, 80);
			this->harga_barang->Name = L"harga_barang";
			this->harga_barang->Size = System::Drawing::Size(77, 27);
			this->harga_barang->TabIndex = 13;
			this->harga_barang->Text = L"20.000";
			//
			// nama_barang
			//
			this->nama_barang->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->nama_barang->Location = System::Drawing::Point(157, 19);
			this->nama_barang->Name = L"nama_barang";
			this->nama_barang->Size = System::Drawing::Size(601, 58);
			this->nama_barang->TabIndex = 2;
			this->nama_barang->Text = L"nama_barang";
			//
			// checkBox1
			//
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 60);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->UseVisualStyleBackColor = true;
			//
			// image
			//
			this->image->Location = System::Drawing::Point(33, 16);
			this->image->Name = L"image";
			this->image->Size = System::Drawing::Size(109, 99);
			this->image->TabIndex = 0;
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kategori";
			//
			// right_panel
			//
			this->right_panel->Dock = System::Windows::Forms::DockStyle::Right;
			this->right_panel->Location = System::Drawing::Point(896, 0);
			this->right_panel->Name = L"right_panel";
			this->right_panel->Size = System::Drawing::Size(401, 721);
			this->right_panel->TabIndex = 1;
			//
			// Keranjang
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1297, 721);
			this->Controls->Add(this->right_panel);
			this->Controls->Add(this->left_panel);
			this->MinimumSize = System::Drawing::Size(1315, 768);
			this->Name = L"Keranjang";
			this->Text = L"Keranjang";
			this->Load += gcnew System::EventHandler(this, &Keranjang::Keranjang_Load);
			this->left_panel->ResumeLayout(false);
			this->left_panel->PerformLayout();
			this->card_1->ResumeLayout(false);
			this->card_1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stok))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
	private:
		System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
		}

	private:
		System::Void Keranjang_Load(System::Object^ sender, System::EventArgs^ e)
		{
		}
	};
}
