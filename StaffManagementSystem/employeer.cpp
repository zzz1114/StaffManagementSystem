#include "employeer.h"

//经理
Employeer::Employeer(int departID, string name, int id)
{
	m_Name = name;
	m_DepartID = departID;
	m_Id = id;
}

string Employeer::GetDepartName()
{
	return string("经理");
}