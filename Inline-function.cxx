#include <iostream>
using namespace std;

// void add(int x, int y)     // This a normal fucntion which executes in stack area of the memory.
// {
//     int ans = x + y;

//     cout << "The addition is = " << ans;
// }

inline void add(int x, int y) // A function which is declared "inline" expands itself right where it was called.
{
    int ans = x + y;

    cout << "The addition is = " << ans;
}

int main()
{
    int a, b;

    cout << "Enter the value for a : ";
    cin >> a;
    cout << "Enter the value for b : ";
    cin >> b;

    add(a, b);

    return 0;
}