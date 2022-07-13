#include <iostream>
using namespace std;

class Student

{

private:
    int roll;
    char name[20];

public:
    // defining the methods inside the class.

    // void accept()
    // {
    //     cout << "ENter the student roll number : ";
    //     cin >> roll;
    //     cout << "ENter the student name : ";
    //     cin >> name;

    //     cout << endl;
    // }

    // void display()
    // {
    //     cout << "The student roll number is = " << roll << endl;
    //     cout << "The studnet name is = " << name << endl;
    // }

    // Declaring the method inside the class to infrom the class that the methods is it's belonging.
    void accept();
    void display();
};

void Student ::accept()
{
    cout << "ENter the student roll number : ";
    cin >> roll;
    cout << "ENter the student name : ";
    cin >> name;

    cout << endl;
}

void Student ::display()
{
    cout << "The student roll number is = " << roll << endl;
    cout << "The studnet name is = " << name << endl;
}

int main()
{

    Student s1;

    s1.accept();
    s1.display();
}