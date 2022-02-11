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
	cout << "职工编号： " << m_Id
		<< " \t职工姓名： " << m_Name
		<< " \t岗位：" << getDepartName()
		<< " \t岗位职责：完成老板交给的任务,并下发任务给员工" << endl;
}

string Manager::getDepartName()
{
	return "经理";
}