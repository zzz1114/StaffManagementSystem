#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Employee : public Worker {
public:
	//姓名、部门编号、职工编号
	Employee(int departID, const char* name, int id);

	//显示职工信息
	void ShowInfo();

	//获取岗位名称
	string GetDepartName();
};