#include<iostream>
using namespace std;
int main()
{
    int x,y,w,d;
    int t=365;
    cout<<"Enter days:";
    cin>>x;

    y=x/t;    
    w=(x%t)/7;
    d=(x/t)%7;
    cout<<"It is "<<y<<" year, "<<w<<" week, "<<d<<" day." ;

}