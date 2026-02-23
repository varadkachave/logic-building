/*
Logic:
Even numbers → last binary bit is 0
Odd numbers → last binary bit is 1
num & 1 checks last bit
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter number to check";
    cin >> n;

    if(n & 1)
    {
        cout << " odd number ";
    }
    else
    {
        cout << " even number ";
    }
    return 0;

}