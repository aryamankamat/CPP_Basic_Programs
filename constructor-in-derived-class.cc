#include <iostream>
using namespace std;
class Demo
{
    int a;

public:
    Demo()
    {
        cout << "\n In Base class Defalut constructor!!! \n";
        a = 0;
    }
    Demo(int x)
    {
        a = x;
        cout << "\n In Base class Parameterized constructor!!! \n";
    }
    ~Demo()
    {
        cout << "\n In Base class Destructor !!!! \n";
    }
    void D_display()
    {
        cout << "\n Value of a is = " << a;
    }
};

class Test : public Demo
{
    int b;

public:
    Test()
    {
        cout << "\n In Derived class Default constructor!!!\n";
        b = 0;
    }
    Test(int y)
    {
        cout << "\n In Derived class Parameterized constructor!!!";
        b = y;
    }
    ~Test()
    {
        cout << "\n In Derived class Destructor!!!";
    }
    void T_display()
    {
        cout << "\n The value of b is = " << b;
    }
};

int main()
{
    Test t1(10);
    t1.D_display();
    t1.T_display();
    return 0;
}