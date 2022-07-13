#include <iostream>
using namespace std;

class Product
{
public:
    int pno, price;
    char pname[10];

public:
    Product()
    {
        cout << "Enter the Product number : ";
        cin >> pno;
        cout << "Enter the Product name : ";
        cin >> pname;
        cout << "Enter the Product price :";
        cin >> price;
    }

    void display()
    {
        cout << "\n Product number is = " << pno << endl;
        cout << "Product name is = " << pname << endl;
        cout << "Product price is = " << price << endl;
    }
};

int main()
{
    Product parr[5];

    for (int i = 0; i < 5; i++)
    {
        parr[i];
        cout << " \n ";
    }

    return 0;
}