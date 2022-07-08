#pragma once

#include "Sql/LoginQueries.h"
#include "User.h"
#include "MainForm.h"

namespace HospitalDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	//using namespace System::Data::Odbc;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		Login login;
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			login.ConnectDB();
			login.LoginDB();
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(240, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(271, 65);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// username
			// 
			this->username->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(240, 158);
			this->username->Name = L"username";
			this->username->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->username->Size = System::Drawing::Size(271, 35);
			this->username->TabIndex = 1;
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(240, 242);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->password->Size = System::Drawing::Size(271, 35);
			this->password->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(236, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(236, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(240, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(392, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 36);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(749, 389);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"DataBase Login";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::LoginEnter);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->username->Text;
		String^ password = this->password->Text;

		MySqlCommand^ command = gcnew MySqlCommand("select * from login where username = @username and password = @password;", login.sqlConn);
		MySqlDataReader^ reader;
		try
		{
			login.sqlConn->Open();
			command->Parameters->AddWithValue("@username", username);
			command->Parameters->AddWithValue("@password", password);
			reader = command->ExecuteReader();
			int count = 0;
			while (reader->Read())
			{
				count++;
			}
			if (count == 1)
			{
				MessageBox::Show("Login Succesful: " + username, "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Hide();
				HospitalDB::MainForm MainForm;
				MainForm.ShowDialog();
			}
			else if(count > 1)
				MessageBox::Show("Login details duplicate!", "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else if(username->Length == 0 || password->Length == 0)
				MessageBox::Show("Username or password empty!", "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else
				MessageBox::Show("Login Failed!\nTry Again", "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
}
private: System::Void LoginEnter(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try
	{
		if (e->KeyChar == (char)13)
		{
			String^ username = this->username->Text;
			String^ password = this->password->Text;

			MySqlCommand^ command = gcnew MySqlCommand("select * from login where username = @username and password = @password;", login.sqlConn);
			MySqlDataReader^ reader;
			try
			{
				login.sqlConn->Open();
				command->Parameters->AddWithValue("@username", username);
				command->Parameters->AddWithValue("@password", password);
				reader = command->ExecuteReader();
				int count = 0;
				while (reader->Read())
				{
					count++;
				}
				if (count == 1)
				{
					MessageBox::Show("Login Succesful: " + username, "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
					this->Hide();
					HospitalDB::MainForm MainForm;
					MainForm.ShowDialog();
				}
				else if (count > 1)
					MessageBox::Show("Login details duplicate!", "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
				else if (username->Length == 0 || password->Length == 0)
					MessageBox::Show("Username or password empty!", "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
				else
					MessageBox::Show("Login Failed!\nTry Again", "HospitalDB", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
