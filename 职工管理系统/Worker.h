#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
	int m_Id;			//职工编号
	string m_Name;		//职工姓名
	int m_DepartId;		//职工所在部门名称编号

	virtual void showInfo() = 0;
	virtual string getDepartName() = 0;
};