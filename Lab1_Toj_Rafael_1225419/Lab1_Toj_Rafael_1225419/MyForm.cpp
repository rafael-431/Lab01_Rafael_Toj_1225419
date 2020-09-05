#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lab1TojRafael1225419::MyForm mainForm;
	Application::Run(% mainForm);
	return 0;
}
