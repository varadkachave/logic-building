#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    bool isprime = true;

    if(num <= 1)
    {
        isprime = false;
    }
    else
    {
        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    if(isprime)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }

    return 0;
}