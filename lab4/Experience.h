#pragma once
class Experience
{
public:
	Experience(int w, int a, int m);
	Experience(int x);
	Experience();
	void input();
	void output();
	float allexp();
	void set(Experience e);
private:
	int workingyears; //���-�� ������� ������������ ���
	int army; //���-�� ��� � �����, ���� ����������� ������� �����
	int maternityleave; //���-�� ��� � ��������� �������, ���� ����������� ������� �����
};

