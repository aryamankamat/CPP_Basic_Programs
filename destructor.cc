#include<iostream>
using namespace std;

class Demo
{

public:
    Demo()
    {
        cout<<"\n Hello from constructor!!!";
    }

    ~Demo()
    {
        cout<<"\n Hello from destructor !!!!";
    }
};

int main()
{

    Demo d1;

    return 0;
}
