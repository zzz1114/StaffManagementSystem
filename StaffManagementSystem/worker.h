#pragma once

#include <iostream>
#pragma once
#include <string>
#include <iostream>
using namespace std;

//一共有三种员工：普通打工人、经理、老板，首先定义一个职工抽象类
class Worker
{
public:
	//显示个人信息
	void ShowInfo();

	//获取岗位名称
	virtual string GetDepartName() = 0;

	class Worker* GetNextWorker();
protected:
	string m_Name;
	int m_Id;
	int m_DepartID;		//部门id
	class Worker* next;
};