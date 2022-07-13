#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n;

    cout << "\n Enter the number : ";
    cin >> n;

    int sqr = square(n);
    int cub = cube(n);

    cout << "\n The square of number is = " << sqr;
    cout << "\n The Cube of number is = " << cub;

    return 0;
}