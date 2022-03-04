#include "workerManager.h"
#include <iostream>
using namespace std;

//���캯��
WorkerManager::WorkerManager()
{
	m_Employee = NULL;
	m_Employeer = NULL;
	m_Boss = NULL;

	m_EmployeeNum = 0;
	m_EmployeerNum = 0;
	m_BossNum = 0;
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
	char name[20] = { 0 };
	int id;
	int depar_id;

	cout << "������ְ������:";
	cin >> name;

	cout << "������ְ�����";
	cin >> id;

	cout << "������ְ�����ű��";
	cin >> depar_id;

	int level;
	cout << "������ְ��ְλ��1:��ͨԱ��/2:����/3:�ϰ壩";
	cin >> level;
	
	Worker* temp = NULL;
	switch (level)
	{
	case 1:
		temp = m_Employee->GetNextWorker();
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}

//ɾ��ְ��
void DeleteWorker();

//�޸�ְ����Ϣ
void EditWorkerInfo();

//����ְ����Ϣ
void SearchWorker();

//��ʾְ����Ϣ
void ShowWorkers();

//���ձ������
void SortByID();

//��������ĵ�
void ClearData();

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
	delete m_Employee;
	m_Employee = NULL;

	delete m_Employeer;
	m_Employeer = NULL;

	delete m_Boss;
	m_Boss = NULL;
}

