#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Boss : public Staff {
public:
	Boss(int num, const char* name, int pos, const char* duty) : Staff(num, name, pos, duty) { }

	//��ʾְ����Ϣ
	void Show();

	//��ȡ��λ����
	string GetPosName();
};