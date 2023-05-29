#include<iostream>
using namespace std;
void year(int b)
{
    int x,y,w,d;
    int t=365;

    y=b/t;    
    w=(b%t)/7;
    d=(b%t)%7;
    cout<<"It is "<<y<<" year, "<<w<<" week, "<<d<<" day." ;
}
int main()
{
    int x;
    cout<<"Enter days:";
    cin>>x;

    year(x);
    return 0;
}
