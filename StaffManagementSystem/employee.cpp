#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

//����
Employee::Employee(int departID, const char* name, int id)
{
	strcpy_s(m_Name, name);
	m_DepartID = departID;
	m_Id = id;
	next = NULL;
}


//��ʾְ����Ϣ
void Employee::ShowInfo()
{
	cout << "ְ�����: " << this->m_Id << endl;
	cout << "ְ������: " << this->m_Name << endl;
	cout << "��������: " << this->GetDepartName() << endl;
	cout << endl;
}

string Employee::GetDepartName()
{
	return string("����");
}