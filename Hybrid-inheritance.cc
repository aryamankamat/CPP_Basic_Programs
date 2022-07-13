#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void S_accept(int a)
    {
        roll = a;
    }
    void S_display()
    {
        cout << "The Student roll is : " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float part1, part2;

public:
    void T_accept(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void T_display()
    {
        cout << "Part 1 = " << part1 << endl;
        cout << "Part 2 = " << part2 << endl;
    }
};

class Sports : virtual public Student
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
        cout << "Sports = " << score << "\n";
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display();
};

void Result::display()
{
    S_accept(15);
    T_accept(52.4, 55.5);
    SP_accept(8.0);
    cout << "\n Student Details are Displayed ...!!! \n";
    S_display();
    T_display();
    SP_display();
    total = part1 + part2 + score;
    cout << "Total score is = " << total;
}

int main()
{
    Result r1;
    r1.display();
    return 0;
}