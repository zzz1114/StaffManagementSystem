#include <iostream>
#include <string>
#include "worker.h"

class Employeer : public Worker {
public:
	Employeer(int departID, string name, int id);

	//��ʾְ����Ϣ
	void ShowInfo();

	//��ȡ��λ����
	string GetDepartName();
};