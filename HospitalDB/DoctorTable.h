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
	/// Summary for DoctorTable
	/// </summary>
	public ref class DoctorTable : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldt = gcnew DataTable();            //for data from table to GUI,    requires namespace System::Data;
		MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlrd;
	public:
		DoctorTable(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			GetData();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DoctorTable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ addbutton;
	protected:

	protected:



	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ Del;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::MaskedTextBox^ docName;
	private: System::Windows::Forms::MaskedTextBox^ docNum;
	private: System::Windows::Forms::DataGridView^ docTable;
	private: System::Windows::Forms::ComboBox^ docId;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorTable::typeid));
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->docName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->docNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->docTable = (gcnew System::Windows::Forms::DataGridView());
			this->docId = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->docTable))->BeginInit();
			this->SuspendLayout();
			// 
			// addbutton
			// 
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addbutton->Location = System::Drawing::Point(31, 402);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(165, 38);
			this->addbutton->TabIndex = 29;
			this->addbutton->Text = L"AddData";
			this->addbutton->UseVisualStyleBackColor = true;
			this->addbutton->Click += gcnew System::EventHandler(this, &DoctorTable::addbutton_Click);
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->exit->Location = System::Drawing::Point(31, 622);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(165, 38);
			this->exit->TabIndex = 25;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &DoctorTable::exit_Click);
			// 
			// refresh
			// 
			this->refresh->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->refresh->Location = System::Drawing::Point(31, 565);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(165, 38);
			this->refresh->TabIndex = 24;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &DoctorTable::refresh_Click);
			// 
			// Del
			// 
			this->Del->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Del->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->Del->Location = System::Drawing::Point(31, 509);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(165, 38);
			this->Del->TabIndex = 23;
			this->Del->Text = L"Delete";
			this->Del->UseVisualStyleBackColor = true;
			this->Del->Click += gcnew System::EventHandler(this, &DoctorTable::Del_Click);
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->update->Location = System::Drawing::Point(31, 456);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(165, 38);
			this->update->TabIndex = 22;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &DoctorTable::update_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(26, 269);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 27);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Phone Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(26, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 27);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Doctor Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(26, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 27);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Doctor ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(500, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(265, 32);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Doctor\'s Information";
			// 
			// docName
			// 
			this->docName->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docName->Location = System::Drawing::Point(31, 186);
			this->docName->Name = L"docName";
			this->docName->Size = System::Drawing::Size(165, 32);
			this->docName->TabIndex = 33;
			// 
			// docNum
			// 
			this->docNum->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docNum->Location = System::Drawing::Point(31, 299);
			this->docNum->Name = L"docNum";
			this->docNum->Size = System::Drawing::Size(165, 32);
			this->docNum->TabIndex = 34;
			// 
			// docTable
			// 
			this->docTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->docTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->docTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->docTable->Location = System::Drawing::Point(376, 50);
			this->docTable->Name = L"docTable";
			this->docTable->RowHeadersWidth = 51;
			this->docTable->RowTemplate->Height = 24;
			this->docTable->Size = System::Drawing::Size(861, 611);
			this->docTable->TabIndex = 35;
			this->docTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DoctorTable::docTable_CellClick);
			// 
			// docId
			// 
			this->docId->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docId->FormattingEnabled = true;
			this->docId->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"9000", L"9001", L"9002", L"9003", L"9004", L"9005",
					L"9006", L"9007", L"9008", L"9009", L"9010", L"9011", L"9012", L"9013", L"9014", L"9015", L"9016", L"9017", L"9018", L"9019",
					L"9020"
			});
			this->docId->Location = System::Drawing::Point(34, 73);
			this->docId->Name = L"docId";
			this->docId->Size = System::Drawing::Size(162, 35);
			this->docId->TabIndex = 36;
			// 
			// DoctorTable
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->docId);
			this->Controls->Add(this->docTable);
			this->Controls->Add(this->docNum);
			this->Controls->Add(this->docName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->update);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"DoctorTable";
			this->Text = L"Doctor Information";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->docTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GetData()
	{
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlconn->Open();
			sqlcmd->Connection = sqlconn;
			sqlcmd->CommandText = "select * from doctor;";
			sqlrd = sqlcmd->ExecuteReader();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			sqlconn->Close();
			docTable->DataSource = sqldt;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void addbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlconn->ConnectionString = "datasource = localhost;"
			"port = 3306; "
			"username = root;"
			"password = 7240paio6921;"
			"database = hospitaldb";
		sqlconn->Open();
		sqlcmd->Connection = sqlconn;
		try
		{
			sqlcmd->CommandText = "insert into doctor values "
				"('" + docId->Text + "', '" + docName->Text + "', '" + docNum->Text + "');";

			sqlcmd->ExecuteNonQuery();
			sqlconn->Close();
			GetData();
			RefreshDB();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void RefreshDB()
	{
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlcmd->Connection = sqlconn;

			MySqlDataAdapter^ sqlda = gcnew MySqlDataAdapter("select * from doctor", sqlconn);
			DataTable^ datatb = gcnew DataTable();
			sqlda->Fill(datatb);
			docTable->DataSource = datatb;

			docId->Text = "";
			docName->Text = "";
			docNum->Text = "";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDB();
	}

	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlcmd->Connection = sqlconn;

			String^ ID = docId->Text;
			String^ Name = docName->Text;
			String^ Num = docNum->Text;

			sqlcmd->CommandText = "update doctor set doctorId = '" + ID + "', doctorName = '" + Name + "', doctorPhoneNum = '" + Num + "' where doctorId = " + ID + "", sqlconn ;

			sqlconn->Open();
			sqlrd = sqlcmd->ExecuteReader();
			sqlconn->Close();
			GetData();
			RefreshDB();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Update Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void Del_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult query;
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlcmd->Connection = sqlconn;

			query = MessageBox::Show("Do you want to delete the record?", "Query", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

			if (query == System::Windows::Forms::DialogResult::Yes)
			{
				String^ ID = docId->Text;
				MySqlCommand^ sqlcmd = gcnew MySqlCommand("delete from doctor where doctorID = " + ID + "", sqlconn);
				sqlconn->Open();
				sqlrd = sqlcmd->ExecuteReader();
				MessageBox::Show("Record Deleted!", "Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
				sqlconn->Close();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		RefreshDB();
	}
	private: System::Void docTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			docId->Text = docTable->SelectedRows[0]->Cells[0]->Value->ToString();
			docName->Text = docTable->SelectedRows[0]->Cells[1]->Value->ToString();
			docNum->Text = docTable->SelectedRows[0]->Cells[2]->Value->ToString();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};
}
