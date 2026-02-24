#include <iostream>
using namespace std;

int main()
{
    int n1 ,n2;
    cout << " enter number one :- ";
    cin >> n1;
    cout << " enter number two :- ";
    cin >> n2;

    n1 = n1 ^ n2;// Combine n1 and n2 and store the mixed (XOR) value in n1
    n2 = n1 ^ n2;// Extract original n1 value and store it in n2
    n1 = n1 ^ n2;// Extract original n2 value and store it in n1 (swap complete)

     cout << "numbers after swap "<<endl;
    cout << "number one is " << n1<<endl;
    cout << "number two is " << n2<<endl;

}