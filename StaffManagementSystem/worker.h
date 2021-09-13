#pragma once
#include <iostream>
#include <string>

using namespace std;

//职工抽象类
class Staff {
public:
	Staff() : m_Num(0), m_Name(NULL), m_Pos(0), m_Duty(NULL) { }
	Staff(int num, const char* name, int pos, const char* duty);
	~Staff();

	//显示职工信息
	virtual void Show() = 0;
	
	//获取岗位名称
	virtual string GetPosName() = 0;

protected:

	//职工编号
	int m_Num;

	//职工姓名
	char* m_Name;

	//职工岗位	部门编号
	int m_Pos;

	//职工职责
	char* m_Duty;
};