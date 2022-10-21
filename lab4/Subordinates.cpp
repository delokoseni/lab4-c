#include "Subordinates.h"
#include <iostream>
using namespace std;


//����������� ������ subordinates �� ����� �����������
Subordinates::Subordinates(int amount, float asos) {
	if (amount >= 0)
		this->amount = amount;
	else{
		cout << "������� ������������ �������� amount." << endl;
		this->amount = 0;
	}
	if (asos >= 0)
		this->asos = asos;
	else {
		cout << "������� ������������ �������� asos." << endl;
		this->asos = 0;
	}
}

//����������� ������ subordinates � ����� ����������
Subordinates::Subordinates(int allfields) {
	if (allfields >= 0) {
		amount = allfields;
		asos = allfields;
	}
	else {
		cout << "������� ������������ �������� allfields." << endl;
		amount = 0;
		asos = 0;
	}
}

//����������� ������ subordinates ��� ����������
Subordinates::Subordinates() {
	amount = 0;
	asos = 0;
}

//����� ��������� ��������
void Subordinates::set(Subordinates s) {
	this->amount = s.amount;
	this->asos = s.asos;
}

//����� ����� ������ subordinates
void Subordinates::input() {
	int YesNo, amount;
	float asos;
	cout << "������� ���������� ����������� ����������: ";
	cin >> amount;
	if (amount > 0) {
		cout << "�� ������ ������� ���� �����������? 1 - ��, 0 - ���: ";
		cin >> YesNo;
		if (YesNo == 1) {
			cout << "������� ������� ���� ����������� ����������: ";
			cin >> asos;
		}
		else {
			asos = this->averageseniority(this->amount);
		}
	}
	else
		asos = 0;
	Subordinates s(amount, asos);
	this->set(s);
}

//����� ������
void Subordinates::output() {
	cout << "���-�� �����������: " << amount << endl;
	cout << "������� ���� �����������: " << asos << endl;
}

//����� �������� �������� �����
float Subordinates::averageseniority(int number) {
	float* arr = new float[2 * number];
	int i;
	float avesen = 0;
	cout << "������� ������� ����� ����� ��� �����, ����� ������!" << endl;
	for (i = 0; i < 2 * number; i++) {
		cin >> *(arr + i);
	}
	for (i = 0; i < 2 * number; i += 2) {
		avesen += *(arr + i);
		avesen += *(arr + i + 1) / 12;
	}
	avesen = avesen / number;
	return avesen;
}

//����� ������������ ���������� �����������
int Subordinates::getamount() {
	return amount;
}