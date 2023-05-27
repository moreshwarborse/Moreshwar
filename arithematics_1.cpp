#include<iostream>
using namespace std;

int main()
{
    int x,y,a,s,m,d;
    cout<<"Calculation of all arithematices operator."<<endl;
    cout<<"Enter any 2 Number to calculate:";
    cin>>x>>y;

    a=x+y; s=x-y; m=x*y; d=x/y;

    cout<<"\nAddition of "<<x<<" & "<<y<<":"<<a<<endl;
    cout<<"Subtraction of "<<x<<" & "<<y<<":"<<s<<endl;
    cout<<"Multiplication of "<<x<<" & "<<y<<":"<<m<<endl;
    cout<<"Divison of "<<x<<" by "<<y<<":"<<d<<endl;

    return 0;
}