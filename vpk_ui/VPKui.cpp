#include "VPKui.h"


// To make the UI work
using namespace System;
using namespace System::Windows::Forms;

// Lets boot her up!
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// This starts the form
	vpk_ui::VPKui form;
	Application::Run(%form);
}