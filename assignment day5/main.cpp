#include <iostream>
#include <math.h>
#include "point.h"
#include "line.h"
using namespace std;

class shape{

int dim1,dim2;

 int GetArea()
 {
     return dim1*dim2;
 }

};
class rectangle:shape{


};
class circule :shape{



};
class square: rectangle{


};
int main()
{
    line L1;
  cout<< L1.GetLength();
    return 0;
}
