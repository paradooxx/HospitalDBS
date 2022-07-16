#ifndef ROOM_INFO_H
#define ROOM_INFO_H

#include "Sql/SqlQueries.h"

namespace HospitalDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RoomInfo
	/// </summary>
	public ref class RoomInfo : public System::Windows::Forms::Form
	{
		Connect connect;
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldt = gcnew DataTable();            //for data from table to GUI,    requires namespace System::Data;
		MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ button1;
		   MySqlDataReader^ sqlrd;
	public:
		RoomInfo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//connect.ConnectDB();
			//connect.CreateTable();
			GetData();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RoomInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Button^ update;

	private: System::Windows::Forms::Button^ Del;

	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::DataGridView^ roomTable;

	private: System::Windows::Forms::ComboBox^ roomType;
	private: System::Windows::Forms::ComboBox^ roomCap;


	private: System::Windows::Forms::ComboBox^ roomNo;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomInfo::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Button());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->roomTable = (gcnew System::Windows::Forms::DataGridView());
			this->roomType = (gcnew System::Windows::Forms::ComboBox());
			this->roomCap = (gcnew System::Windows::Forms::ComboBox());
			this->roomNo = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomTable))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1195, 41);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(34, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Room Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(34, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Room Type";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(34, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 27);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Room Capacity";
			// 
			// update
			// 
			this->update->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->update->Location = System::Drawing::Point(39, 457);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(165, 38);
			this->update->TabIndex = 10;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &RoomInfo::update_Click);
			// 
			// Del
			// 
			this->Del->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Del->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->Del->Location = System::Drawing::Point(39, 510);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(165, 38);
			this->Del->TabIndex = 11;
			this->Del->Text = L"Delete";
			this->Del->UseVisualStyleBackColor = true;
			this->Del->Click += gcnew System::EventHandler(this, &RoomInfo::Del_Click);
			// 
			// refresh
			// 
			this->refresh->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->refresh->Location = System::Drawing::Point(39, 566);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(165, 38);
			this->refresh->TabIndex = 12;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &RoomInfo::refresh_Click);
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->exit->Location = System::Drawing::Point(39, 623);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(165, 38);
			this->exit->TabIndex = 13;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &RoomInfo::exit_Click);
			// 
			// roomTable
			// 
			this->roomTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->roomTable->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->roomTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->roomTable->Location = System::Drawing::Point(373, 50);
			this->roomTable->Name = L"roomTable";
			this->roomTable->RowHeadersWidth = 51;
			this->roomTable->RowTemplate->Height = 24;
			this->roomTable->Size = System::Drawing::Size(861, 611);
			this->roomTable->TabIndex = 14;
			this->roomTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RoomInfo::roomTable_CellContentClick);
			// 
			// roomType
			// 
			this->roomType->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomType->FormattingEnabled = true;
			this->roomType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"General", L"Operation ", L"ICU" });
			this->roomType->Location = System::Drawing::Point(39, 187);
			this->roomType->Name = L"roomType";
			this->roomType->Size = System::Drawing::Size(162, 35);
			this->roomType->TabIndex = 15;
			// 
			// roomCap
			// 
			this->roomCap->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomCap->FormattingEnabled = true;
			this->roomCap->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"5", L"10" });
			this->roomCap->Location = System::Drawing::Point(39, 300);
			this->roomCap->Name = L"roomCap";
			this->roomCap->Size = System::Drawing::Size(162, 35);
			this->roomCap->TabIndex = 16;
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
			this->roomNo->Location = System::Drawing::Point(39, 74);
			this->roomNo->Name = L"roomNo";
			this->roomNo->Size = System::Drawing::Size(162, 35);
			this->roomNo->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->button1->Location = System::Drawing::Point(39, 403);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 38);
			this->button1->TabIndex = 18;
			this->button1->Text = L"AddData";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RoomInfo::button1_Click);
			// 
			// RoomInfo
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->roomNo);
			this->Controls->Add(this->roomCap);
			this->Controls->Add(this->roomType);
			this->Controls->Add(this->roomTable);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->update);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"RoomInfo";
			this->Text = L"Room Information";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomTable))->EndInit();
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
			sqlcmd->CommandText = "select * from room;";
			sqlrd = sqlcmd->ExecuteReader();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			sqlconn->Close();
			roomTable->DataSource = sqldt;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void roomTable_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			roomNo->Text = roomTable->SelectedRows[0]->Cells[0]->Value->ToString();
			roomType->Text = roomTable->SelectedRows[1]->Cells[1]->Value->ToString();
			roomCap->Text = roomTable->SelectedRows[2]->Cells[2]->Value->ToString();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	//add new data button click
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		sqlconn->ConnectionString = "datasource = localhost;"
			"port = 3306; "
			"username = root;"
			"password = 7240paio6921;"
			"database = hospitaldb";
		sqlconn->Open();
		sqlcmd->Connection = sqlconn;
		try
		{
			sqlcmd->CommandText = "insert into room values "
				"('"+roomNo->Text+"', '" + roomType->Text + "', '" + roomCap->Text + "');";
			
			sqlcmd->ExecuteNonQuery();
			sqlconn->Close();
			GetData();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Cannot update room information from here.", "Update Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			roomNo->Text = "";
			roomType->Text = "";
			roomCap->Text = "";
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Data Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void Del_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Data delete error\nCannot delete from here","Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}

#endif