#include <iostream>
using namespace std;

class M1
{
    int a;

public:
    M1()
    {
        cout << "Please enter vlaue for a : ";
        cin >> a;
    }
    friend void maximum();
};

class M2
{
    int b;

public:
    M2()
    {
        cout << "Please enter value for b : ";
        cin >> b;
    }
    friend void maximum();
};

void maximum()
{
    M1 m1;
    M2 m2;

    if (m1.a > m2.b)
    {
        cout << "\n a from class M1 is Maximum";
    }
    else
    {
        cout << "\n b is from class M2 is Maximum";
    }
}

int main()
{
    maximum();

    return 0;
}