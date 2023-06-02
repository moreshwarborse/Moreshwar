#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float d,x1,x2,y1,y2,x,y;
    x1=25;
    x2=15;
    y1=35;
    y2=10;

    x=pow(x2-x1,2);
    y=pow(y2-y1,2);
    d= sqrt(x+y) ;

    cout<<"Distance is:"<<d;
    return 0;
}