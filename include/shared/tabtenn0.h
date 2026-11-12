#ifndef TABTENN0_H_
#define TABTENN0_H_

#include <string>
using namespace std;

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none",
                    const string &ln = "none", bool ht  = false);//自带默认函数（不传参时用默认）
    void Name() const;
    bool HasTable() const{ return hasTable; };//(内联函数)：写完整的函数体{}
    void ResetTable(bool v){ hasTable = v;};//v只是变量名true/false(不能直接改变而是构造函数改变私有变量)
};

class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;//正整数
public:
    RatedPlayer(unsigned int r = 0,const string & fn = "none",
                const string & ln = "none",bool ht = false);//1.新建方法

    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);//2.转换方法
    unsigned int Rating() const { return rating;};
    void ResetRating (unsigned int r){ rating = r;};//封装标准读写接口（注意读要用const）
};
#endif