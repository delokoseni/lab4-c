#pragma once
#include "subordinates.h"
#include <string>
using namespace std;

class Jobtitle
{
	friend class Employee;
public:
	Jobtitle(string j, int h, Subordinates s);
	Jobtitle(int allfields);
	Jobtitle();
	void input();
	void output();
	float comparisonhc(float hcost);
	void set(Jobtitle j);
	int jtmoney(int normal);
	int getamount();
	void editjtitle(string jtitle, string add);
private:
	string jtitle; //наименование должности
	int hourlycost; //стоимость часа работы
	Subordinates subs; //подчиненные
};

