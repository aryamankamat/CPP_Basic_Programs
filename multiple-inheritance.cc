#include<iostream>
using namespace std;

class Student
{
   int roll;
   char name[10];

public:

    void S_accept()
    {
        cout<<"Enter Student roll number : ";
        cin>>roll;
        cout<<"Enter Student name : ";
        cin>>name;
    }
    void S_display()
    {
        cout<<"\n Studnet roll number is = "<<roll;
        cout<<"\n Student name is = "<<name;
    }
};

class Emp
{
    int eid;
    char desig[10];

public:

    void E_accept()
    {
        cout<<"Enter Employee id = ";
        cin>>eid;
        cout<<"Enter Employee designation = ";
        cin>>desig;
    }
    void E_display()
    {
        cout<<"\n Employee id is = "<<eid;
        cout<<"\n Employee designation is = "<<desig;
    }
};

class Instructor : public Student, public Emp
{

public:

    void accept()
    {
        cout<<"\nStudnet Details....\n";
        S_accept();
        cout<<"\nEmployee Details....\n";
        E_accept();
    }
    void display()
    {
        cout<<"\n\n Student Details are displayed below....\n";
        S_display();
        cout<<"\n\n Employee Details are displayed below....\n";
        E_display();
    }
};

int main()
{
    Instructor i1;
    i1.accept();
    i1.display();


    return 0;
}
