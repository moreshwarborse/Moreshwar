#include<iostream>
using namespace std;

int main()
{
  int l,w,a,p;  
  cout<<"Enter length:";
  cin>>l;
  cout<<"Enter Width:";
  cin>>w;

  a=l*w;     //Rectangle Area formula 
  p=2*(l+w);      //Rectangle Parameter formula

  cout<<"Area is "<<a<<" and parameter is "<<p<<".";
}
