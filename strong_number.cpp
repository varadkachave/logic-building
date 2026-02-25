#include <iostream>
using namespace std;

int main()
{
    int num, digit;
    int sum = 0;

    cout << "Enter number: ";
    cin >> num;

    int temp = num;

    while (num != 0)
    {
        digit = num % 10; // correct digit extraction

        int fact = 1; // reset factorial

        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10; // remove digit
    }

    if (temp == sum)
    {
        cout << "Number is Strong number";
    }
    else
    {
        cout << "Number is not Strong number";
    }

    return 0;
}