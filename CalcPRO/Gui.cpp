#include "Gui.h"
#include "stdio.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CalcPRO::Gui form;
	Application::Run(%form);
	
}


