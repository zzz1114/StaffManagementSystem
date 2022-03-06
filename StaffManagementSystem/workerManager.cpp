#include "workerManager.h"
#include "employee.h"
#include "employeer.h"
#include "boss.h"
#include <iostream>
using namespace std;

//���캯��
WorkerManager::WorkerManager()
{
	m_workers = new Worker*[50];
	m_workerNum = 0;
	m_maxNum = 50;
}

//�˵�����
void WorkerManager::Show_Menu()
{
	cout << "**********************************************************\n" << endl;
	cout << "*******************   ְ������ϵͳ   *********************\n" << endl;
	cout << "*******************===================********************\n" << endl;
	cout << "***************      1 ����ְ����Ϣ      *****************\n" << endl;
	cout << "***************      2 ɾ����ְְ��      *****************\n" << endl;
	cout << "***************      3 �޸�ְ����Ϣ      *****************\n" << endl;
	cout << "***************      4 ����ְ����Ϣ      *****************\n" << endl;
	cout << "***************      5 ��ʾְ����Ϣ      *****************\n" << endl;
	cout << "***************      6 ���ձ������      *****************\n" << endl;
	cout << "***************      7 ��������ĵ�      *****************\n" << endl;
	cout << "***************      0 �˳��������      *****************\n" << endl;
	cout << "*****************=====================********************" << endl;
	cout << endl;
}

//���ְ��
void WorkerManager::InsertWorker()
{
	string name;
	int id;
	int depatID;
	char isContinue;
	do {
		cout << "������ְ������:";
		cin >> name;

		cout << "������ְ�����";
		cin >> id;

		cout << "������ְ�����ű��";
		cin >> depatID;

		int level;
		cout << "������ְ��ְλ��1:��ͨԱ��/2:����/3:�ϰ壩";
		cin >> level;

		cout << "���������...." << endl;

		Worker* temp = NULL;
		switch (level)
		{
		case 1:
			temp = new Employee(id, name, depatID);
			break;
		case 2:
			temp = new Employeer(id, name, depatID);
			break;
		case 3:
			temp = new Boss(id, name, depatID);
			break;
		default:
			system("CLS");
			cout << "��������ȷ��ְ��ְλ!" << endl;
			system("PAUSE");
			break;
		}
		if (temp)
		{
			//�����ж���������û��
			if (m_workerNum >= m_maxNum)
			{
				//���˾����������ڴ棬Ȼ��ԭ���������ȵ��뵽���ڴ���
				m_maxNum += 50;
				Worker** bigger = new Worker * [m_maxNum];

			}
			else
			{
				m_workers[m_workerNum] = temp;
				m_workerNum++;
			}
		}

		//�����Ϣ���ļ���

		cout << "��ӳɹ�!" << endl;
		cout << "�Ƿ�������ְ��(Y/N)��" << endl;
		cin >> isContinue;
		//��ʱ���������ʽ���������
	} while (isContinue == 'Y' || isContinue == 'y');
}

//ɾ��ְ��
void WorkerManager::DeleteWorker()
{

}

//�޸�ְ����Ϣ
void WorkerManager::EditWorkerInfo()
{

}

//����ְ����Ϣ
void WorkerManager::SearchWorker()
{

}

//��ʾְ����Ϣ
void WorkerManager::ShowWorkers()
{
	if (m_workerNum == 0)
	{
		cout << "û�м�����ְ����Ϣ���������ְ��" << endl;
		return;
	}
	for (int i = 0; i < m_workerNum; i++)
	{
		m_workers[i]->ShowInfo();
		cout << endl;
	}

}

//���ձ������
void WorkerManager::SortByID()
{

}

//��������ĵ�
void WorkerManager::ClearData()
{

}

//�˳�ϵͳ
void WorkerManager::Exit_System()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��������
WorkerManager::~WorkerManager()
{
	for (int i = 0; i < m_workerNum; i++)
	{
		delete m_workers[i];
		m_workers[i] = NULL;
	}
	delete m_workers;
	m_workers = NULL;
}

