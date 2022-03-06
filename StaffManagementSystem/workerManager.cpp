#include "workerManager.h"
#include "employee.h"
#include "employeer.h"
#include "boss.h"
#include <iostream>
using namespace std;

//构造函数
WorkerManager::WorkerManager()
{
	m_workers = new Worker*[50];
	m_workerNum = 0;
	m_maxNum = 50;
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
	string name;
	int id;
	int depatID;
	char isContinue;
	do {
		cout << "请输入职工姓名:";
		cin >> name;

		cout << "请输入职工编号";
		cin >> id;

		cout << "请输入职工部门编号";
		cin >> depatID;

		int level;
		cout << "请输入职工职位（1:普通员工/2:经理/3:老板）";
		cin >> level;

		cout << "正在添加中...." << endl;

		Worker* temp = NULL;
		switch (level)
		{
		case 1:
			temp = new Employee(id, name, depatID);
			break;
		case 2:
			temp = new Employeer(id, name, depatID);
			break;
		case 3:
			temp = new Boss(id, name, depatID);
			break;
		default:
			system("CLS");
			cout << "请输入正确的职工职位!" << endl;
			system("PAUSE");
			break;
		}
		if (temp)
		{
			//首先判断数组满了没有
			if (m_workerNum >= m_maxNum)
			{
				//满了就重新申请内存，然后将原本的数据先导入到新内存中
				m_maxNum += 50;
				Worker** bigger = new Worker * [m_maxNum];

			}
			else
			{
				m_workers[m_workerNum] = temp;
				m_workerNum++;
			}
		}

		//添加信息到文件中

		cout << "添加成功!" << endl;
		cout << "是否继续添加职工(Y/N)？" << endl;
		cin >> isContinue;
		//暂时不管输入格式错误的问题
	} while (isContinue == 'Y' || isContinue == 'y');
}

//删除职工
void WorkerManager::DeleteWorker()
{

}

//修改职工信息
void WorkerManager::EditWorkerInfo()
{

}

//查找职工信息
void WorkerManager::SearchWorker()
{

}

//显示职工信息
void WorkerManager::ShowWorkers()
{
	if (m_workerNum == 0)
	{
		cout << "没有检索到职工信息，请先添加职工" << endl;
		return;
	}
	for (int i = 0; i < m_workerNum; i++)
	{
		m_workers[i]->ShowInfo();
		cout << endl;
	}

}

//按照编号排序
void WorkerManager::SortByID()
{

}

//清空所有文档
void WorkerManager::ClearData()
{

}

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
	for (int i = 0; i < m_workerNum; i++)
	{
		delete m_workers[i];
		m_workers[i] = NULL;
	}
	delete m_workers;
	m_workers = NULL;
}

