#include<iostream>
using namespace std;
int main()
{
    int roll,marks;
    float avg,per,tot;
    char name[20];
    float cpp,dsa,coa,m3,ICSD;

    cout<<"Enter Name.: ";
    cin>>name;
    cout<<"Enter Roll No.: ";
    cin>>roll;

    cout<<"Enter marks of C++,DSA,COA,M-3 & ICSD:";
    cin>>cpp>>dsa>>coa>>m3>>ICSD;

    tot=cpp+dsa+coa+m3+ICSD;
    cout<<"Total marks are "<<tot<<"."<<endl;

    avg=tot/5;
    cout<<"Avarage marks are "<<avg<<"."<<endl;

    per=(tot/500)*100;
    cout<<"Percentage is "<<per<<".";
    

    return 0;
}