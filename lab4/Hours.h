#pragma once
#include "Jobtitle.h"
#include "Salary.h"

class Hours
{
	friend class Employee;
public:
	Hours(int n, int o, int w);
	Hours(int allfields);
	Hours();
	void input();
	void output();
	int allhours();
	void set(Hours h);
	int hoursmoney(Jobtitle jt, Salary sal);
private:
	int normal; //���-�� �����, ������������ �� �������
	int overtime; //���-�� �����, ������������ �����������
	int weekends; //��� - �� �����, ������������ � �������� ���
};

