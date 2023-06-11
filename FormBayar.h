#pragma once

namespace TokoOnline {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormBayar
	/// </summary>
	public ref class FormBayar : public System::Windows::Forms::Form
	{
	public:
		FormBayar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FormBayar(String^ finalBayar, String^ alamat, String^ jenisPengiriman, String^ jenisKurir, String^ metodeBayar) {
			InitializeComponent();
			metode_bayar->Text = metodeBayar;
			jenis_kurir->Text = jenisKurir;
			final_harga->Text = finalBayar;
			DateTime^ dateTimeNow = DateTime::Now;
			DateTime^ dateTimeTomorrow = dateTimeNow->AddDays(1);
			tangal_bayar->Text = String::Format("{0:G}", dateTimeTomorrow);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormBayar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ final_harga;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ metode_bayar;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ tangal_bayar;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ jenis_kurir;
	private: System::Windows::Forms::Label^ label6;

	protected:

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->final_harga = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->metode_bayar = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tangal_bayar = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->jenis_kurir = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 292);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Kode Pembayaran";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 384);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Total Pembayaran";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 27);
			this->label5->TabIndex = 4;
			this->label5->Text = L"AJ081239821";
			// 
			// final_harga
			// 
			this->final_harga->AutoSize = true;
			this->final_harga->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->final_harga->Location = System::Drawing::Point(45, 434);
			this->final_harga->Name = L"final_harga";
			this->final_harga->Size = System::Drawing::Size(99, 27);
			this->final_harga->TabIndex = 5;
			this->final_harga->Text = L"Rp.80.000";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(121, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(206, 27);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Tanggal Bayar Terakhir";
			// 
			// metode_bayar
			// 
			this->metode_bayar->AutoSize = true;
			this->metode_bayar->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->metode_bayar->Location = System::Drawing::Point(332, 235);
			this->metode_bayar->Name = L"metode_bayar";
			this->metode_bayar->Size = System::Drawing::Size(97, 27);
			this->metode_bayar->TabIndex = 1;
			this->metode_bayar->Text = L"Alfamaret";
			this->metode_bayar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 509);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(387, 42);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Belanja Lagi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormBayar::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(331, 443);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Lihat Detail";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(371, 335);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Salin";
			// 
			// tangal_bayar
			// 
			this->tangal_bayar->AutoSize = true;
			this->tangal_bayar->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tangal_bayar->Location = System::Drawing::Point(121, 112);
			this->tangal_bayar->Name = L"tangal_bayar";
			this->tangal_bayar->Size = System::Drawing::Size(206, 27);
			this->tangal_bayar->TabIndex = 9;
			this->tangal_bayar->Text = L"Tanggal Bayar Terakhir";
			this->tangal_bayar->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(295, 188);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 27);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Metode Bayar";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(37, 188);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 27);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Jenis Kurir";
			// 
			// jenis_kurir
			// 
			this->jenis_kurir->AutoSize = true;
			this->jenis_kurir->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jenis_kurir->Location = System::Drawing::Point(45, 235);
			this->jenis_kurir->Name = L"jenis_kurir";
			this->jenis_kurir->Size = System::Drawing::Size(97, 27);
			this->jenis_kurir->TabIndex = 11;
			this->jenis_kurir->Text = L"Alfamaret";
			this->jenis_kurir->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(133, 572);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(296, 19);
			this->label6->TabIndex = 13;
			this->label6->Text = L"**Pastikan kamu menyimpan kode pembayaran";
			// 
			// FormBayar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 604);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->jenis_kurir);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tangal_bayar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->final_harga);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->metode_bayar);
			this->Controls->Add(this->label7);
			this->Name = L"FormBayar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormBayar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Pastikan kamu meyimpan kode pembayaran", "Peringatan!");
		this->Close();
	}
	};
}
