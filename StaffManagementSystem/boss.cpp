#include <iostream>
#include <string>
#include "boss.h"

//��ʾְ����Ϣ
void Boss::Show()
{
	cout << "ְ����ţ�" << this->m_Num << "\n"
		<< "ְ��������" << this->m_Name << "\n"
		<< "ְ����λ��" << this->GetPosName() << "\n"
		<< "ְ��ְ��" << this->m_Duty << endl;
}

string Boss::GetPosName()
{
	return "Ļ���ϰ�";
}