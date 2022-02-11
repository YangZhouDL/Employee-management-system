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
	cout << "职工编号： " << m_Id
		<< " \t职工姓名： " << m_Name
		<< " \t岗位：" << getDepartName()
		<< " \t岗位职责：完成经理交给的任务" << endl;
}

string Employee::getDepartName()
{
	return "员工";
}