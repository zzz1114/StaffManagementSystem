#pragma once

#include <iostream>
#pragma once
#include <string>
#include <iostream>
using namespace std;

//һ��������Ա������ͨ���ˡ������ϰ壬���ȶ���һ��ְ��������
class Worker
{
public:
	//��ʾ������Ϣ
	void ShowInfo();

	//��ȡ��λ����
	virtual string GetDepartName() = 0;

	class Worker* GetNextWorker();
protected:
	string m_Name;
	int m_Id;
	int m_DepartID;		//����id
	class Worker* next;
};