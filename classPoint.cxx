#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    void setPoint(int a, int b);
    void showPoint();
};

void Point::setPoint(int a, int b)
{
    x = a;
    y = b;
}
void Point::showPoint()
{
    cout << "\n The Value of  x is = " << x;
    cout << "\n The Value of y is = " << y;
}

int main()
{
    Point p1;

    p1.setPoint(2, 4);
    p1.showPoint();

    return 0;
}