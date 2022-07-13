#include <iostream>
using namespace std;

// void swap(int x, int y)              // call by value.
// {
//     int temp;

//     temp = x;
//     x = y;
//     y = temp;
// }

void swap(int &x, int &y) // call by reference.
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;

    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;

    cout << "\n Before calling the function: \n";

    cout << "\n The value of a is = " << a;
    cout << "\n The The value of b is = " << b;

    swap(a, b);

    cout << "\n After calling the function : \n ";

    cout << "\n The value of a is = " << a;
    cout << "\n The The value of b is = " << b;

    return 0;
}
