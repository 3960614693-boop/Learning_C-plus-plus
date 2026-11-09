#ifndef ArrayStats_H
#define ArrayStats_H

#include <iostream>
using namespace std;

class ArrayStats
{
private:
    int *data;//储存数组地址
    int length;//储存长度
public:
    ArrayStats(const int arr[],int len);
    ~ArrayStats();
    int getMax() const;
    int getMin() const;
    double getAverage() const;
    void show() const;
    
};
#endif