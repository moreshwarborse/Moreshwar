#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character:";
    cin>>ch;

    if(ch>='A' && ch<='Z')
        cout<<"It is capital alphabet.";
    else if(ch>='a' && ch<='z')
        cout<<"It is small alphabet.";
    else if(ch>='0' && ch<='9')
        cout<<"It is small alphabet.";
    else 
        cout<<"It is special chracter.";

    return 0;
}