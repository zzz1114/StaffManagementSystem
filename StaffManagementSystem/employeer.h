#pragma once

#include <iostream>
#include "worker.h"

class Employeer : public Staff {
public:
	Employeer(int num, const char* name, int pos, const char* duty) : Staff(num, name, pos, duty) { }

	//��ʾְ����Ϣ
	void Show();

	//��ȡ��λ����
	string GetPosName();
};