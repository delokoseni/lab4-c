#pragma once
#include "Experience.h"
#include "Hours.h"
#include "Jobtitle.h"
#include "Subordinates.h"
using namespace std;

class Employee {
public:
	Employee(Experience e, Hours h, Jobtitle j);
	Employee(int allfields);
	Employee();
	void output();
	void input();
	int getsalary(Salary sal);
	string getpremium(int houramount);
	static void printcounter();
	static void minuscounter();
	static void minuscounter(int number);
	void editjtitle(string jtitle, string add);
	Employee* get();
	Employee& getadress();
private:
	static int counter;
	int id; //индивидуальный номер
	Experience exp; //стаж
	Hours hour; //отработанные за месяц часы
	Jobtitle jt; //должность
};
