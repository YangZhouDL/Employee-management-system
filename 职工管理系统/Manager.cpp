#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager(int id, string name, int departID)
{
	m_Id = id;
	m_Name = name;
	m_DepartId = departID;
}

void Manager::showInfo()
{
	cout << "ְ����ţ� " << m_Id
		<< " \tְ�������� " << m_Name
		<< " \t��λ��" << getDepartName()
		<< " \t��λְ������ϰ彻��������,���·������Ա��" << endl;
}

string Manager::getDepartName()
{
	return "����";
}