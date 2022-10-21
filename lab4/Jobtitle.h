#pragma once
#include "Subordinates.h"
#include <string>
using namespace std;

class Jobtitle
{
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

