#include "boss.h"
 
//老板
Boss::Boss(int departID, string name, int id)
{
	m_Name = name;
	m_DepartID = departID;
	m_Id = id;	
}

//获取岗位名称
string Boss::GetDepartName()
{
	return string("老板");
}