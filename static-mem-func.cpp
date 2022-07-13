#include <iostream>
using namespace std;

class Student
{

private:
    int roll;
    char name[20];
    static int count;

public:
    void accept()
    {
        cout << "Enter Student roll number : ";
        cin >> roll;
        cout << "Enter Student name : ";
        cin >> name;

        cout << endl;
    }

    void display()
    {
        cout << "The student roll number is : " << roll << endl;
        cout << "The student name is : " << name << endl;
    }

    static void count_object()
    {
        count++;
        cout << "The object number is : " << count << endl;
    }
};

int Student ::count;

int main()
{

    Student s1;

    s1.accept();
    s1.display();
    Student ::count_object();

    cout << endl;
    cout << "-----------------------------";
    cout << endl;

    Student s2;

    s2.accept();
    s2.display();
    Student ::count_object();

    return 0;
}
