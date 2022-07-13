#include <iostream>
using namespace std;

int &max(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;

    cout << "\n ENter the value of a : ";
    cin >> a;
    cout << "\n Enter the value of b : ";
    cin >> b;

    int x = max(a, b);

    cout << "\n The maximum number is = " << x;

    return 0;
}