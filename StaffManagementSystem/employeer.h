#pragma once

#include <iostream>
#include "worker.h"

class Employeer : public Worker {
public:
	Employeer(int departID, const char* name, int id);

	//��ʾְ����Ϣ
	void ShowInfo();

	//��ȡ��λ����
	string GetDepartName();
};