#include <iostream>
#include <string>
#include "employeer.h"
using namespace std;

//显示职工信息
void Employeer::Show()
{
	cout << "职工编号：" << this->m_Num << "\n"
		<< "职工姓名：" << this->m_Name << "\n"
		<< "职工岗位：" << this->GetPosName() << "\n"
		<< "职工职责：" << this->m_Duty << endl;
}

string Employeer::GetPosName()
{
	return "部门经理";
}