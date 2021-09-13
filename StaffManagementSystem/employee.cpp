#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

//显示职工信息
void Employee::Show()
{
	cout << "职工编号：" << this->m_Num << "\n"
		<< "职工姓名：" << this->m_Name << "\n"
		<< "职工岗位：" << this->GetPosName() << "\n"
		<< "职工职责：" << this->m_Duty << endl;
}

string Employee::GetPosName()
{
	return "普通员工";
}