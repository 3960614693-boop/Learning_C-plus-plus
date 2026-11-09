#include <iostream>
#include "shared/ArrayStats.h"
using namespace std;
int main()
{
    int arr[] = {34,5,12,67,39};
    ArrayStats array(arr,5);
    array.show();
    return 0;
}
