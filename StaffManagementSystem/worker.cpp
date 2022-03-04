#include <iostream>
#include <string>
#include "worker.h"


class Worker* Worker::GetNextWorker()
{
	if (next == NULL)
		cout << "已经是最后一名员工了" << endl;
	else
		return next;
}