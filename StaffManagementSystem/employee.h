#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Employee : public Staff {
public:
	Employee(int num, const char* name, int pos, const char* duty) : Staff(num, name, pos, duty) { }

	//��ʾְ����Ϣ
	void Show();

	//��ȡ��λ����
	string GetPosName();
};