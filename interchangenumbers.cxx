#include <iostream>
using namespace std;

void change(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;

    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    cout << "\n The values Before swapping the values : ";
    cout << "\n The value of a is = " << a;
    cout << "\n The value of b is = " << b;

    change(a, b);

    cout << "\n The values After swapping the values : ";
    cout << "\n The value of a is = " << a;
    cout << "\n The value of b is = " << b;

    return 0;
}
