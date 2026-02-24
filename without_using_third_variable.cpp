#include <iostream>
using namespace std;

int main()
{
    int n1 ,n2;
    cout << " enter number one :- ";
    cin >> n1;
    cout << " enter number two :- ";
    cin >> n2;

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    cout << "numbers after swap "<<endl;
    cout << "number one is " << n1<<endl;
    cout << "number two is " << n2<<endl;

        cout << "numbers after swap "<<endl;
    cout << "number one is " << n1<<endl;
    cout << "number two is " << n2<<endl;
}
