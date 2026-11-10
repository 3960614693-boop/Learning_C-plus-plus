#include "shared/Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const string & nm,const string & id_):name(nm),id(id_){}//初始化列表（开始前直接赋值）基类构造函数

string Employee::getlnfo() const
{
    return "姓名：" + name +", 工号：" + id ;//实现

}

FullTimeEmployee::FullTimeEmployee(const string & nm,const string & id_,double monthlyPay,double bonus):Employee(nm,id_),monthlyPay(monthlyPay),bonus(bonus){}//初始化自己独有成员 通过基类构造函数间接访问private

double FullTimeEmployee::calculateSalary() const
{
    return monthlyPay + bonus;//重写计算（在这里而不是头文件）
}

PartTimeEmployee::PartTimeEmployee(const string & nm,const string & id_,double hourlyPay,int workHours):Employee(nm,id_),hourlyPay(hourlyPay),workHours(workHours){}

double PartTimeEmployee::calculateSalary() const
{
    if(workHours<=160)
    {
        return hourlyPay * workHours;
    }
    else
    {
        return hourlyPay * 160 + (workHours-160) * hourlyPay * 1.5;
    }
}







