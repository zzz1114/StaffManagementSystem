#include <iostream>
#include <string>
#include "worker.h"


//显示职工信息
void Worker::ShowInfo()
{
	cout << "职工编号: " << this->m_Id << endl;
	cout << "职工姓名: " << this->m_Name << endl;
	cout << "所属部门: " << this->GetDepartName() << endl;
	cout << endl;
}

class Worker* Worker::GetNextWorker()
{
	if (next == NULL)
		cout << "已经是最后一名员工了" << endl;
	else
		return next;
}