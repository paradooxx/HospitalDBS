#pragma once

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;

public ref class Login
{
	MySqlConnection^ sqlconn = gcnew MySqlConnection();
	MySqlCommand^ sqlcmd = gcnew MySqlCommand();
	//DataTable^ sqldt = gcnew DataTable();            //for data from table to GUI,    requires namespace System::Data;
	MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter();
	MySqlDataReader^ sqlrd;

public:
	MySqlConnection^ sqlConn = gcnew MySqlConnection("datasource = localhost;"
		"port = 3306;"
		"username = root;"
		"password = 7240paio6921;"
		"database = hospitaldb");

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

public: System::Void LoginDB()
{
	try {
		sqlcmd->CommandText = "create table if not exists login (username varchar(50), password varchar(50),"
			                  "primary key(username));";
		sqlrd = sqlcmd->ExecuteReader();
		sqlrd->Close();
		//sqlcmd->CommandText = "CREATE TABLE if not exists Random2 (Id INT(10), name VARCHAR(50));";
		//sqlrd = sqlcmd->ExecuteReader();
		//sqldt->Load(sqlrd);      //to read table columns
		sqlrd->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Connection Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}

public: System::Void GetData()
{
	
}
};