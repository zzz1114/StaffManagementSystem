#include "employee.h"

//打工人
Employee::Employee(int departID, string name, int id)
{
	m_DepartID = departID;
	m_Name = name;
	m_Id = id;
}

string Employee::GetDepartName()
{
	return string("打工人");
}