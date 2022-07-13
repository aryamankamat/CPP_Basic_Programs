#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void accept(int x)
    {
        this->x = x;
    }
    void display()
    {
        cout << "\n The value of x is = " << x;
    }

    A &retrun_r()
    {
        x = 10;

        return *this;
    }
};

int main()
{
    A a1, a2;
    a1.accept(5);
    a1.display();

    a2.retrun_r();
    a2.display();

    return 0;
}