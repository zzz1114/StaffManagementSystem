#include "boss.h"

Boss::Boss(int departID, const char* name, int id)
{
	strcpy_s(m_Name, name);
	m_DepartID = departID;
	m_Id = id;
	next = NULL;	
}

//显示职工信息
void Boss::ShowInfo()
{
	cout << "职工编号: " << this->m_Id << endl;
	cout << "职工姓名: " << this->m_Name << endl;
	cout << "所属部门: " << this->GetDepartName() << endl;
	cout << endl;
}

//获取岗位名称
string Boss::GetDepartName()
{
	return string("老板");
}