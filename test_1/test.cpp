#include "stdafx.h"
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace test_1;

//int array_1[60];

[STAThread]
int main(array<String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// �������� �������� ���� � ��� ������
	test_1::MyForm form1;
	Application::Run(%form1);
	return 0;
}