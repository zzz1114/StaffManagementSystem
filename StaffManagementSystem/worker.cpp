#include <iostream>
#include <string>
#include "worker.h"


Staff::Staff(int num, const char* name, int pos, const char* duty)
{
	m_Num = num;
	m_Pos = pos;

	m_Name = new char[strlen(name) + 1];
	strcpy_s(m_Name, strlen(name) + 1, name);

	m_Duty = new char[strlen(duty) + 1];
	strcpy_s(m_Duty, strlen(duty) + 1, duty);
}

Staff::~Staff()
{
	if (m_Name != NULL)
	{
	 	delete[] m_Name;
		m_Name = NULL;
	}
	if (m_Duty != NULL)
	{
	 	delete[] m_Duty;
		m_Duty = NULL;
	}
}

void Staff::Show()
{
	cout << "ְ������:" << m_Name << endl;
	cout << "ְ�����:" << m_Num << endl;
	cout << "ְ����λ:" << m_Pos << endl;
	cout << "ְ��ְ��:" << m_Duty << endl;
}