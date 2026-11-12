#include "tabtenn0.h"
#include <iostream>
using namespace std;

int main(void)
{
    TableTennisPlayer player1("Mon1One","Nielsen",true);

    RatedPlayer rplayer1(1140,"Mallory","Duck",true);//1.新建方法
    rplayer1.Name();
    if (rplayer1.HasTable())
        cout << ":has a table.\n";
    else
        cout << ":hasn't a table\n";
    
    player1.Name();
    if (player1.HasTable())
        cout << ":has a table.\n";
    else
        cout << ":hasn't a table\n";

    cout << "Name:";
    rplayer1.Name();
    cout << ";Rating" << rplayer1.Rating() << endl;

    RatedPlayer rplayer2(1212,player1);//2.转换方法
    cout << "Name:";
    rplayer2.Name();
    cout << ";Rating" << rplayer2.Rating() << endl;

    return 0;
}