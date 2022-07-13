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
        cout << "Enter the lenght of rectangle = ";
        cin >> l;
        cout << "Enter the breath of rectangle = ";
        cin >> b;
    }
    void display()
    {
        cout << "\n Area of rectangle is = " << l * b << endl;
    }
};

class Square : public Area
{
    int side;

public:
    void accept()
    {
        cout << "Enter the side of square : ";
        cin >> side;
    }
    void display()
    {
        cout << "\n Area of square is = " << side * side << endl;
    }
};

int main()
{
    Area *ptr;

    Rectangle r1;
    ptr = &r1;
    ptr->accept();
    ptr->display();

    Square s1;
    ptr = &s1;
    ptr->accept();
    ptr->display();

    return 0;
}