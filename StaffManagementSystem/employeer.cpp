#include <iostream>
#include <string>
#include "employeer.h"
using namespace std;

//����

Employeer::Employeer(int departID, const char* name, int id)
{
	strcpy_s(m_Name, name);
	m_DepartID = departID;
	m_Id = id;
	next = NULL;
}

//��ʾְ����Ϣ
void Employeer::ShowInfo()
{
	cout << "ְ�����" << this->m_Id << endl;
	cout << "ְ������" << this->m_Name << endl;
	cout << "��������" << this->GetDepartName() << endl;
	cout << endl;
}

string Employeer::GetDepartName()
{
	return string("����");
}