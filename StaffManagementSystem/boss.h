#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Boss : public Worker {
public:
	Boss(int departID, const char* name, int id);

	//��ʾְ����Ϣ
	void ShowInfo();

	//��ȡ��λ����
	string GetDepartName();
};