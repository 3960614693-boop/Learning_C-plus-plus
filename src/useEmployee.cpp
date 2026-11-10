#include <iostream>
#include <iomanip>
#include "shared/Employee.h"
using namespace std;
int main()
{
    FullTimeEmployee ft("张三","001",5000,2000);//创建对象
    PartTimeEmployee pt("李四","002",30,200);
    cout << fixed << setprecision(2);
    cout << ft.getlnfo() << ",月薪："<< ft.calculateSalary() << endl;
    cout << pt.getlnfo() << ",月薪："<< pt.calculateSalary() << endl;

    return 0;
}
