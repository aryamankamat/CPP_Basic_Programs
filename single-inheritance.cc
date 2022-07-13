#include<iostream>
using namespace std;

class Human
{
private:
    int age;
    char name[20];

public:
    Human()
    {
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the age : ";
        cin>>age;
    }

    void Human_display()
    {
      cout<<"\n The Student name is = "<<name;
      cout<<"\n The Student age is = "<<age;
    }
};

class Student : public Human
{
private:
    int roll;
    char college[30];
    char course[10];

public:
    Student()
    {
        cout<<"Enter Student college name : ";
        cin>>college;
        cout<<"Enter student roll number : ";
        cin>>roll;
        cout<<"Enter Student course name : ";
        cin>>course;
    }

    void display()
    {
        //Human::display(); // one way to call the parent display function.
        Human_display(); // simple way to call the parent display method.
        cout<<"\n The Student roll number is = "<<roll;
        cout<<"\n The Student college name is = "<<college;
        cout<<"\n The Student course is = "<<course;
    }
};

int main()
{

    Student s1;

    s1.display();


    return 0;
}
