#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;

    if(n%5==0 && n%11==0)
        cout<<"Both are divisible.";
    else if(n%5==0)
        cout<<"Only 5 is divisible not a 11.";
    else if(n%11==0)
        cout<<"Only 11 is divisible not a 5.";
    else
        cout<<"Both are not divisible.";
}
