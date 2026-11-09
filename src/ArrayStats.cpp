#include "shared/ArrayStats.h"
#include <iostream>
using namespace std;

ArrayStats::ArrayStats(const int arr[],int len):length(len)//在进入构造函数体 {} 之前，直接把成员变量 length 初始化为参数 len 的值
{
    if(len>0)
    {
        data = new int[len];
        for(int i = 0;i<len;i++)
        {
            data[i]=arr[i];
        }
    }
    else
    {
        len = 0;
        data = 0;
    }
}

ArrayStats::~ArrayStats(){
    delete[] data;
    length =0;
}

int ArrayStats::getMax() const
{
    if(length==0)
    {
        cout << "重新输入" << endl;
        return 0;
    }
    else
    {
        int max = -1;
        for(int i =0;i<length;i++)
        {
            if(data[i]>max)
            {
                max = data[i];
            }
        }
    return max;
    }
}

int ArrayStats::getMin() const{
    if(length == 0){
        cout << "请重新输入" << endl;
        return 0;
    }
    else
    {
        int min = 10000000;
        for(int i =0;i<length;i++)
        {
            if(data[i]<min)
            {
                min = data[i];
            }
        }
        return min;
    }
}

double ArrayStats::getAverage() const
{
    if(length==0)
    {
        cout << "请重新输入" << endl;
        return 0;
    }
    else
    {
        int sum = 0;
        for(int i = 0;i<length;i++)
        {
            sum += data[i];
        }
        double avg = sum / length;
        return avg;
    }
}

void ArrayStats::show() const
{
    cout << "最大值：" << getMax() << endl;
    cout << "最小值：" << getMin() << endl;
    cout << "平均数：" << getAverage() << endl;   
}