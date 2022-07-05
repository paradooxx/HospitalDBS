#include "MainForm.h"
#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HospitalDB::MainForm MainForm;
	HospitalDB::LoginForm LoginForm;
	//Application::Run(% LoginForm);

	LoginForm.ShowDialog();
}