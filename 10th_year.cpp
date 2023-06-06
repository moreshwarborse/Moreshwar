#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;

    if((n%4)==0)
        cout<<"It is leap year.";
    else
        cout<<"It is not leap year.";
    return 0;
}