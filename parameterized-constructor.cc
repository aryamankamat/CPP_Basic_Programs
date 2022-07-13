#include <iostream>
using namespace std;

class Student
{
    int roll;
    int age;

public:
    Student(int r, int a)
    {
        roll = r;
        age = a;
    }

    void display()
    {
        cout << "\n Roll is = " << roll;
        cout << "\n Age is = " << age;
    }
};

int main()
{
    Student s1(1, 18);
    s1.display();
    return 0;
}