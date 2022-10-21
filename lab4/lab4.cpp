﻿#include "Employee.h"
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int years = 10;
    int armyyears = 1;
    int materyears = 0;
    Experience exp1;
    Experience exp2(years);
    Experience exp3(years, armyyears, materyears);
    exp1.input();
    cout << "\n" << "exp1:" << endl;
    exp1.output();
    cout << "\n" << "exp2:" << endl;
    exp2.output();
    cout << "\n" << "exp3:" << endl;
    exp3.output();
    cout << "\n" << "Совокупный стаж exp3: " << exp3.allexp() << endl;
    int norm = 120;
    int over = 10;
    int week = 10;
    Hours h1;
    Hours h2(norm);
    Hours h3(norm, over, week);
    h1.input();
    cout << "\n" << "h1:" << endl;
    h1.output();
    cout << "\n" << "h2:" << endl;
    h2.output();
    cout << "\n" << "h3:" << endl;
    h3.output();
    cout << "\n" << "Отработано всего часов h3: " << h3.allhours() << endl;
    int a = 6;
    float b = 1.2f;
    Subordinates sub1;
    Subordinates sub2(a);
    Subordinates sub3(a, b);
    sub1.input();
    cout << "\n" << "sub1:" << endl;
    sub1.output();
    cout << "\n" << "sub2:" << endl;
    sub2.output();
    cout << "\n" << "sub3:" << endl;
    sub3.output();
    string str = "Менеджер по продажам";
    Jobtitle jt1;
    Jobtitle jt2(over);
    Jobtitle jt3(str, over, sub1);
    while (getchar() != '\n');
    jt1.input();
    cout << "\n" << "jt1:" << endl;
    jt1.output();
    cout << "\n" << "jt2:" << endl;
    jt2.output();
    cout << "\n" << "jt3:" << endl;
    jt3.output();
    cout << "Почасовая оплата jt1 выше/ниже 120 на " << jt1.comparisonhc(norm) << " процентов";
    Employee emp1;
    Employee emp2(10);
    Employee emp3(exp1, h1, jt3);
    Employee* emp4;
    Employee* emp5 = new Employee;
    emp4 = emp3.get();
    *emp5 = emp3.getadress();
    string jobt1 = "Менеджер";
    string jobt2 = "Менеджер по закупкам";
    string jobt3 = "Менеджер по менеджерам";
    Jobtitle a1(jobt1, over, sub1);
    Jobtitle a2(jobt2, over, sub1);
    Jobtitle a3(jobt3, over, sub1);
    Employee p1(exp1, h1, a1);
    Employee p2(exp1, h1, a2);
    Employee p3(exp1, h1, a3);
    p1.editjtitle("Менеджер", "Старший");
    p2.editjtitle("Менеджер", "Старший");
    p3.editjtitle("Менеджер", "Старший");
    p1.output();
    p2.output();
    p3.output();
    emp1.input();
    cout << "\n" << "emp1:" << endl;
    emp1.output();
    cout << "\n" << "emp2:" << endl;
    emp2.output();
    emp5->editjtitle("Менеджер", "Старший");
    cout << "\n" << "emp5:" << endl;
    emp5->output();
    emp4->editjtitle("Менеджер", "Младший");
    cout << "\n" << "emp4:" << endl;
    emp4->output();
    cout << "\n" << "emp3:" << endl;
    emp3.output();
    cout << emp1.getpremium(150) << endl;
    Salary sal1;
    Salary sal2(5);
    Salary sal3(50, 100, 5, 10, true, true);
    sal1.input();
    cout << "\n" << "sal1:" << endl;
    sal1.output();
    cout << "\n" << "sal2:" << endl;
    sal2.output();
    cout << "\n" << "sal3:" << endl;
    sal3.output();
    cout << "\nЗарплата emp1 при sal3: " << emp1.getsalary(sal3) << endl;
    p1.printcounter();
    p2.minuscounter();
    p1.minuscounter(2);

}