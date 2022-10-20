#include "Hours.h"
#include "Salary.h"
#include <iostream>
using namespace std;

//����������� ������ hours �� ����� �����������
Hours::Hours(int normal, int overtime, int weekends) {
	if(normal >= 0)
		this->normal = normal;
	else {
		cout << "������� ������������ �������� normal." << endl;
		this->normal = 0;
	}
	if (overtime >= 0)
		this->overtime = overtime;
	else {
		cout << "������� ������������ �������� overtime." << endl;
		this->overtime = 0;
	}
	if (weekends >= 0)
		this->weekends = weekends;
	else {
		cout << "������� ������������ �������� weekends." << endl;
		this->weekends = 0;
	}
}

//����������� ������ hours � ����� ����������
Hours::Hours(int allfields) {
	if(allfields >= 0) {
		normal = allfields;
		overtime = allfields;
		weekends = allfields;
	}
	else {
		cout << "������� ������������ �������� allfields." << endl;
		normal = 0;
		overtime = 0;
		weekends = 0;
	}
}

//����������� ������ hours ��� ����������
Hours::Hours() {
	normal = 0;
	overtime = 0;
	weekends = 0;
}

//����� ��������� ��������
void Hours::set(Hours h) {
	this->normal = h.normal;
	this->overtime = h.overtime;
	this->weekends = h.weekends;
}

//����� ����� ������ hours
void Hours::input() {
	int normal, overtime, weekends;
	cout << "������� ���-�� ������������ �� ����� �����(�����): ";
	cin >> normal;
	cout << "������� ���-�� ������������ �����: ";
	cin >> overtime;
	cout << "������� ���-�� ������������ �� ����� ����� � ��������: ";
	cin >> weekends;
	Hours h(normal, overtime, weekends);
	this->set(h);
}

//����� ������
void Hours::output() {
	cout << "���������� ����� �� �����(�� �������): " << normal << endl;
	cout << "���������� ����� �� �����(�����������): " << overtime << endl;
	cout << "���������� ����� �� �����(� �������� ���): " << weekends << endl;
}

//����� ��������� ������������ �� ����� �����
int Hours::allhours() {
	int all = 0;
	all += normal;
	all += overtime;
	all += weekends;
	return all;
}

//����� ������������ �������� �� ��� ������������ ����
int Hours::hoursmoney(Jobtitle jt, Salary sal) {
	int salary = 0;
	salary += jt.jtmoney(normal);
	salary += sal.overtimeweekends(overtime, weekends);
	return salary;
}