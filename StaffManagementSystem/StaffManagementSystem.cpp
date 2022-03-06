// StaffManagementSystem.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <string>
#include "worker.h"
#include "employee.h"
#include "employeer.h"
#include "boss.h"
#include "workerManager.h"

using namespace std;

void testClass()
{
	Worker* worker = NULL;
	worker = new Employee(2, "大张", 1005);
	worker->ShowInfo();
	delete worker;	//这里要记得清理掉这块内存

	worker = new Employeer(3, "小记", 1002);
	worker->ShowInfo();
	delete worker;

	worker = new Boss(1, "老王", 1000);
	worker->ShowInfo();
	delete worker;
	worker = NULL;
	system("pause");
}

int main()
{
	//testClass();
	 
	WorkerManager manage;
	int choice = 9;
	while (true)
	{
		manage.Show_Menu();
		cout << "请输入功能序号： ";
		cin >> choice;

		switch (choice)
		{
		case 0:	//退出系统
			manage.Exit_System();
			break;
		case 1:	//增加职工
			manage.InsertWorker();
			break;
		case 2:	//删除职工
			manage.DeleteWorker();
			break;
		case 3:	//修改职工
			manage.EditWorkerInfo();
			break;
		case 4:	//查找职工
			manage.SearchWorker();
			break;
		case 5:	//显示员工
			manage.ShowWorkers();
			break;
		case 6:	//按照编号排序
			manage.SortByID();
			break;
		case 7:	//清空文档
			manage.ClearData();
			break;
		default:
			cout << "请选择正确的序号！！" << endl;
			break;
		}
		//cout << "\n按任意键继续..." << endl;
		//fflush(stdin);
		//getchar();
		system("pause");
		system("cls");
	}

	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
