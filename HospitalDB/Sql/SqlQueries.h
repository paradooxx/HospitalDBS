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
		//sqlcmd->CommandText = "CREATE TABLE if not exists Random2 (Id INT(10), name VARCHAR(50));";
		//sqlrd = sqlcmd->ExecuteReader();
		//sqldt->Load(sqlrd);      //to read table columns
		//sqlrd->Close();
		sqlcmd->CommandText = "create table if not exists room("
			"roomNo int(10),"
			"roomtype varchar(10),"
			"capacity int(10),"
			"primary key(roomNo));";

		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();
		sqlcmd->CommandText = "create table if not exists doctor("
			"doctorID int(10),"
			"doctorName varchar(40),"
			"doctorPhoneNum bigint(12),"
			"primary key(doctorID));";

		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();

		sqlcmd->CommandText = "create table if not exists patient("
			"patientID int(10),"
			"fullname varchar(50),"
			"phoneNo bigint,"
			"gender varchar(10),"
			"disease varchar(20),"
			"treatment varchar(10),"
			"roomNo int(10),"
			"doctorID int(10),"
			"foreign key(doctorID) references doctor(doctorId) on delete cascade on update cascade,"
			"foreign key(roomNo) references room(roomNo) on delete cascade on update cascade,"
			"primary key(patientID));";
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




