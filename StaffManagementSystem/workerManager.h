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
	Worker* *m_workers;	//父类指针数组，用于存储所有的子类对象指针
	int m_workerNum;
	int m_maxNum;		//已经申请的内存大小（几个worker）
};