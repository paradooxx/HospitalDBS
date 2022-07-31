#include "MainForm.h"
#include "LoginForm.h"
#include "RoomInfo.h"
#include "DoctorTable.h"
#include "Sql/SqlQueries.h"
#include "PatientInfo.h"
#include "NurseInfo.h"
#include "wardboy.h"
#include "Bill.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) 
{
	Connect connect;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HospitalDB::MainForm MainForm;
	HospitalDB::LoginForm LoginForm;
	//Application::Run(% LoginForm);
	HospitalDB::RoomInfo RoomInfo;
	HospitalDB::DoctorTable DoctorTable;
	HospitalDB::PatientInfo PatientInfo;
	HospitalDB::NurseInfo NurseInfo;
	HospitalDB::wardboy wardboy;
	HospitalDB::Bill bill;

	connect.ConnectDB();
	connect.CreateTable();
	//DoctorTable.ShowDialog();
	//PatientInfo.ShowDialog();
	bill.ShowDialog();
	//MainForm.ShowDialog();
	//LoginForm.ShowDialog();
	//RoomInfo.ShowDialog();
	//wardboy.ShowDialog();
	//NurseInfo.ShowDialog();
	connect.CloseDB();
}