#include <iostream>
using namespace std;

class Number
{
private:
    int asize = 0;
    int *arr = NULL;

public:
    Number(int size)
    {
        asize = size;
        arr = new int[asize];
    }

    void accept()
    {
        cout << "\nEnter the array elements below ...\n";
        for (int i = 0; i < asize; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        cout << "\n Array elements are displayed below ....\n";
        for (int i = 0; i < asize; i++)
        {
            cout << arr[i];
            cout << "\n";
        }
    }

    ~Number()
    {
        cout << "\n OBJECT  IS DISTROYED....";
        delete[] arr;
    }
};

int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    Number n1(n);
    n1.accept();
    n1.display();

    return 0;
}
