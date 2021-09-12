#pragma once
#include <iostream>
#include <string>

using namespace std;

//ְ��������
class Staff {
public:
	Staff() : m_Num(NULL), m_Name(NULL), m_Pos(NULL), m_Duty(NULL) { }
	Staff(const char* num, const char* name, const char* pos, const char* duty);
	~Staff();
	void Show();
private:
	//ְ�����
	char* m_Num;
	//ְ������
	char* m_Name;
	//ְ����λ	���ű��
	char* m_Pos;
	//ְ��ְ��
	char* m_Duty;
};