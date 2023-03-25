#ifndef LINE_H
#define LINE_H
#include"point.h"
#include <math.h>


class line
{
    public:
        point p1,p2;
        line(){}
        line(point p1,point p2) {
        p1.x=10;
        p1.y=15;
        p2.x=15;
        p2.y=20;


        }
        int GetLength()
        {
        return sqrt(pow(p1.x-p1.x,2)+pow(p2.y-p2.y,2));
        }

};

#endif // LINE_H
