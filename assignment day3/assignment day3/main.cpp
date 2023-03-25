#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
    fraction f1(1,2);
    fraction f2(2,4);
//    f3=f1.addfraction(f2);
    fraction f3,f4,f5;
    f3 = f1+ f2;
    f3.display();
    f4 = f1- f2;
    f4.display();
    f5=f4;
    f5.display();
    return 0;
}
