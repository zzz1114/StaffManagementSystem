#include <iostream>
#include "Staff.h"

Staff::Staff(const char* num, const char* name, const char* pos, const char* duty)
{
	m_Num = new char[sizeof(num) + 1];
	strcpy_s(m_Num, sizeof(num), num);

	m_Name = new char[sizeof(name) + 1];
	strcpy_s(m_Name, sizeof(name), name);

	m_Pos = new char[sizeof(pos) + 1];
	strcpy_s(m_Pos, sizeof(pos), pos);

	m_Duty = new char[sizeof(duty) + 1];
	strcpy_s(m_Duty, sizeof(duty), duty);
}

Staff::~Staff()
{
	if (m_Num != NULL)
	{
	 	delete[] m_Num;
		m_Num = NULL;
	}
	if (m_Name != NULL)
	{
	 	delete[] m_Name;
		m_Name = NULL;
	}
	if (m_Pos != NULL)
	{
	 	delete[] m_Pos;
		m_Pos = NULL;
	}
	if (m_Duty != NULL)
	{
	 	delete[] m_Duty;
		m_Duty = NULL;
	}
}

void Staff::Show()
{
	cout << "职工姓名:" << m_Name << endl;
	cout << "职工编号:" << m_Num << endl;
	cout << "职工岗位:" << m_Pos << endl;
	cout << "职工职责:" << m_Duty << endl;
}