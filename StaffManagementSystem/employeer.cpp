#include "employeer.h"

//����
Employeer::Employeer(int departID, string name, int id)
{
	m_Name = name;
	m_DepartID = departID;
	m_Id = id;
}

string Employeer::GetDepartName()
{
	return string("����");
}