#include "Employee.h"
#include <string>
#include <stdio.h>
#include <iostream>

int Employee::counter = 0;
//конструктор класса employee со всеми параметрами
Employee::Employee(Experience e, Hours h, Jobtitle j) {
	counter++;
	id = counter;
	exp = e;
	hour = h;
	jt = j;
}

//конструктор класса employee с одним параметром
Employee::Employee(int allfields) {
	counter++;
	id = counter;
	if (allfields >= 0) {
		Experience e(allfields);
		Hours h(allfields);
		Jobtitle j(allfields);
		exp = e;
		hour = h;
		jt = j;
	}
	else {
		cout << "”казано недопустимое значение allfields.";
		Experience e;
		Hours h;
		Jobtitle j;
		exp = e;
		hour = h;
		jt = j;
	}
}

//конструктор класса employee без параметров
Employee::Employee() {
	counter++;
	id = counter;
	Experience e;
	Hours h;
	Jobtitle j;
	exp = e;
	hour = h;
	jt = j;
}

//метод полного вывода employee
void Employee::output() {
	cout << "ID: " << this->id << endl;
	exp.output();
	hour.output();
	jt.output();
}

//метод ввода employee
void Employee::input() {
	exp.input();
	hour.input();
	while (getchar() != '\n');
	jt.input();
}

//метод подсчета зарплаты
int Employee::getsalary(Salary sal){
	int salary = 0;
	salary += hour.hoursmoney(jt, sal);
	salary = sal.allmoney(salary, exp, jt);
	return salary;
}

//метод подсчета премии (положена или нет)
string Employee::getpremium(int houramount) {
	if (hour.allhours() < houramount)
		return "ѕреми€ не положена";
	else
		return "ѕреми€ положена";
}

/**  ћетод вывода счетчика количества сотрудников **/
void Employee::printcounter() {
	cout << " оличество сотрудников: " + counter << endl;
}
void Employee::minuscounter() {
	counter--;
	cout <<" оличество сотрудников уменьшено на 1." << endl;
}
/** ћетод уменьшени€ количества сотрудников **/
void Employee::minuscounter(int number) {
	int x = counter;
	counter = counter - number;
	cout << " оличество сотрудников уменьшено c " << x << " до " << counter << endl;
}

/** ћетод обращени€ к методу внутреннего класса **/
void Employee::editjtitle(string jtitle, string add) {
	jt.editjtitle(jtitle, add);
}