#pragma once

class Subordinates
{
public:
	Subordinates(int a, float A);
	Subordinates(int allfields);
	Subordinates();
	void input();
	void output();
	float averageseniority(int number);
	void set(Subordinates s);
	int getamount();
private:
	int amount; //���-�� �����������
	float asos; //average seniority of subordinates - ������� ���� �����������
};