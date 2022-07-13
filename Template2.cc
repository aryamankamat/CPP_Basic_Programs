#include <iostream>
using namespace std;
template <class T>
// Function Template//
void swapt(T &n1, T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int a = 10, b = 20;
    float c = 3.4, d = 4.5;

    cout << "\n Before swapping the values ...";
    cout << "\n The 1st Integer values = " << a;
    cout << "\n The 2nd Integer values = " << b;
    cout << "\n The 1st Float values = " << c;
    cout << "\n The 2nd Float values = " << d;

    swapt(a, b);
    swapt(c, d);

    cout << "\n After swapping the values ...";
    cout << "\n The 1st Integer values = " << a;
    cout << "\n The 2nd Integer values = " << b;
    cout << "\n The 1st Float values = " << c;
    cout << "\n The 2nd Float values = " << d;

    return 0;
}