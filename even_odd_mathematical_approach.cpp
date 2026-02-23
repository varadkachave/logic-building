/*
Logic:

If dividing by 2 and multiplying back gives same number → Even.
When we divide even number by 2, it divides perfectly.
When we divide odd number by 2, it gives decimal.
Since data type is int, decimal part is removed.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n ==(n / 2)*2)
    {
        cout << " number is even";
    }
    else 
    {
        cout << " number is odd";
    }
}