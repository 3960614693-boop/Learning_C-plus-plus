#include "Fruit.h"
#include <iostream>
#include <iomanip>

int main()
{
    Fruit* fruits[4]=
    {
        new Apple(),
        new Banana(),
        new Watermelon(),
        new Strawberry()
    };//指针数组（存放地址对应抽象类）！
    double weight[4];
    cout << "请依次输入苹果，香蕉，西瓜，草莓的重量（kg）:" << endl;
    for(int i=0;i<4;i++)
    {
        cin >> weight[i];
    }

    double total = 0.0;
    for(int i=0;i<4;i++)
    {
        total += fruits[i]->pricePerKg() * weight[i];//运行时多态 ！
    }
    cout << fixed << setprecision(2);
    cout << "总价" << total << endl;

    for(int i=0;i<4;i++)
    {
        delete fruits[i];
    }
    return 0;
    
}