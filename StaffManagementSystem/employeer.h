#pragma once

#include <iostream>
#include "worker.h"

class Employeer : public Staff {
public:
	Employeer(int num, const char* name, int pos, const char* duty) : Staff(num, name, pos, duty) { }

	//显示职工信息
	void Show();

	//获取岗位名称
	string GetPosName();
};