#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int id, string name, int departID)
{
	m_Id = id;
	m_Name = name;
	m_DepartId = departID;
}

void Employee::showInfo()
{
	cout << "ְ����ţ� " << m_Id
		<< " \tְ�������� " << m_Name
		<< " \t��λ��" << getDepartName()
		<< " \t��λְ����ɾ�����������" << endl;
}

string Employee::getDepartName()
{
	return "Ա��";
}