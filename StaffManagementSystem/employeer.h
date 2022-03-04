#pragma once

#include <iostream>
#include "worker.h"

class Employeer : public Worker {
public:
	Employeer(int departID, const char* name, int id);

	//显示职工信息
	void ShowInfo();

	//获取岗位名称
	string GetDepartName();
};