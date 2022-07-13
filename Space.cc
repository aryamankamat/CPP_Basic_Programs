#include <iostream>
using namespace std;

class Space
{
private:
    int x, y, z;

public:
    Space()
    {
        // Defualt constructor //
        x = 0;
        y = 0;
        z = 0;
    }

    Space(int a, int b, int c)
    {
        cout << "\n Parametrized constructor...";
        x = a;
        y = b;
        z = c;
    }

    Space(Space &s)
    {
        cout << "\n In Copy constructor!!! \n";
    }
};

int main()
{
    Space s1(10, 20, 30);
    Space s2 = s1; // storing one object into another object.

    return 0;
}