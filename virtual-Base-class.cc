#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void S_accept(int r)
    {
        roll = r;
    }
    void S_display()
    {
        cout << "\n Student roll number is : " << roll;
    }
};

class Test : virtual public Student
{
protected:
    float p1, p2;

public:
    void T_accept(float x, float y)
    {
        p1 = x;
        p2 = y;
    }
    void T_display()
    {
        cout << "\n The Marks of 1st subject is = " << p1;
        cout << "\n The Marks of 2nd subject is = " << p2;
    }
};

class Sport : virtual public Student
{
protected:
    float score;

public:
    void SP_accept(float s)
    {
        score = s;
    }
    void SP_display()
    {
        cout << "\n The Score of sports = " << score;
    }
};

class Result : public Test, public Sport
{
private:
    float total;

public:
    void display();
};

void Result::display()
{
    total = p1 + p2 + score;
    S_display();
    T_display();
    SP_display();
    cout << "\n Total score is = " << total;
}

int main()
{
    Result r1;
    r1.S_accept(15);
    r1.T_accept(50.0, 55.0);
    r1.SP_accept(60.0);
    r1.display();
    return 0;
}