#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "\n Hello from base class show()...";
    }
};

class Derived : public Base
{
    void show()
    {
        cout << "\n Hello from Derived class show()...";
    }
};

int main()
{

    Base *ptr;
    Base b1;
    ptr = &b1;
    ptr->show();

    Derived d1;
    ptr = &d1;
    ptr->show();

    return 0;
}