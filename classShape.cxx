#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
    float r;

public:
    void area()
    {
        cout << "Enter radius of circle : ";
        cin >> r;
        cout << "\n Area of circle is = " << 3.14 * (r * r);
    }
};

class Sphere : public Shape
{
    float r;

public:
    void area()
    {
        cout << "Enter radius of sphere : ";
        cin >> r;
        cout << "\n Area of Sphere is = " << 4 * 3.14 * (r * r);
    }
};

class Cylinder : public Shape
{
    float r, h;

public:
    void area()
    {
        cout << "Enter radius of Cylinder : ";
        cin >> r;
        cout << "Enter the height of Cylinder : ";
        cin >> h;

        cout << "\n The area of Cylinder is = " << (2 * 3.14 * r) * (r * h);
    }
};

int main()
{
    Shape *sptr;
    Circle c1;
    Sphere s1;
    Cylinder cy1;

    cout << "\n Circle details ...\n";
    sptr = &c1;
    sptr->area();

    cout << "\n Sphere Details ...\n";
    sptr = &s1;
    sptr->area();

    cout << "\n Cylinder Details...\n";
    sptr = &cy1;
    sptr->area();

    return 0;
}