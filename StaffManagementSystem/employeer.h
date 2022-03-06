#include <iostream>
#include <string>
#include "worker.h"

class Employeer : public Worker {
public:
	Employeer(int departID, string name, int id);

	//显示职工信息
	void ShowInfo();

	//获取岗位名称
	string GetDepartName();
};