#pragma once
#include <iostream>
#include <string>

using namespace std;

//ְ��������
class Staff {
public:
	Staff() : m_Num(0), m_Name(NULL), m_Pos(0), m_Duty(NULL) { }
	Staff(int num, const char* name, int pos, const char* duty);
	~Staff();

	//��ʾְ����Ϣ
	virtual void Show() = 0;
	
	//��ȡ��λ����
	virtual string GetPosName() = 0;

protected:

	//ְ�����
	int m_Num;

	//ְ������
	char* m_Name;

	//ְ����λ	���ű��
	int m_Pos;

	//ְ��ְ��
	char* m_Duty;
};