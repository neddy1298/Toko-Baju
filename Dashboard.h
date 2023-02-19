#pragma once

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

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		System::Windows::Forms::Panel ^ panel1;

	private:
	private:
	private:
	private:
	private:
	private:
	private:
	protected:
	private:
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			// panel1
			//
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 471);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1027, 89);
			this->panel1->TabIndex = 2;
			//
			// Dashboard
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1027, 560);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private:
		System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Hide();
			loginForm->Show();
			this->Close();
			// LoginForm^ loginForm = gcnew LoginForm();
			// Application::Run(loginForm);
		}
	};
}
