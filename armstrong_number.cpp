#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, count = 0;
    
    cout << "Enter number: ";
    cin >> num;

    int n = num;   // copy original number

    int digit, anum;
    int sum = 0;
    
    // Count digits
    while(n != 0)
    {
        n = n / 10;
        count++;
    }

    n = num;  // reset n

    // Armstrong calculation
    while(n != 0)
    {
        digit = n % 10;
        anum = pow(digit, count);
        sum = sum + anum;
        n = n / 10;
    }

    if(num == sum)
    {
        cout << "Number is Armstrong number";
    }
    else
    {
        cout << "Number is not Armstrong number";
    }
}