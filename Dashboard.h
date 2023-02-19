#pragma once

namespace TokoOnline {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Form^ loginForm;
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Dashboard(Form^ dashboardForm)
		{
			loginForm = dashboardForm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nama_barang;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ harga;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stok;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ keterangan;
	private: System::Windows::Forms::DataGridViewButtonColumn^ action;





















	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nama_barang = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->harga = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stok = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->keterangan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->action = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(271, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TOKO HARAPAN JAYA";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(764, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id, this->nama_barang,
					this->harga, this->stok, this->keterangan, this->action
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 113);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->Size = System::Drawing::Size(832, 321);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::dataGridView1_CellContentClick);
			// 
			// id
			// 
			this->id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->id->HeaderText = L"No";
			this->id->MinimumWidth = 6;
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 55;
			// 
			// nama_barang
			// 
			this->nama_barang->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->nama_barang->HeaderText = L"Barang";
			this->nama_barang->MinimumWidth = 6;
			this->nama_barang->Name = L"nama_barang";
			this->nama_barang->Width = 83;
			// 
			// harga
			// 
			this->harga->HeaderText = L"Harga Satuan";
			this->harga->MinimumWidth = 6;
			this->harga->Name = L"harga";
			this->harga->Width = 125;
			// 
			// stok
			// 
			this->stok->HeaderText = L"Stok Tersedia";
			this->stok->MinimumWidth = 6;
			this->stok->Name = L"stok";
			this->stok->Width = 125;
			// 
			// keterangan
			// 
			this->keterangan->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->keterangan->HeaderText = L"Keterangan";
			this->keterangan->MinimumWidth = 6;
			this->keterangan->Name = L"keterangan";
			// 
			// action
			// 
			this->action->DividerWidth = 2;
			this->action->HeaderText = L"";
			this->action->MinimumWidth = 6;
			this->action->Name = L"action";
			this->action->Text = L"Keranjang";
			this->action->ToolTipText = L"Keranjang";
			this->action->UseColumnTextForButtonValue = true;
			this->action->Width = 125;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 455);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			loginForm->Show();
			//LoginForm^ loginForm = gcnew LoginForm();
			//Application::Run(loginForm);

		}
		private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
			
		}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
