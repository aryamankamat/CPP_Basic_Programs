#include <iostream>
using namespace std;

class Student
{

private:
    int roll;
    char name[20];
    static int count; // Declaring the static data member. //

public:
    void accept()
    {
        cout << "Enter Student roll number : ";
        cin >> roll;
        cout << "Enter Student name : ";
        cin >> name;
        count++;

        cout << endl;
    }

    void display()
    {
        cout << "The student roll number is : " << roll << endl;
        cout << "The student name is : " << name << endl;
        cout << "The object number is : " << count;
    }
};

int Student ::count; // Defining the static data member.

int main()
{

    Student s1;

    s1.accept();
    s1.display();

    cout << endl;
    cout << "-----------------------------";
    cout << endl;

    Student s2;

    s2.accept();
    s2.display();

    return 0;
}