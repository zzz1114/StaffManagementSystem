#include "employee.h"

//����
Employee::Employee(int departID, string name, int id)
{
	m_DepartID = departID;
	m_Name = name;
	m_Id = id;
}

string Employee::GetDepartName()
{
	return string("����");
}