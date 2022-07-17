#include "MainForm.h"
#include "LoginForm.h"
#include "RoomInfo.h"
#include "DoctorTable.h"
#include "Sql/SqlQueries.h"

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

	connect.ConnectDB();
	connect.CreateTable();
	//DoctorTable.ShowDialog();
	MainForm.ShowDialog();
	//LoginForm.ShowDialog();
	//RoomInfo.ShowDialog();
	connect.CloseDB();
}