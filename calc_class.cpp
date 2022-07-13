#include<iostream>
using namespace std;

class calculate
{
    
private: // members belongs to only this class

    int a , b , ans;

public:  // members can be accessible throughout the program.

    void accept()
    {
        cout<<"\n Enter first number : ";
        cin>>a;
        cout<<"\n Enter second number : ";
        cin>>b;
    }
    void add()
    {
        ans = a + b;
        cout<<"\n The addition is : "<< ans;
    }

    void sub()
    {
        ans = a - b;
        cout<<"\n The subtraction is : "<< ans;
    } 

    void mul()
    {
        ans = a * b;
        cout<<"\n The multiplication is : "<< ans;
    }

    void div()
    {
        ans = a / b;
        cout<<"\n The division is : "<< ans;
    }
};

int main()
{
    calculate c1; // creating object.

    c1.accept();  // asscessing the member function of a "calculate" class.
    c1.add();
    c1.sub();
    c1.mul();
    c1.div();
}