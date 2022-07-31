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
	/// Summary for PatientInfo
	/// </summary>
	public ref class PatientInfo : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldt = gcnew DataTable();            //for data from table to GUI,    requires namespace System::Data;
		MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DateTimePicker^ admitted;

		   MySqlDataReader^ sqlrd;
	public:
		PatientInfo(void)
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
		~PatientInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ patNum;
	protected:

	protected:

	private: System::Windows::Forms::MaskedTextBox^ patName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ gender;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ dID;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ treatment;
	private: System::Windows::Forms::MaskedTextBox^ disease;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ roomNo;

	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::DataGridView^ patientTable;

	private: System::Windows::Forms::Button^ addbutton;
	private: System::Windows::Forms::Button^ update;

	private: System::Windows::Forms::Button^ dele;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MaskedTextBox^ patId;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientInfo::typeid));
			this->patNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->patName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dID = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->treatment = (gcnew System::Windows::Forms::ComboBox());
			this->disease = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->roomNo = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->patientTable = (gcnew System::Windows::Forms::DataGridView());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->dele = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->patId = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->admitted = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->patientTable))->BeginInit();
			this->SuspendLayout();
			// 
			// patNum
			// 
			this->patNum->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->patNum->Location = System::Drawing::Point(32, 199);
			this->patNum->Name = L"patNum";
			this->patNum->Size = System::Drawing::Size(165, 32);
			this->patNum->TabIndex = 41;
			// 
			// patName
			// 
			this->patName->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->patName->Location = System::Drawing::Point(32, 123);
			this->patName->Name = L"patName";
			this->patName->Size = System::Drawing::Size(165, 32);
			this->patName->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(27, 174);
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
			this->label2->Location = System::Drawing::Point(27, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 27);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Full Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(27, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 27);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Patinet ID";
			// 
			// gender
			// 
			this->gender->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gender->FormattingEnabled = true;
			this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->gender->Location = System::Drawing::Point(32, 271);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(165, 35);
			this->gender->TabIndex = 48;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(30, 241);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 27);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Gender";
			// 
			// dID
			// 
			this->dID->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dID->FormattingEnabled = true;
			this->dID->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"9000", L"9001", L"9002", L"9003", L"9004", L"9005",
					L"9006", L"9007", L"9008", L"9009", L"9010", L"9011", L"9012", L"9013", L"9014", L"9015", L"9016", L"9017", L"9018", L"9019",
					L"9020"
			});
			this->dID->Location = System::Drawing::Point(32, 621);
			this->dID->Name = L"dID";
			this->dID->Size = System::Drawing::Size(165, 35);
			this->dID->TabIndex = 56;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(27, 596);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 27);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Doctor ID";
			// 
			// treatment
			// 
			this->treatment->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->treatment->FormattingEnabled = true;
			this->treatment->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Treatment A", L"Treatment B", L"Treatment C",
					L"Treatment D", L"Treatment E"
			});
			this->treatment->Location = System::Drawing::Point(32, 477);
			this->treatment->Name = L"treatment";
			this->treatment->Size = System::Drawing::Size(165, 35);
			this->treatment->TabIndex = 54;
			// 
			// disease
			// 
			this->disease->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->disease->Location = System::Drawing::Point(32, 408);
			this->disease->Name = L"disease";
			this->disease->Size = System::Drawing::Size(165, 32);
			this->disease->TabIndex = 52;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(27, 525);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 27);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Room Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(27, 383);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 27);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Disease";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(27, 451);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 27);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Treatment";
			// 
			// roomNo
			// 
			this->roomNo->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNo->FormattingEnabled = true;
			this->roomNo->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"101", L"102", L"103", L"104", L"105", L"201", L"202",
					L"203", L"204", L"205", L"301", L"302", L"303", L"304", L"305"
			});
			this->roomNo->Location = System::Drawing::Point(32, 551);
			this->roomNo->Name = L"roomNo";
			this->roomNo->Size = System::Drawing::Size(165, 35);
			this->roomNo->TabIndex = 57;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(500, 3);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(271, 32);
			this->label9->TabIndex = 58;
			this->label9->Text = L"Patient\'s Information";
			// 
			// patientTable
			// 
			this->patientTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->patientTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->patientTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->patientTable->Location = System::Drawing::Point(279, 46);
			this->patientTable->Name = L"patientTable";
			this->patientTable->RowHeadersWidth = 51;
			this->patientTable->RowTemplate->Height = 24;
			this->patientTable->Size = System::Drawing::Size(964, 544);
			this->patientTable->TabIndex = 59;
			this->patientTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PatientInfo::patientTable_CellClick);
			// 
			// addbutton
			// 
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->addbutton->Location = System::Drawing::Point(279, 618);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(165, 38);
			this->addbutton->TabIndex = 60;
			this->addbutton->Text = L"AddData";
			this->addbutton->UseVisualStyleBackColor = true;
			this->addbutton->Click += gcnew System::EventHandler(this, &PatientInfo::addbutton_Click);
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->update->Location = System::Drawing::Point(478, 618);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(165, 38);
			this->update->TabIndex = 61;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &PatientInfo::update_Click);
			// 
			// dele
			// 
			this->dele->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dele->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->dele->Location = System::Drawing::Point(681, 618);
			this->dele->Name = L"dele";
			this->dele->Size = System::Drawing::Size(165, 38);
			this->dele->TabIndex = 62;
			this->dele->Text = L"Delete";
			this->dele->UseVisualStyleBackColor = true;
			this->dele->Click += gcnew System::EventHandler(this, &PatientInfo::dele_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button3->Location = System::Drawing::Point(884, 618);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 38);
			this->button3->TabIndex = 63;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PatientInfo::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button4->Location = System::Drawing::Point(1078, 618);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 38);
			this->button4->TabIndex = 64;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &PatientInfo::button4_Click);
			// 
			// patId
			// 
			this->patId->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->patId->Location = System::Drawing::Point(32, 56);
			this->patId->Name = L"patId";
			this->patId->Size = System::Drawing::Size(165, 32);
			this->patId->TabIndex = 65;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(30, 315);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(159, 27);
			this->label10->TabIndex = 66;
			this->label10->Text = L"Admitted date";
			// 
			// admitted
			// 
			this->admitted->CalendarFont = (gcnew System::Drawing::Font(L"Montserrat", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admitted->CustomFormat = L"yyyy-MM-dd";
			this->admitted->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admitted->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->admitted->Location = System::Drawing::Point(33, 345);
			this->admitted->Name = L"admitted";
			this->admitted->Size = System::Drawing::Size(165, 32);
			this->admitted->TabIndex = 67;
			this->admitted->TabStop = false;
			// 
			// PatientInfo
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->admitted);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->patId);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dele);
			this->Controls->Add(this->update);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->patientTable);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->roomNo);
			this->Controls->Add(this->dID);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->treatment);
			this->Controls->Add(this->disease);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->patNum);
			this->Controls->Add(this->patName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"PatientInfo";
			this->Text = L"PatientInfo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->patientTable))->EndInit();
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
			sqlcmd->CommandText = "select * from patient;";
			sqlrd = sqlcmd->ExecuteReader();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			sqlconn->Close();
			patientTable->DataSource = sqldt;
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

			MySqlDataAdapter^ sqlda = gcnew MySqlDataAdapter("select * from patient", sqlconn);
			DataTable^ datatb = gcnew DataTable();
			sqlda->Fill(datatb);
			patientTable->DataSource = datatb;

			patId->Text = "";
			patName->Text = "";
			patNum->Text = "";
			gender->Text = "";
			disease->Text = "";
			treatment->Text = "";
			roomNo->Text = "";
			dID->Text = "";
			admitted->Text = "";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	//exit button click
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
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
			sqlcmd->CommandText = "insert into patient values "
				"('" + patId->Text + "', '" + patName->Text + "', '" + patNum->Text + "', '" + gender->Text + "', '" + disease->Text + "', '" + treatment->Text + "', '" + roomNo->Text + "', '" + dID->Text + "', '" + admitted->Text + "');";

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

	//refresh button click
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDB();
	}

	private: System::Void patientTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			patId->Text = patientTable->SelectedRows[0]->Cells[0]->Value->ToString();
			patName->Text = patientTable->SelectedRows[0]->Cells[1]->Value->ToString();
			patNum->Text = patientTable->SelectedRows[0]->Cells[2]->Value->ToString();
			gender->Text = patientTable->SelectedRows[0]->Cells[3]->Value->ToString();
			disease->Text = patientTable->SelectedRows[0]->Cells[4]->Value->ToString();
			treatment->Text = patientTable->SelectedRows[0]->Cells[5]->Value->ToString();
			roomNo->Text = patientTable->SelectedRows[0]->Cells[6]->Value->ToString();
			dID->Text = patientTable->SelectedRows[0]->Cells[7]->Value->ToString();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void dele_Click(System::Object^ sender, System::EventArgs^ e) {
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
				String^ ID = patId->Text;
				MySqlCommand^ sqlcmd = gcnew MySqlCommand("delete from patient where patientID = " + ID + "", sqlconn);
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

	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlconn->ConnectionString = "datasource = localhost;"
				"port = 3306; "
				"username = root;"
				"password = 7240paio6921;"
				"database = hospitaldb";
			sqlcmd->Connection = sqlconn;

			String^ ID = patId->Text;
			String^ Name =	patName->Text;
			String^ Num = patNum->Text;
			String^ dise = disease->Text;
			String^ gend = gender->Text;
			String^ treat = treatment->Text;
			String^ rom = roomNo->Text;
			String^ doc = dID->Text;
			String^ date = admitted->Text;

			sqlcmd->CommandText = "update patient set patientID = '" + ID + "', fullName = '" + Name + "', phoneNo = '" + Num + "', gender = '" + gend + "', disease = '" + dise + "', treatment = '" + treat + "', roomNo = '" + rom + "', doctorID = '" + doc + "', admittedDate = '" + date + "' where patientID = " + ID + "", sqlconn;

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
};
}
