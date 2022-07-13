#include <iostream>
using namespace std;

inline void maximum(int a, int b)
{
    int max = (a > b) ? a : b;
    cout << "\n The maximum number is = " << max;
}

int main()
{
    int a, b;

    cout << "Enter the value for a : ";
    cin >> a;
    cout << "Enter the value for b : ";
    cin >> b;

    maximum(a, b);

    return 0;
}
