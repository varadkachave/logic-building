#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int temp = num;
    int count = 0;

    // Handle 0 case
    if(num == 0)
        count = 1;

    while(temp != 0)
    {
        count++;
        temp /= 10;
    }

    int power = pow(10, count);
    int square = num * num;

    if(square % power == num)
        cout << "Number is Automorphic";
    else
        cout << "Number is NOT Automorphic";

    return 0;
}