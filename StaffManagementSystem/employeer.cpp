#include <iostream>
#include <string>
#include "employeer.h"
using namespace std;

//经理

Employeer::Employeer(int departID, const char* name, int id)
{
	strcpy_s(m_Name, name);
	m_DepartID = departID;
	m_Id = id;
	next = NULL;
}

//显示职工信息
void Employeer::ShowInfo()
{
	cout << "职工编号" << this->m_Id << endl;
	cout << "职工姓名" << this->m_Name << endl;
	cout << "所属部门" << this->GetDepartName() << endl;
	cout << endl;
}

string Employeer::GetDepartName()
{
	return string("经理");
}