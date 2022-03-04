#pragma once

#include <iostream>
#include "worker.h"

class WorkerManager
{
public:

	//构造函数
	WorkerManager();

	//析构函数
	~WorkerManager();

	//显示菜单
	void Show_Menu();

	//添加职工
	void InsertWorker();

	//删除职工
	void DeleteWorker();

	//修改职工信息
	void EditWorkerInfo();

	//查找职工信息
	void SearchWorker();

	//显示职工信息
	void ShowWorkers();

	//按照编号排序
	void SortByID();

	//清空所有文档
	void ClearData();

	//退出系统
	void Exit_System();
private:
	Worker* m_Employee;		//打工人链表
	int m_EmployeeNum;

	Worker* m_Employeer;	//经理链表
	int m_EmployeerNum;

	Worker* m_Boss;			//老板链表
	int m_BossNum;
};