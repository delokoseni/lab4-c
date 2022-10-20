#include "Experience.h"
#include <iostream>
using namespace std;

//����������� ������ experience �� ����� �����������
Experience::Experience(int workingyears, int army, int maternityleave) {
	if(workingyears >= 0)
		this->workingyears = workingyears;
	else {
		cout << "������� ������������ �������� workingyears." << endl;
		this->workingyears = 0;
	}
	if (army >= 0)
		this->army = army;
	else {
		cout << "������� ������������ �������� army." << endl;
		this->army = 0;
	}
	if (maternityleave >= 0)
		this->maternityleave = maternityleave;
	else {
		cout << "������� ������������ �������� maternityleave." << endl;
		this->maternityleave = 0;
	}
}

//����������� ������ experience � ����� ����������
Experience::Experience(int allfields) {
	if (allfields >= 0) {
		workingyears = allfields;
		army = allfields;
		maternityleave = allfields;
	}
	else {
		cout << "������� ������������ �������� allfields." << endl;
		workingyears = 0;
		army = 0;
		maternityleave = 0;
	}
}

//����������� ������ experience ��� ����������
Experience::Experience() {
	workingyears = 0;
	army = 0;
	maternityleave = 0;
}

//����� ��������� ��������
void Experience::set(Experience e) {

}

//����� ����� ������ experience
void Experience::input() {
	int workingyears, army, maternityleave;
	cout << "������� ����� ���� (���-�� ���): ";
	cin >> workingyears;
	cout << "�� ��� � ����� (���-�� ���): ";
	cin >> army;
	cout << "�� ��� � ��������� �������(��� - �� ���) :";
	cin >> maternityleave;
	workingyears = workingyears - army - maternityleave;
	Experience e(workingyears, army, maternityleave);
	this->set(e);
}

//����� ������
void Experience::output() {
	cout << "���� (���������� ���): " << workingyears << endl;
	cout << "���� (���-�� ��� � �����): " << army << endl;
	cout << "���� (���-�� ��� � ��������� �������): " << maternityleave << endl;
}

//����� ������������ ���������� ����
float Experience::allexp() {
	int all;
	all = workingyears + army + maternityleave;
	return all;
};