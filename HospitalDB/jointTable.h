#pragma once

namespace HospitalDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for jointTable
	/// </summary>
	public ref class jointTable : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldt = gcnew DataTable();
		MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlrd;
	public:
		jointTable(void)
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
		~jointTable()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ jointtab;
	protected:

	protected:

	private: System::Windows::Forms::Button^ docpat;
	private: System::Windows::Forms::Button^ nr;
	public:

	private: System::Windows::Forms::Button^ wr;

	private: System::Windows::Forms::Button^ exi;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(jointTable::typeid));
			this->jointtab = (gcnew System::Windows::Forms::DataGridView());
			this->docpat = (gcnew System::Windows::Forms::Button());
			this->nr = (gcnew System::Windows::Forms::Button());
			this->wr = (gcnew System::Windows::Forms::Button());
			this->exi = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jointtab))->BeginInit();
			this->SuspendLayout();
			// 
			// jointtab
			// 
			this->jointtab->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->jointtab->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->jointtab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->jointtab->Location = System::Drawing::Point(12, 70);
			this->jointtab->Name = L"jointtab";
			this->jointtab->RowHeadersWidth = 51;
			this->jointtab->RowTemplate->Height = 24;
			this->jointtab->Size = System::Drawing::Size(1238, 591);
			this->jointtab->TabIndex = 83;
			// 
			// docpat
			// 
			this->docpat->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docpat->Location = System::Drawing::Point(12, 28);
			this->docpat->Name = L"docpat";
			this->docpat->Size = System::Drawing::Size(177, 36);
			this->docpat->TabIndex = 84;
			this->docpat->Text = L"Doctor&Patient";
			this->docpat->UseVisualStyleBackColor = true;
			this->docpat->Click += gcnew System::EventHandler(this, &jointTable::docpat_Click);
			// 
			// nr
			// 
			this->nr->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nr->Location = System::Drawing::Point(224, 28);
			this->nr->Name = L"nr";
			this->nr->Size = System::Drawing::Size(177, 36);
			this->nr->TabIndex = 85;
			this->nr->Text = L"Nurse&Room";
			this->nr->UseVisualStyleBackColor = true;
			this->nr->Click += gcnew System::EventHandler(this, &jointTable::nr_Click);
			// 
			// wr
			// 
			this->wr->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wr->Location = System::Drawing::Point(433, 28);
			this->wr->Name = L"wr";
			this->wr->Size = System::Drawing::Size(177, 36);
			this->wr->TabIndex = 86;
			this->wr->Text = L"Wardboy&Room";
			this->wr->UseVisualStyleBackColor = true;
			this->wr->Click += gcnew System::EventHandler(this, &jointTable::wr_Click);
			// 
			// exi
			// 
			this->exi->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exi->Location = System::Drawing::Point(1073, 28);
			this->exi->Name = L"exi";
			this->exi->Size = System::Drawing::Size(177, 36);
			this->exi->TabIndex = 87;
			this->exi->Text = L"Exit";
			this->exi->UseVisualStyleBackColor = true;
			this->exi->Click += gcnew System::EventHandler(this, &jointTable::exi_Click);
			// 
			// jointTable
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->exi);
			this->Controls->Add(this->wr);
			this->Controls->Add(this->nr);
			this->Controls->Add(this->docpat);
			this->Controls->Add(this->jointtab);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimizeBox = false;
			this->Name = L"jointTable";
			this->Text = L"Joint Info";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jointtab))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void docpat_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlconn->Open();
			sqlcmd->Connection = sqlconn;
			sqlcmd->CommandText = "select * from doctor natural join patient;";
			sqlrd = sqlcmd->ExecuteReader();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			jointtab->DataSource = sqldt;
			sqlconn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void nr_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlconn->Open();
			sqlcmd->Connection = sqlconn;
			sqlcmd->CommandText = "select * from nurse natural join room;";
			sqlrd = sqlcmd->ExecuteReader();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			jointtab->DataSource = sqldt;
			sqlconn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void wr_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlconn->Open();
			sqlcmd->Connection = sqlconn;
			sqlcmd->CommandText = "select * from room join wardboy;";
			sqlrd = sqlcmd->ExecuteReader();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			jointtab->DataSource = sqldt;
			sqlconn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void exi_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
