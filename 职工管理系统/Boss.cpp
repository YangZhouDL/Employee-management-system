#include "Boss.h"
#include <iostream>
using namespace std;

Boss::Boss(int id, string name, int departID)
{
	m_Id = id;
	m_Name = name;
	m_DepartId = departID;
}

void Boss::showInfo()
{
	cout << "ְ����ţ� " << m_Id
		<< " \tְ�������� " << m_Name
		<< " \t��λ��" << getDepartName()
		<< " \t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDepartName()
{
	return "����";
}