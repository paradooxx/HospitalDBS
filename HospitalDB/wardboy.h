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
	/// Summary for wardboy
	/// </summary>
	public ref class wardboy : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldt = gcnew DataTable();
		MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlrd;
	public:
		wardboy(void)
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
		~wardboy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ wardboyTable;
	protected:

	protected:
	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ Del;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::ComboBox^ roomN;
	private: System::Windows::Forms::Label^ roomnumber;
	private: System::Windows::Forms::ComboBox^ wardboyId;
	private: System::Windows::Forms::MaskedTextBox^ wardboyName;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(wardboy::typeid));
			this->wardboyTable = (gcnew System::Windows::Forms::DataGridView());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->roomN = (gcnew System::Windows::Forms::ComboBox());
			this->roomnumber = (gcnew System::Windows::Forms::Label());
			this->wardboyId = (gcnew System::Windows::Forms::ComboBox());
			this->wardboyName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wardboyTable))->BeginInit();
			this->SuspendLayout();
			// 
			// wardboyTable
			// 
			this->wardboyTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->wardboyTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->wardboyTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->wardboyTable->Location = System::Drawing::Point(384, 45);
			this->wardboyTable->Name = L"wardboyTable";
			this->wardboyTable->RowHeadersWidth = 51;
			this->wardboyTable->RowTemplate->Height = 24;
			this->wardboyTable->Size = System::Drawing::Size(861, 611);
			this->wardboyTable->TabIndex = 65;
			this->wardboyTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &wardboy::wardboyTable_CellClick);
			// 
			// addbutton
			// 
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addbutton->Location = System::Drawing::Point(22, 405);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(165, 38);
			this->addbutton->TabIndex = 64;
			this->addbutton->Text = L"AddData";
			this->addbutton->UseVisualStyleBackColor = true;
			this->addbutton->Click += gcnew System::EventHandler(this, &wardboy::addbutton_Click);
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->exit->Location = System::Drawing::Point(22, 625);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(165, 38);
			this->exit->TabIndex = 63;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &wardboy::exit_Click);
			// 
			// refresh
			// 
			this->refresh->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->refresh->Location = System::Drawing::Point(22, 568);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(165, 38);
			this->refresh->TabIndex = 62;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &wardboy::refresh_Click);
			// 
			// Del
			// 
			this->Del->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Del->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->Del->Location = System::Drawing::Point(22, 512);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(165, 38);
			this->Del->TabIndex = 61;
			this->Del->Text = L"Delete";
			this->Del->UseVisualStyleBackColor = true;
			this->Del->Click += gcnew System::EventHandler(this, &wardboy::Del_Click);
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->update->Location = System::Drawing::Point(22, 459);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(165, 38);
			this->update->TabIndex = 60;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &wardboy::update_Click);
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
			this->roomN->Location = System::Drawing::Point(22, 282);
			this->roomN->Name = L"roomN";
			this->roomN->Size = System::Drawing::Size(165, 35);
			this->roomN->TabIndex = 59;
			// 
			// roomnumber
			// 
			this->roomnumber->AutoSize = true;
			this->roomnumber->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomnumber->ForeColor = System::Drawing::Color::Transparent;
			this->roomnumber->Location = System::Drawing::Point(17, 252);
			this->roomnumber->Name = L"roomnumber";
			this->roomnumber->Size = System::Drawing::Size(162, 27);
			this->roomnumber->TabIndex = 58;
			this->roomnumber->Text = L"Room Number";
			// 
			// wardboyId
			// 
			this->wardboyId->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wardboyId->FormattingEnabled = true;
			this->wardboyId->Items->AddRange(gcnew cli::array< System::Object^  >(51) {
				L"15000", L"15001", L"15002", L"15003", L"15004",
					L"15005", L"15006", L"15007", L"15008", L"15009", L"15010", L"15011", L"15012", L"15013", L"15014", L"15015", L"15016", L"15017",
					L"15018", L"15019", L"15020", L"15021", L"15022", L"15023", L"15024", L"15025", L"15026", L"15027", L"15028", L"15029", L"15030",
					L"15031", L"15032", L"15033", L"15034", L"15035", L"15036", L"15037", L"15038", L"15039", L"15040", L"15041", L"15042", L"15043",
					L"15044", L"15045", L"15046", L"15047", L"15048", L"15049", L"15050"
			});
			this->wardboyId->Location = System::Drawing::Point(22, 64);
			this->wardboyId->Name = L"wardboyId";
			this->wardboyId->Size = System::Drawing::Size(165, 35);
			this->wardboyId->TabIndex = 57;
			// 
			// wardboyName
			// 
			this->wardboyName->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wardboyName->Location = System::Drawing::Point(22, 175);
			this->wardboyName->Name = L"wardboyName";
			this->wardboyName->Size = System::Drawing::Size(165, 32);
			this->wardboyName->TabIndex = 55;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(17, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 27);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Wardboy Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(20, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 27);
			this->label1->TabIndex = 52;
			this->label1->Text = L"Wardboy ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(500, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(302, 32);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Ward Boy\'s Information";
			// 
			// wardboy
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->wardboyTable);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->update);
			this->Controls->Add(this->roomN);
			this->Controls->Add(this->roomnumber);
			this->Controls->Add(this->wardboyId);
			this->Controls->Add(this->wardboyName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"wardboy";
			this->Text = L"WardBoy Information";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wardboyTable))->EndInit();
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
				sqlcmd->CommandText = "select * from wardboy;";
				sqlrd = sqlcmd->ExecuteReader();
				sqldt->Load(sqlrd);
				sqlrd->Close();
				sqlconn->Close();
				wardboyTable->DataSource = sqldt;
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

			MySqlDataAdapter^ sqlda = gcnew MySqlDataAdapter("select * from wardboy", sqlconn);
			DataTable^ datatb = gcnew DataTable();
			sqlda->Fill(datatb);
			wardboyTable->DataSource = datatb;

			wardboyId->Text = "";
			wardboyName->Text = "";
			roomN->Text = "";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		sqlconn->Clone();
	}

	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDB();
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
			sqlcmd->CommandText = "insert into wardboy values "
				"('" + wardboyId->Text + "', '" + wardboyName->Text + "', '" + roomN->Text + "');";

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

			String^ ID = wardboyId->Text;
			String^ Name = wardboyName->Text;
			String^ rID = roomN->Text;

			sqlcmd->CommandText = "update wardboy set wardboyID = '" + ID + "', wardboyName = '" + Name + "', roomNo = '" + rID + "' where wardboyID = " + ID + "", sqlconn;

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
				String^ ID = wardboyId->Text;
				MySqlCommand^ sqlcmd = gcnew MySqlCommand("delete from wardboy where wardboyID = " + ID + "", sqlconn);
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

	private: System::Void wardboyTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			wardboyId->Text = wardboyTable->SelectedRows[0]->Cells[0]->Value->ToString();
			wardboyName->Text = wardboyTable->SelectedRows[0]->Cells[1]->Value->ToString();
			roomN->Text = wardboyTable->SelectedRows[0]->Cells[2]->Value->ToString();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};
}
