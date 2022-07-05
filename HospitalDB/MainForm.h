#pragma once

#include "Sql/SqlQueries.h"

//Connect connect;
namespace HospitalDB {

	//Connect^ connect = gcnew Connect();

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		Connect connect;
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//connect.ConnectDB();
			//connect.CreateTable();
			//connect.CloseDB();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(500, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(267, 67);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1262, 753);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"HospitalDB";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

		//will delete this but in the future
		/*private: System::Void ConnectDB()
		{
			try {
				sqlconn->ConnectionString = "datasource = localhost;"
					"port = 3306; "
					"username = root;"
					"password = ;"
					"database = hospitaldb";
				sqlconn->Open();
				sqlcmd->Connection = sqlconn;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			}
		}

		private: System::Void CreateTable()
		{
			try {
				//sqlcmd->Connection = sqlconn;
				//sqlcmd->CommandText = "select * from hospitaldb";
				sqlcmd->CommandText = "CREATE TABLE if not exists Random (Id INT(10), name VARCHAR(50));";
				sqlcmd->CommandText = "CREATE TABLE if not exists Random2 (Id INT(10), name VARCHAR(50));";
				//sqlcmd->CommandText = "drop table random;";
				sqlrd = sqlcmd->ExecuteReader();
				//sqldt->Load(sqlrd);
				sqlrd->Close();
				//sqlconn->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			}
		}

		private: System::Void CloseDB()
		{
			try
			{
				sqlconn->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			}
		}*/
#pragma endregion
	};
}