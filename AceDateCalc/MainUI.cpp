#include "MainUI.h"

#include "MainUI.h" 

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{ 
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AceDateCalc::MainUI form;
	Application::Run(%form);
}
