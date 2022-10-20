#include "Employee.h"
#include <string>
#include <stdio.h>
#include <iostream>

int Employee::counter = 0;
//����������� ������ employee �� ����� �����������
Employee::Employee(Experience e, Hours h, Jobtitle j) {
	counter++;
	id = counter;
	exp = e;
	hour = h;
	jt = j;
}

//����������� ������ employee � ����� ����������
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
		cout << "������� ������������ �������� allfields.";
		Experience e;
		Hours h;
		Jobtitle j;
		exp = e;
		hour = h;
		jt = j;
	}
}

//����������� ������ employee ��� ����������
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

//����� ������� ������ employee
void Employee::output() {
	cout << "ID: " << this->id << endl;
	exp.output();
	hour.output();
	jt.output();
}

//����� ����� employee
void Employee::input() {
	exp.input();
	hour.input();
	while (getchar() != '\n');
	jt.input();
}

//����� �������� ��������
int Employee::getsalary(Salary sal){
	int salary = 0;
	salary += hour.hoursmoney(jt, sal);
	salary = sal.allmoney(salary, exp, jt);
	return salary;
}

//����� �������� ������ (�������� ��� ���)
string Employee::getpremium(int houramount) {
	if (hour.allhours() < houramount)
		return "������ �� ��������";
	else
		return "������ ��������";
}

/**  ����� ������ �������� ���������� ����������� **/
void Employee::printcounter() {
	cout << "���������� �����������: " + counter << endl;
}
void Employee::minuscounter() {
	counter--;
	cout <<"���������� ����������� ��������� �� 1." << endl;
}
/** ����� ���������� ���������� ����������� **/
void Employee::minuscounter(int number) {
	int x = counter;
	counter = counter - number;
	cout << "���������� ����������� ��������� c " << x << " �� " << counter << endl;
}

/** ����� ��������� � ������ ����������� ������ **/
void Employee::editjtitle(string jtitle, string add) {
	jt.editjtitle(jtitle, add);
}