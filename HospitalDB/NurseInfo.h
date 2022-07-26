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
	/// Summary for NurseInfo
	/// </summary>
	public ref class NurseInfo : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldt = gcnew DataTable();            
		MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlrd;
	public:
		NurseInfo(void)
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
		~NurseInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ nurseId;
	private: System::Windows::Forms::MaskedTextBox^ nurseNum;



	private: System::Windows::Forms::MaskedTextBox^ nurseName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ roomN;

	private: System::Windows::Forms::Label^ roomnumber;


	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ Del;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::DataGridView^ nurseTable;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NurseInfo::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nurseId = (gcnew System::Windows::Forms::ComboBox());
			this->nurseNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->nurseName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->roomN = (gcnew System::Windows::Forms::ComboBox());
			this->roomnumber = (gcnew System::Windows::Forms::Label());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->nurseTable = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nurseTable))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(500, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 32);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Nurse\'s Information";
			// 
			// nurseId
			// 
			this->nurseId->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nurseId->FormattingEnabled = true;
			this->nurseId->Items->AddRange(gcnew cli::array< System::Object^  >(51) {
				L"15000", L"15001", L"15002", L"15003", L"15004",
					L"15005", L"15006", L"15007", L"15008", L"15009", L"15010", L"15011", L"15012", L"15013", L"15014", L"15015", L"15016", L"15017",
					L"15018", L"15019", L"15020", L"15021", L"15022", L"15023", L"15024", L"15025", L"15026", L"15027", L"15028", L"15029", L"15030",
					L"15031", L"15032", L"15033", L"15034", L"15035", L"15036", L"15037", L"15038", L"15039", L"15040", L"15041", L"15042", L"15043",
					L"15044", L"15045", L"15046", L"15047", L"15048", L"15049", L"15050"
			});
			this->nurseId->Location = System::Drawing::Point(25, 63);
			this->nurseId->Name = L"nurseId";
			this->nurseId->Size = System::Drawing::Size(162, 35);
			this->nurseId->TabIndex = 42;
			// 
			// nurseNum
			// 
			this->nurseNum->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nurseNum->Location = System::Drawing::Point(22, 234);
			this->nurseNum->Name = L"nurseNum";
			this->nurseNum->Size = System::Drawing::Size(165, 32);
			this->nurseNum->TabIndex = 41;
			// 
			// nurseName
			// 
			this->nurseName->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nurseName->Location = System::Drawing::Point(22, 146);
			this->nurseName->Name = L"nurseName";
			this->nurseName->Size = System::Drawing::Size(165, 32);
			this->nurseName->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(17, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 27);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Phone Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(17, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 27);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Nurse Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(20, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 27);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Nurse ID";
			// 
			// roomN
			// 
			this->roomN->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomN->FormattingEnabled = true;
			this->roomN->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"101", L"102", L"103", L"104", L"105", L"201", L"202",
					L"203", L"204", L"205", L"301", L"302", L"303", L"304", L"305"
			});
			this->roomN->Location = System::Drawing::Point(22, 321);
			this->roomN->Name = L"roomN";
			this->roomN->Size = System::Drawing::Size(165, 35);
			this->roomN->TabIndex = 44;
			// 
			// roomnumber
			// 
			this->roomnumber->AutoSize = true;
			this->roomnumber->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomnumber->ForeColor = System::Drawing::Color::Transparent;
			this->roomnumber->Location = System::Drawing::Point(17, 291);
			this->roomnumber->Name = L"roomnumber";
			this->roomnumber->Size = System::Drawing::Size(162, 27);
			this->roomnumber->TabIndex = 43;
			this->roomnumber->Text = L"Room Number";
			// 
			// addbutton
			// 
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addbutton->Location = System::Drawing::Point(22, 404);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(165, 38);
			this->addbutton->TabIndex = 49;
			this->addbutton->Text = L"AddData";
			this->addbutton->UseVisualStyleBackColor = true;
			this->addbutton->Click += gcnew System::EventHandler(this, &NurseInfo::addbutton_Click);
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->exit->Location = System::Drawing::Point(22, 624);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(165, 38);
			this->exit->TabIndex = 48;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &NurseInfo::exit_Click);
			// 
			// refresh
			// 
			this->refresh->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->refresh->Location = System::Drawing::Point(22, 567);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(165, 38);
			this->refresh->TabIndex = 47;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &NurseInfo::refresh_Click);
			// 
			// Del
			// 
			this->Del->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Del->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->Del->Location = System::Drawing::Point(22, 511);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(165, 38);
			this->Del->TabIndex = 46;
			this->Del->Text = L"Delete";
			this->Del->UseVisualStyleBackColor = true;
			this->Del->Click += gcnew System::EventHandler(this, &NurseInfo::Del_Click);
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->update->Location = System::Drawing::Point(22, 458);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(165, 38);
			this->update->TabIndex = 45;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &NurseInfo::update_Click);
			// 
			// nurseTable
			// 
			this->nurseTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->nurseTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->nurseTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->nurseTable->Location = System::Drawing::Point(384, 44);
			this->nurseTable->Name = L"nurseTable";
			this->nurseTable->RowHeadersWidth = 51;
			this->nurseTable->RowTemplate->Height = 24;
			this->nurseTable->Size = System::Drawing::Size(861, 611);
			this->nurseTable->TabIndex = 50;
			this->nurseTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &NurseInfo::nurseTable_CellClick);
			// 
			// NurseInfo
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->nurseTable);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->update);
			this->Controls->Add(this->roomN);
			this->Controls->Add(this->roomnumber);
			this->Controls->Add(this->nurseId);
			this->Controls->Add(this->nurseNum);
			this->Controls->Add(this->nurseName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"NurseInfo";
			this->Text = L"NurseInfo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nurseTable))->EndInit();
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
			sqlcmd->CommandText = "select * from nurse;";
			sqlrd = sqlcmd->ExecuteReader();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			sqlconn->Close();
			nurseTable->DataSource = sqldt;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

			MySqlDataAdapter^ sqlda = gcnew MySqlDataAdapter("select * from nurse", sqlconn);
			DataTable^ datatb = gcnew DataTable();
			sqlda->Fill(datatb);
			nurseTable->DataSource = datatb;

			nurseId->Text = "";
			nurseName->Text = "";
			nurseNum->Text = "";
			roomN->Text = "";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
			sqlcmd->CommandText = "insert into nurse values "
				"('" + nurseId->Text + "', '" + nurseName->Text + "', '" + nurseNum->Text + "', '" + roomN->Text + "');";

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

	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlcmd->Connection = sqlconn;

			String^ ID = nurseId->Text;
			String^ Name = nurseName->Text;
			String^ Num = nurseNum->Text;
			String^ rID = roomN->Text;

			sqlcmd->CommandText = "update nurse set nurseID = '" + ID + "', nurseName = '" + Name + "', nursePhoneNum = '" + Num + "', roomNo = '" + rID + "' where nurseID = " + ID + "", sqlconn;

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

	private: System::Void nurseTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try 
		{
			nurseId->Text = nurseTable->SelectedRows[0]->Cells[0]->Value->ToString();
			nurseName->Text = nurseTable->SelectedRows[0]->Cells[1]->Value->ToString();
			nurseNum->Text = nurseTable->SelectedRows[0]->Cells[2]->Value->ToString();
			roomN->Text = nurseTable->SelectedRows[0]->Cells[3]->Value->ToString();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
				String^ ID = nurseId->Text;
				MySqlCommand^ sqlcmd = gcnew MySqlCommand("delete from nurse where nurseID = " + ID + "", sqlconn);
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

	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDB();
	}
};
}
