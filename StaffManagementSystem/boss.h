#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Boss : public Worker {
public:
	Boss(int departID, const char* name, int id);

	//显示职工信息
	void ShowInfo();

	//获取岗位名称
	string GetDepartName();
};