#include "boss.h"
 
//�ϰ�
Boss::Boss(int departID, string name, int id)
{
	m_Name = name;
	m_DepartID = departID;
	m_Id = id;	
}

//��ȡ��λ����
string Boss::GetDepartName()
{
	return string("�ϰ�");
}