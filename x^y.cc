#include <iostream>
using namespace std;

int power(int x, int y = 2)
{
    int power = 1;

    if (y == 0)
    {
        return 1;
    }

    for (int i = 0; i < y; i++)
    {
        power = power * x;
    }

    return power;
}

int main()
{

    int x, y;

    cout << "Enter the value for x : ";
    cin >> x;
    cout << "Enter the value for y : ";
    cin >> y;

    int pow = power(x, y);
    // int pow = power(x);
    cout << "\n X^y = " << pow;

    return 0;
}