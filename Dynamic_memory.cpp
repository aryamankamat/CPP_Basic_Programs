#include <iostream>
using namespace std;

int main()
{
    // Dynamic memeory allocation is done using "new" keyword.
    // Dealocation(free) of dynamic memory is done using "delete" keyword.

    int n;
    cout << "\n Enter the size of arrya : ";
    cin >> n;

    int *ptr = new int[n];

    cout << "\n Enter Array elements below:  \n";

    for (int i = 0; i < n; i++)
    {
        cout << "Element at " << i << " position : ";
        cin >> ptr[i];
    }

    cout << "\n Arrya elements are displayed below : \n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n Element at " << i << " position is : " << ptr[i];
    }

    delete[] ptr;
    cout << "\nThe array is deleted!!!";
}
