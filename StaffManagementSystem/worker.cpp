#include <iostream>
#include <string>
#include "worker.h"


//��ʾְ����Ϣ
void Worker::ShowInfo()
{
	cout << "ְ�����: " << this->m_Id << endl;
	cout << "ְ������: " << this->m_Name << endl;
	cout << "��������: " << this->GetDepartName() << endl;
	cout << endl;
}

class Worker* Worker::GetNextWorker()
{
	if (next == NULL)
		cout << "�Ѿ������һ��Ա����" << endl;
	else
		return next;
}