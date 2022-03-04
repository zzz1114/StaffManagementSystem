#pragma once

#include <iostream>
#include <string>
using namespace std;

//一共有三种员工：普通打工人、经理、老板，首先定义一个职工抽象类
class Worker
{
public:
	//显示个人信息
	virtual void ShowInfo() = 0;

	//获取岗位名称
	virtual string GetDepartName() = 0;

	class Worker* GetNextWorker();
protected:
	char m_Name[20];
	int m_Id;
	int m_DepartID;		//部门id
	class Worker* next;
};