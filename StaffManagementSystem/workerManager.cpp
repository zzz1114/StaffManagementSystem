#include "workerManager.h"
#include <iostream>
using namespace std;

//构造函数
WorkerManager::WorkerManager()
{
	m_Employee = NULL;
	m_Employeer = NULL;
	m_Boss = NULL;

	m_EmployeeNum = 0;
	m_EmployeerNum = 0;
	m_BossNum = 0;
}

//菜单界面
void WorkerManager::Show_Menu()
{
	cout << "**********************************************************\n" << endl;
	cout << "*******************   职工管理系统   *********************\n" << endl;
	cout << "*******************===================********************\n" << endl;
	cout << "***************      1 增加职工信息      *****************\n" << endl;
	cout << "***************      2 删除离职职工      *****************\n" << endl;
	cout << "***************      3 修改职工信息      *****************\n" << endl;
	cout << "***************      4 查找职工信息      *****************\n" << endl;
	cout << "***************      5 显示职工信息      *****************\n" << endl;
	cout << "***************      6 按照编号排序      *****************\n" << endl;
	cout << "***************      7 清空所有文档      *****************\n" << endl;
	cout << "***************      0 退出管理程序      *****************\n" << endl;
	cout << "*****************=====================********************" << endl;
	cout << endl;
}

//添加职工
void WorkerManager::InsertWorker()
{
	char name[20] = { 0 };
	int id;
	int depar_id;

	cout << "请输入职工姓名:";
	cin >> name;

	cout << "请输入职工编号";
	cin >> id;

	cout << "请输入职工部门编号";
	cin >> depar_id;

	int level;
	cout << "请输入职工职位（1:普通员工/2:经理/3:老板）";
	cin >> level;
	
	Worker* temp = NULL;
	switch (level)
	{
	case 1:
		temp = m_Employee->GetNextWorker();
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}

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
void WorkerManager::Exit_System()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//析构函数
WorkerManager::~WorkerManager()
{
	delete m_Employee;
	m_Employee = NULL;

	delete m_Employeer;
	m_Employeer = NULL;

	delete m_Boss;
	m_Boss = NULL;
}

