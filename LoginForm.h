#pragma once
#include <Windows.h>
#include "RegisterForm.h";
#include "Dashboard.h"

#include <msclr/marshal_cppstd.h>

namespace TokoOnline
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	// using namespace System::Threading;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
public
	ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		// Thread th;
		Form ^ registerForm;
		LoginForm(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}
		LoginForm(Form ^ obj1)
		{
			registerForm = obj1;
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Panel ^ panel1;

	protected:
	private:
		System::Windows::Forms::Panel ^ panel10;

	private:
		System::Windows::Forms::TextBox ^ email;

	private:
		System::Windows::Forms::Panel ^ panel7;

	private:
		System::Windows::Forms::Label ^ label17;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::Label ^ label5;

	private:
		System::Windows::Forms::Label ^ label6;

	private:
		System::Windows::Forms::Panel ^ panel2;

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		System::Windows::Forms::Label ^ label4;

	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::Panel ^ panel5;

	private:
		System::Windows::Forms::Panel ^ panel4;

	private:
		System::Windows::Forms::Panel ^ panel3;

	private:
		System::Windows::Forms::Panel ^ panel8;

	private:
		System::Windows::Forms::TextBox ^ password;

	private:
		System::Windows::Forms::Panel ^ panel6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->email);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Location = System::Drawing::Point(33, 209);
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
			this->email->TabIndex = 1;
			this->email->Text = L"Email";
			this->email->Click += gcnew System::EventHandler(this, &LoginForm::email_Click);
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
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(188, 430);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(142, 19);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Belum Memiliki Akun\?";
			this->label17->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label3->Location = System::Drawing::Point(416, 430);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Daftar";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::daftar_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(71, 483);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(356, 19);
			this->label5->TabIndex = 0;
			this->label5->Text = L"__________________________ Atau __________________________\r\n";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(188, 529);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Lanjutkan tanpa log in";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(439, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(492, 590);
			this->panel2->TabIndex = 0;
			this->panel2->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(33, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(430, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Masuk";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::login_click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(434, 51);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Silakan masukkan username dan password Anda untuk melanjutkan.";
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Masuk";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->password);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Location = System::Drawing::Point(33, 276);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(433, 61);
			this->panel3->TabIndex = 7;
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
			this->password->Click += gcnew System::EventHandler(this, &LoginForm::password_Click);
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
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Location = System::Drawing::Point(12, 92);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(406, 397);
			this->panel5->TabIndex = 0;
			this->panel5->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
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
			this->panel4->Size = System::Drawing::Size(439, 590);
			this->panel4->TabIndex = 0;
			this->panel4->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(931, 590);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->MaximumSize = System::Drawing::Size(949, 637);
			this->MinimumSize = System::Drawing::Size(949, 637);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Click += gcnew System::EventHandler(this, &LoginForm::other_Click);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}

	private:
		System::Void login_click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (email->Text == "Email" && password->Text == "Password")
			{
				this->Hide();
				Dashboard ^ dashboardForm = gcnew Dashboard(this);
				dashboardForm->ShowDialog();
			}
			else
			{
				
				MessageBox::Show("Email Atau Password Salah", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);

				
			}
		}

	private:
		System::Void daftar_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Hide();
			RegisterForm ^ registerForm = gcnew RegisterForm(this);
			registerForm->ShowDialog();
		}

	private:
		System::Void email_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (email->Text == "Email")
			{
				email->Text = "";
			}

			//

			if (password->Text == "")
			{
				password->Text = "Password";
			}
		}

	private:
		System::Void password_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (password->Text == "Password")
			{
				password->Text = "";
			}

			//

			if (email->Text == "")
			{
				email->Text = "Email";
			}
		}

	private:
		System::Void other_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (email->Text == "")
			{
				email->Text = "Email";
			}
			if (password->Text == "")
			{
				password->Text = "Password";
			}
		}
	};
}
