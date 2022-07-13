#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point()
    {
        cout << "\n In Default constructor...";
        x = 0;
        y = 0;
    }

    Point(int a, int b)
    {
        cout << "\n In Parameterized constructor...";
        x = a;
        y = b;
    }

    Point(Point &p)
    {
        cout << "\n In Copy constructor...";
        x = p.x;
        y = p.y;
    }

    Point Increment(Point pobj)
    {
        pobj.x++;
        pobj.y++;

        return pobj; // 3] copy constructor is invoked...
    }
};

int main()
{
    Point p1(10, 20);
    Point p2 = p1; // 1] copy constructor is invoked...

    Point p3 = p2.Increment(p1); // 2] copy constructor is invoked...

    return 0;
}