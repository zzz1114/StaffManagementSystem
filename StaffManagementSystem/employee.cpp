#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

//��ʾְ����Ϣ
void Employee::Show()
{
	cout << "ְ����ţ�" << this->m_Num << "\n"
		<< "ְ��������" << this->m_Name << "\n"
		<< "ְ����λ��" << this->GetPosName() << "\n"
		<< "ְ��ְ��" << this->m_Duty << endl;
}

string Employee::GetPosName()
{
	return "��ͨԱ��";
}