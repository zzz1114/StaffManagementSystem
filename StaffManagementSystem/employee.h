#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Employee : public Worker {
public:
	//���������ű�š�ְ�����
	Employee(int departID, const char* name, int id);

	//��ʾְ����Ϣ
	void ShowInfo();

	//��ȡ��λ����
	string GetDepartName();
};