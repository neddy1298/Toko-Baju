#pragma once
#include "Dashboard.h"

namespace TokoOnline
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public
	ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		Form^ loginForm;
		RegisterForm(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}
		RegisterForm(Form^ registerForm)
		{
			loginForm = registerForm;
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ label1;

	protected:
	private:
		System::Windows::Forms::TextBox^ email;

	private:
		System::Windows::Forms::Button^ daftar;

	private:
	private:
		System::Windows::Forms::Panel^ panel1;

	private:
		System::Windows::Forms::Panel^ panel10;

	private:
		System::Windows::Forms::Panel^ panel7;

	private:
		System::Windows::Forms::Panel^ panel2;

	private:
		System::Windows::Forms::Label^ label3;

	private:
		System::Windows::Forms::Label^ label2;

	private:
		System::Windows::Forms::Panel^ panel3;

	private:
		System::Windows::Forms::Panel^ panel8;

	private:
		System::Windows::Forms::TextBox^ password;

	private:
		System::Windows::Forms::Panel^ panel6;

	private:
		System::Windows::Forms::Panel^ panel9;

	private:
		System::Windows::Forms::Panel^ panel11;

	private:
		System::Windows::Forms::TextBox^ name;

	private:
		System::Windows::Forms::Panel^ panel12;

	private:
		System::Windows::Forms::Panel^ panel4;

	private:
		System::Windows::Forms::Panel^ panel5;

	private:
		System::Windows::Forms::Label^ label4;

	private:
		System::Windows::Forms::CheckBox^ checkBox1;

	protected:
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->daftar = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Daftar";
			this->label1->Click += gcnew System::EventHandler(this, &RegisterForm::other_Click);
			//
			// email
			//
			this->email->BackColor = System::Drawing::Color::White;
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::Black;
			this->email->Location = System::Drawing::Point(70, 13);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(360, 27);
			this->email->TabIndex = 2;
			this->email->Text = L"Email";
			this->email->Click += gcnew System::EventHandler(this, &RegisterForm::email_Click);
			//
			// daftar
			//
			this->daftar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->daftar->FlatAppearance->BorderSize = 0;
			this->daftar->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->daftar->ForeColor = System::Drawing::Color::White;
			this->daftar->Location = System::Drawing::Point(33, 414);
			this->daftar->Name = L"daftar";
			this->daftar->Size = System::Drawing::Size(433, 44);
			this->daftar->TabIndex = 4;
			this->daftar->Text = L"Daftar";
			this->daftar->UseVisualStyleBackColor = false;
			this->daftar->Click += gcnew System::EventHandler(this, &RegisterForm::daftar_Click);
			//
			// panel1
			//
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->email);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Location = System::Drawing::Point(33, 223);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(433, 61);
			this->panel1->TabIndex = 6;
			//
			// panel10
			//
			this->panel10->BackColor = System::Drawing::Color::Gray;
			this->panel10->Location = System::Drawing::Point(10, 45);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(405, 3);
			this->panel10->TabIndex = 9;
			//
			// panel7
			//
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel7->Location = System::Drawing::Point(10, 9);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(42, 32);
			this->panel7->TabIndex = 2;
			//
			// panel2
			//
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->daftar);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(439, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(492, 548);
			this->panel2->TabIndex = 0;
			this->panel2->Click += gcnew System::EventHandler(this, &RegisterForm::other_Click);
			//
			// checkBox1
			//
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(119, 372);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(275, 21);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Anda setuju dengan syarat & ketentuan.";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::checkBox1_CheckedChanged);
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label3->Location = System::Drawing::Point(403, 480);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Masuk";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(179, 479);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Sudah Memiliki Akun\?";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::other_Click);
			//
			// panel3
			//
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->password);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Location = System::Drawing::Point(33, 290);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(433, 61);
			this->panel3->TabIndex = 3;
			//
			// panel8
			//
			this->panel8->BackColor = System::Drawing::Color::Gray;
			this->panel8->Location = System::Drawing::Point(10, 47);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(405, 3);
			this->panel8->TabIndex = 8;
			//
			// password
			//
			this->password->BackColor = System::Drawing::Color::White;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::Color::Black;
			this->password->Location = System::Drawing::Point(70, 17);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(360, 27);
			this->password->TabIndex = 2;
			this->password->Text = L"Password";
			this->password->Click += gcnew System::EventHandler(this, &RegisterForm::password_Click);
			//
			// panel6
			//
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel6->Location = System::Drawing::Point(10, 9);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(42, 32);
			this->panel6->TabIndex = 1;
			//
			// label4
			//
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(434, 51);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Silakan isi formulir pendaftaran di bawah ini untuk membuat akun baru";
			this->label4->Click += gcnew System::EventHandler(this, &RegisterForm::other_Click);
			//
			// panel9
			//
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Controls->Add(this->name);
			this->panel9->Controls->Add(this->panel12);
			this->panel9->Location = System::Drawing::Point(33, 156);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(433, 61);
			this->panel9->TabIndex = 6;
			//
			// panel11
			//
			this->panel11->BackColor = System::Drawing::Color::Gray;
			this->panel11->Location = System::Drawing::Point(10, 45);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(405, 3);
			this->panel11->TabIndex = 9;
			//
			// name
			//
			this->name->BackColor = System::Drawing::Color::White;
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::Black;
			this->name->Location = System::Drawing::Point(70, 13);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(360, 27);
			this->name->TabIndex = 1;
			this->name->Text = L"Nama";
			this->name->Click += gcnew System::EventHandler(this, &RegisterForm::name_Click);
			//
			// panel12
			//
			this->panel12->BackColor = System::Drawing::Color::Transparent;
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel12->Location = System::Drawing::Point(10, 9);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(42, 32);
			this->panel12->TabIndex = 2;
			//
			// panel4
			//
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(931, 548);
			this->panel4->TabIndex = 0;
			this->panel4->Click += gcnew System::EventHandler(this, &RegisterForm::other_Click);
			//
			// panel5
			//
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Location = System::Drawing::Point(12, 54);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(406, 394);
			this->panel5->TabIndex = 0;
			this->panel5->Click += gcnew System::EventHandler(this, &RegisterForm::other_Click);
			//
			// RegisterForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 548);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->MinimumSize = System::Drawing::Size(949, 559);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Click += gcnew System::EventHandler(this, &RegisterForm::other_Click);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
		}

	private:
		System::Void daftar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (name->Text != "" && email->Text != "" && password->Text != "")
			{
				this->Hide();
				Dashboard^ dashboardForm = gcnew Dashboard(this);
				dashboardForm->ShowDialog();
				// this->Close();
			}
		}

	private:
		System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			loginForm->Show();
		}

	private:
		System::Void name_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (name->Text == "Nama")
			{
				name->Text = "";
			}

			//

			if (email->Text == "")
			{
				email->Text = "Email";
			}
			if (password->Text == "")
			{
				password->Text = "Password";
			}
		}

	private:
		System::Void email_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (email->Text == "Email")
			{
				email->Text = "";
			}

			//

			if (name->Text == "")
			{
				name->Text = "Nama";
			}
			if (password->Text == "")
			{
				password->Text = "Password";
			}
		}

	private:
		System::Void password_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (password->Text == "Password")
			{
				password->Text = "";
			}

			//

			if (name->Text == "")
			{
				name->Text = "Nama";
			}
			if (email->Text == "")
			{
				email->Text = "Email";
			}
		}

	private:
		System::Void other_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (name->Text == "")
			{
				name->Text = "Nama";
			}
			if (email->Text == "")
			{
				email->Text = "Email";
			}
			if (password->Text == "")
			{
				password->Text = "Password";
			}
		}

	private:
		System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if (checkBox1->Checked)
			{
				daftar->Enabled = true;
			}
			else
			{
				daftar->Enabled = false;
			}
		}
	};
}
