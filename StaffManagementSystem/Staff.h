#pragma once
#include <iostream>
#include <string>

using namespace std;

//职工抽象类
class Staff {
public:
	Staff() : m_Num(NULL), m_Name(NULL), m_Pos(NULL), m_Duty(NULL) { }
	Staff(const char* num, const char* name, const char* pos, const char* duty);
	~Staff();
	void Show();
private:
	//职工编号
	char* m_Num;
	//职工姓名
	char* m_Name;
	//职工岗位	部门编号
	char* m_Pos;
	//职工职责
	char* m_Duty;
};