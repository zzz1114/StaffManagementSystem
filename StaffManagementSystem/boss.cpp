#include "boss.h"

Boss::Boss(int departID, const char* name, int id)
{
	strcpy_s(m_Name, name);
	m_DepartID = departID;
	m_Id = id;
	next = NULL;	
}

//��ʾְ����Ϣ
void Boss::ShowInfo()
{
	cout << "ְ�����: " << this->m_Id << endl;
	cout << "ְ������: " << this->m_Name << endl;
	cout << "��������: " << this->GetDepartName() << endl;
	cout << endl;
}

//��ȡ��λ����
string Boss::GetDepartName()
{
	return string("�ϰ�");
}