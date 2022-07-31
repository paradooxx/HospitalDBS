#pragma once

#include "PatientInfo.h"

namespace HospitalDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldt = gcnew DataTable();
		MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();


	private: System::Windows::Forms::MaskedTextBox^ billName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::DateTimePicker^ admitted;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ roomNo;
	private: System::Windows::Forms::ComboBox^ treatment;
	private: System::Windows::Forms::MaskedTextBox^ disease;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ billgender;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ billPhoneNum;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::MaskedTextBox^ billId;
	public: System::Windows::Forms::DataGridView^ billTable;
	private:

	private:



		   MySqlDataReader^ sqlrd;
	public:
		Bill(void)
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
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Bill::typeid));
			this->billName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->admitted = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->roomNo = (gcnew System::Windows::Forms::ComboBox());
			this->treatment = (gcnew System::Windows::Forms::ComboBox());
			this->disease = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->billgender = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->billPhoneNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::Button());
			this->billId = (gcnew System::Windows::Forms::MaskedTextBox());
			this->billTable = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billTable))->BeginInit();
			this->SuspendLayout();
			// 
			// billName
			// 
			this->billName->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billName->Location = System::Drawing::Point(26, 208);
			this->billName->Name = L"billName";
			this->billName->Size = System::Drawing::Size(165, 32);
			this->billName->TabIndex = 60;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(21, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 27);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Patient Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(22, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 27);
			this->label1->TabIndex = 58;
			this->label1->Text = L"Patient ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(500, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 32);
			this->label5->TabIndex = 62;
			this->label5->Text = L"Bill Calculation";
			// 
			// admitted
			// 
			this->admitted->CalendarFont = (gcnew System::Drawing::Font(L"Montserrat", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admitted->CustomFormat = L"yyyy-MM-dd";
			this->admitted->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admitted->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->admitted->Location = System::Drawing::Point(27, 416);
			this->admitted->Name = L"admitted";
			this->admitted->Size = System::Drawing::Size(165, 32);
			this->admitted->TabIndex = 79;
			this->admitted->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(24, 386);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(159, 27);
			this->label10->TabIndex = 78;
			this->label10->Text = L"Admitted date";
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
			this->roomNo->Location = System::Drawing::Point(26, 622);
			this->roomNo->Name = L"roomNo";
			this->roomNo->Size = System::Drawing::Size(165, 35);
			this->roomNo->TabIndex = 77;
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
			this->treatment->Location = System::Drawing::Point(26, 548);
			this->treatment->Name = L"treatment";
			this->treatment->Size = System::Drawing::Size(165, 35);
			this->treatment->TabIndex = 76;
			// 
			// disease
			// 
			this->disease->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->disease->Location = System::Drawing::Point(26, 479);
			this->disease->Name = L"disease";
			this->disease->Size = System::Drawing::Size(165, 32);
			this->disease->TabIndex = 75;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(21, 596);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 27);
			this->label4->TabIndex = 74;
			this->label4->Text = L"Room Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(21, 454);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 27);
			this->label7->TabIndex = 73;
			this->label7->Text = L"Disease";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(21, 522);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 27);
			this->label8->TabIndex = 72;
			this->label8->Text = L"Treatment";
			// 
			// billgender
			// 
			this->billgender->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billgender->FormattingEnabled = true;
			this->billgender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Other" });
			this->billgender->Location = System::Drawing::Point(26, 342);
			this->billgender->Name = L"billgender";
			this->billgender->Size = System::Drawing::Size(165, 35);
			this->billgender->TabIndex = 71;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(24, 312);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 27);
			this->label6->TabIndex = 70;
			this->label6->Text = L"Gender";
			// 
			// billPhoneNum
			// 
			this->billPhoneNum->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billPhoneNum->Location = System::Drawing::Point(26, 277);
			this->billPhoneNum->Name = L"billPhoneNum";
			this->billPhoneNum->Size = System::Drawing::Size(165, 32);
			this->billPhoneNum->TabIndex = 69;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(21, 252);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 27);
			this->label9->TabIndex = 68;
			this->label9->Text = L"Phone Number";
			// 
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(26, 112);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(166, 36);
			this->search->TabIndex = 80;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &Bill::search_Click);
			// 
			// billId
			// 
			this->billId->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billId->Location = System::Drawing::Point(27, 69);
			this->billId->Name = L"billId";
			this->billId->Size = System::Drawing::Size(165, 32);
			this->billId->TabIndex = 81;
			// 
			// billTable
			// 
			this->billTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->billTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->billTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->billTable->Location = System::Drawing::Point(286, 56);
			this->billTable->Name = L"billTable";
			this->billTable->RowHeadersWidth = 51;
			this->billTable->RowTemplate->Height = 24;
			this->billTable->Size = System::Drawing::Size(964, 605);
			this->billTable->TabIndex = 82;
			this->billTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Bill::billTable_CellClick);
			// 
			// Bill
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->billTable);
			this->Controls->Add(this->billId);
			this->Controls->Add(this->search);
			this->Controls->Add(this->admitted);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->roomNo);
			this->Controls->Add(this->treatment);
			this->Controls->Add(this->disease);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->billgender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->billPhoneNum);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->billName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Bill";
			this->Text = L"Bill";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

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
			billTable->DataSource = sqldt;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
#pragma endregion
	private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			DataView^ dv = sqldt->DefaultView;
			dv->RowFilter = String::Format("patientID like '%{0}%'", billId);
			billTable->DataSource = dv->ToTable();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void billTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			billId->Text = billTable->SelectedRows[0]->Cells[0]->Value->ToString();
			billName->Text = billTable->SelectedRows[0]->Cells[1]->Value->ToString();
			billPhoneNum->Text = billTable->SelectedRows[0]->Cells[2]->Value->ToString();
			billgender->Text = billTable->SelectedRows[0]->Cells[3]->Value->ToString();
			disease->Text = billTable->SelectedRows[0]->Cells[4]->Value->ToString();
			treatment->Text = billTable->SelectedRows[0]->Cells[5]->Value->ToString();
			roomNo->Text = billTable->SelectedRows[0]->Cells[6]->Value->ToString();
			//dID->Text = patientTable->SelectedRows[0]->Cells[7]->Value->ToString();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
};
}
