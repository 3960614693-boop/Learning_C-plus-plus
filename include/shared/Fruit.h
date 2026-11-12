#ifndef FRUIT_H_
#define FRUIT_H_

using namespace std;

class Fruit
{

public:
    virtual double pricePerKg() const = 0;//抽象类不能直接创建对象 ！
    virtual ~Fruit() = default;   
};

class Apple : public Fruit
{
    double pricePerKg() const override{return 8.5;};
};

class Banana : public Fruit
{
    double pricePerKg() const override{return 4.2;};
};

class Watermelon : public Fruit
{
    double pricePerKg() const override{return 1.5;};
};

class Strawberry :public Fruit
{
    double pricePerKg() const override{return 7.8;};
};

#endif