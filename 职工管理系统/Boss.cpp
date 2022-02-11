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
	cout << "职工编号： " << m_Id
		<< " \t职工姓名： " << m_Name
		<< " \t岗位：" << getDepartName()
		<< " \t岗位职责：管理公司所有事务" << endl;
}

string Boss::getDepartName()
{
	return "经理";
}