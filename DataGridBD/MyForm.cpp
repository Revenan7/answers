#include "MyForm.h"
#include "Ans3.h"
#include<Windows.h>
using namespace watsondoto;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}

