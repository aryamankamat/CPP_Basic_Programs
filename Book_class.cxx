#include <iostream>
using namespace std;

class Books
{
private:
    int bookid;
    char bookname[10];
    static int count;

public:
    void accept()
    {
        cout << "\n Enter the book number : ";
        cin >> bookid;
        cout << "\n Enter the book name : ";
        cin >> bookname;
        count++;
    }

    void display()
    {
        cout << "\n The book id is = " << bookid;
        cout << "\n The book name is = " << bookname;
        cout << "\n The number is = " << count;
    }
};

int Books ::count;

int main()
{
    Books b1, b2;
    b1.accept();
    b1.display();
    cout << "\n ------------------------------ \n";
    b2.accept();
    b2.display();
    return 0;
}