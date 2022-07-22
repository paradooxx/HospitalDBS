#ifndef MAINFORM_H
#define MAINFORM_H

#include "Sql/SqlQueries.h" 
#include "RoomInfo.h"
#include "DoctorTable.h"
#include "PatientInfo.h"
#include "NurseInfo.h"

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
			//roominfo.ShowDialog();
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
	private: System::Windows::Forms::Button^ room;
	private: System::Windows::Forms::Button^ doctor;
	private: System::Windows::Forms::Button^ patient;
	private: System::Windows::Forms::Button^ nurse;
	private: System::Windows::Forms::Button^ wardboy;

	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			this->room = (gcnew System::Windows::Forms::Button());
			this->doctor = (gcnew System::Windows::Forms::Button());
			this->patient = (gcnew System::Windows::Forms::Button());
			this->nurse = (gcnew System::Windows::Forms::Button());
			this->wardboy = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(504, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(272, 67);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// room
			// 
			this->room->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room->Location = System::Drawing::Point(504, 169);
			this->room->Name = L"room";
			this->room->Size = System::Drawing::Size(272, 55);
			this->room->TabIndex = 1;
			this->room->Text = L"Room Information";
			this->room->UseVisualStyleBackColor = true;
			this->room->Click += gcnew System::EventHandler(this, &MainForm::room_Click);
			// 
			// doctor
			// 
			this->doctor->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doctor->Location = System::Drawing::Point(504, 269);
			this->doctor->Name = L"doctor";
			this->doctor->Size = System::Drawing::Size(272, 55);
			this->doctor->TabIndex = 2;
			this->doctor->Text = L"Doctor\'s Information";
			this->doctor->UseVisualStyleBackColor = true;
			this->doctor->Click += gcnew System::EventHandler(this, &MainForm::doctor_Click);
			// 
			// patient
			// 
			this->patient->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->patient->Location = System::Drawing::Point(504, 369);
			this->patient->Name = L"patient";
			this->patient->Size = System::Drawing::Size(272, 55);
			this->patient->TabIndex = 3;
			this->patient->Text = L"Patient\'s Information";
			this->patient->UseVisualStyleBackColor = true;
			this->patient->Click += gcnew System::EventHandler(this, &MainForm::patient_Click);
			// 
			// nurse
			// 
			this->nurse->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nurse->Location = System::Drawing::Point(504, 469);
			this->nurse->Name = L"nurse";
			this->nurse->Size = System::Drawing::Size(272, 55);
			this->nurse->TabIndex = 4;
			this->nurse->Text = L"Nurses\'s Information";
			this->nurse->UseVisualStyleBackColor = true;
			this->nurse->Click += gcnew System::EventHandler(this, &MainForm::nurse_Click);
			// 
			// wardboy
			// 
			this->wardboy->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wardboy->Location = System::Drawing::Point(504, 569);
			this->wardboy->Name = L"wardboy";
			this->wardboy->Size = System::Drawing::Size(272, 55);
			this->wardboy->TabIndex = 5;
			this->wardboy->Text = L"WardBoy\'s Information";
			this->wardboy->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(433, 70);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(417, 642);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1262, 753);
			this->Controls->Add(this->wardboy);
			this->Controls->Add(this->nurse);
			this->Controls->Add(this->patient);
			this->Controls->Add(this->doctor);
			this->Controls->Add(this->room);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"HospitalDB";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
private: System::Void room_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	HospitalDB::RoomInfo Room;
	Room.ShowDialog();
	this->Show();
}
private: System::Void doctor_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	HospitalDB::DoctorTable Drtable;
	Drtable.ShowDialog();
	this->Show();
}
private: System::Void patient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	HospitalDB::PatientInfo PatientInfo;
	PatientInfo.ShowDialog();
	this->Show();
}
private: System::Void nurse_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	HospitalDB::NurseInfo NurseInfo;
	NurseInfo.ShowDialog();
	this->Show();
}
};
}
#endif