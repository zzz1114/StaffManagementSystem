#pragma once

#include <iostream>
#include <string>
using namespace std;

//һ��������Ա������ͨ���ˡ������ϰ壬���ȶ���һ��ְ��������
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void ShowInfo() = 0;

	//��ȡ��λ����
	virtual string GetDepartName() = 0;

	class Worker* GetNextWorker();
protected:
	char m_Name[20];
	int m_Id;
	int m_DepartID;		//����id
	class Worker* next;
};