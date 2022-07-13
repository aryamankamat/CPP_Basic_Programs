#include <iostream>
using namespace std;

class Student
{
    int roll;
    int age;
    char name[10];

public:
    Student()
    {
        cout << "\n Hello from Constructor!!!\n";
        roll = 1;
        age = 18;
        name == NULL;
    }

    void display()
    {
        cout << "\n Roll is = " << roll;
        cout << "\n age is = " << age;
        cout << "\n Name is = " << name;
    }
};

int main()
{
    Student s1;
    s1.display();

    return 0;
}