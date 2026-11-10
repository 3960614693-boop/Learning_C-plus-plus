#ifndef Employee_H
#define Employee_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string id;
public:
    string getlnfo() const;
    Employee(const string & nm="xxx",const string & id_= "xxx");//只需要在这里进行初始化
    virtual double calculateSalary() const =0;//virtual为多态作准备，=0是纯虚函数（只能继承）
};

class FullTimeEmployee : public Employee
{
private:
    double monthlyPay;
    double bonus;
public:
    FullTimeEmployee(const string & nm,const string & id_,double monthlyPay,double bonus);
    double calculateSalary() const override;//重写基类虚函数
};

class PartTimeEmployee : public Employee
{
private:
    double hourlyPay;
    int workHours;
public:
    PartTimeEmployee(const string & nm ,const string & id_ ,double hourlyPay,int workHours);
    double calculateSalary() const override;
};

#endif