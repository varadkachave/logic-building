#include <iostream>
using namespace std;

int main()
{
    int num,rev = 0,temp;
    int n;
    cin >> n;
    num = n;

    while(num != 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }

    if(n == rev)
    {
        cout << " number is palindrome " << n ;
    }
    else 
    {
        cout << " number is not palindrome " << n ;

    }

}