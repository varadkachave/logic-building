/*
code number - 01 
22/02/2026
When we divide a number by 2:
If remainder is 0 → number is Even
If remainder is 1 → number is Odd
The % operator gives remainder.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 2 == 0)
    {
        cout<<"number is even";
    }
    else 
    {
        cout<<"number is odd";
    }

}
