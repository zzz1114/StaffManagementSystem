#include <iostream>
#include <string>
#include "worker.h"


class Worker* Worker::GetNextWorker()
{
	if (next == NULL)
		cout << "�Ѿ������һ��Ա����" << endl;
	else
		return next;
}