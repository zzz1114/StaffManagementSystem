#pragma once

#include <iostream>
#include "worker.h"

class WorkerManager
{
public:

	//���캯��
	WorkerManager();

	//��������
	~WorkerManager();

	//��ʾ�˵�
	void Show_Menu();

	//���ְ��
	void InsertWorker();

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
	void Exit_System();
private:
	Worker* m_Employee;		//��������
	int m_EmployeeNum;

	Worker* m_Employeer;	//��������
	int m_EmployeerNum;

	Worker* m_Boss;			//�ϰ�����
	int m_BossNum;
};