#include <iostream>
#include <string>
#include "employeer.h"
using namespace std;

//��ʾְ����Ϣ
void Employeer::Show()
{
	cout << "ְ����ţ�" << this->m_Num << "\n"
		<< "ְ��������" << this->m_Name << "\n"
		<< "ְ����λ��" << this->GetPosName() << "\n"
		<< "ְ��ְ��" << this->m_Duty << endl;
}

string Employeer::GetPosName()
{
	return "���ž���";
}