#pragma once
#pragma once

using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;

public ref class Connect
{
	MySqlConnection^ sqlconn = gcnew MySqlConnection();
	MySqlCommand^ sqlcmd = gcnew MySqlCommand();
	DataTable^ sqldt = gcnew DataTable();            //for data from table to GUI,    requires namespace System::Data;
	MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
	MySqlDataReader^ sqlrd;

public: System::Void ConnectDB()
{
	try {
		sqlconn->ConnectionString = "datasource = localhost;"
			"port = 3306; "
			"username = root;"
			"password = 7240paio6921;"
			"database = hospitaldb";
		sqlconn->Open();
		sqlcmd->Connection = sqlconn;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}

public: System::Void CreateTable()
{
	try {
		//table:room
		sqlcmd->CommandText = "create table if not exists room("
			"roomNo int(10),"
			"roomtype varchar(10),"
			"capacity int(10),"
			"primary key(roomNo));";
		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();

		//table:doctor
		sqlcmd->CommandText = "create table if not exists doctor("
			"doctorID int(10),"
			"doctorName varchar(40),"
			"doctorPhoneNum bigint(12),"
			"primary key(doctorID));";
		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();

		//table:patient
		sqlcmd->CommandText = "create table if not exists patient("
			"patientID int(10),"
			"fullname varchar(50),"
			"phoneNo bigint,"
			"gender varchar(10),"
			"disease varchar(20),"
			"treatment varchar(10),"
			"roomNo int(10),"
			"doctorID int(10),"
			"admittedDate date,"
			"foreign key(doctorID) references doctor(doctorId) on delete cascade on update cascade,"
			"foreign key(roomNo) references room(roomNo) on delete cascade on update cascade,"
			"primary key(patientID));";
		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();

		//table:nurse
		sqlcmd->CommandText = "create table if not exists nurse("
			"nurseID int(10),"
			"nurseName varchar(30),"
			"nursePhoneNum bigint,"
			"roomNo int(10),"
			"primary key(nurseID),"
			"foreign key(roomNo) references room(roomNo) on delete cascade on update cascade);";
		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();

		//table:wardboy
		sqlcmd->CommandText = "create table if not exists wardboy("
			"wardboyID int(10),"
			"wardboyName varchar(30),"
			"roomNo int(10),"
			"primary key(wardboyID),"
			"foreign key(roomNo) references room(roomNo) on delete cascade on update cascade);";
		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}

public: System::Void CloseDB()
{
	try
	{
		sqlconn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
};




