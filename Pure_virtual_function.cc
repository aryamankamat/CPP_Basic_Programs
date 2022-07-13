#include <iostream>
using namespace std;

class Area
{
public:
    virtual void accept() = 0;
    virtual void display() = 0;
};

class Rectangle : public Area
{
    int l, b;

public:
    void accept()
    {
        cout << "Enter length of rectangle : ";
        cin >> l;
        cout << "Enter breath of rectangle : ";
        cin >> b;
    }
    void display()
    {
        cout << "\n Area of rectangle is = " << l * b;
    }
};

class Square : public Area
{
    int s;

public:
    void accept()
    {
        cout << "Enter sides of square : ";
        cin >> s;
    }
    void display()
    {
        cout << "\n Area of square is = " << s * s;
    }
};

int main()
{
    Area *ptr;

    cout << "\n Details of Rectangle ....\n";
    Rectangle r1;
    ptr = &r1;
    ptr->accept();
    ptr->display();

    cout << "\n Details of Square ....\n";
    Square s1;
    ptr = &s1;
    ptr->accept();
    ptr->display();

    return 0;
}