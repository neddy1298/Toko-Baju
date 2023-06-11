#pragma once

namespace TokoOnline {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CekPembayaran
	/// </summary>
	public ref class CekPembayaran : public System::Windows::Forms::Form
	{
	public:
		CekPembayaran(void)
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
		~CekPembayaran()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->textBox1->Location = System::Drawing::Point(48, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(360, 30);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(139, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Masukkan Kode Bayar";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(143, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Cek";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CekPembayaran::button1_Click);
			// 
			// CekPembayaran
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 279);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(480, 326);
			this->MinimumSize = System::Drawing::Size(480, 326);
			this->Name = L"CekPembayaran";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CekPembayaran";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			MessageBox::Show("Pembayaran Sudah di konfirmasi, barang akan sampai kurang lebih 3 hari dari tanggal pembayaran", "Berhasil");
		}
	};
}
