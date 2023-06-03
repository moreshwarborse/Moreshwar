#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number to check Positive or Negative:";
    cin>>n;
    if(n<0)
        cout<<"It is Negative Number.";
    else if(n>0)
        cout<<"It in Positive Number.";
    else
        cout<<"It is Zero Number.";
    return 0;
}
