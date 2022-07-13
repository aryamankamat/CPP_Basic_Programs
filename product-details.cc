#include <iostream>
using namespace std;

class Product
{

public:
    int pno, price;
    char pname[10];

public:
    void accept()
    {
        cout << "Enter product number : ";
        cin >> pno;
        cout << "Enter product name : ";
        cin >> pname;
        cout << "Enter product price : ";
        cin >> price;
    }

    void display()
    {
        cout << "\n Product number is = " << pno << endl;
        cout << "Product name is = " << pname << endl;
        cout << "Product price is = " << price << endl;
    }

    void highest(Product parr[5])
    {
        for (int i = 0; i < 5; i++)
        {
                }
    }
};

int main()
{

    Product parr[5];

    for (int i = 0; i < 5; i++)
    {
        parr[i].accept();
    }

    int highest = parr[0].price;

    for (int i = 0; i < 5; i++)
    {
        parr[i].highest(parr[i]);
    }
}