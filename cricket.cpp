/******************************************************************************
 Write a c++ program to accept product details(pno,pname,price) of five products.
 Display product name with highest price
*******************************************************************************/

#include <iostream>
using namespace std;

class product
{
  int pno,price;
  char pname[20];
  
  public:
  void accept()
  {
      cout<<"Enter product id: "<<endl;
      cin>>pno;
      cout<<"Enter product name: "<<endl;
      cin>>pname;
      cout<<"Enter product price: "<<endl;
      cin>>price;
  }
  void display()
  {
      cout<<"The Highest price details..."<<endl;
      cout<<"================================"<<endl;
      cout<<"The product Id is: "<<pno<<endl;
      cout<<"The prodcut name: "<<pname<<endl;
      cout<<"The product price: "<<price<<endl;
  }
  void max(product obj[2])
  {
      int i;
      for(i=1;i<2;i++)
      {
          if(obj[0].price<obj[i].price)
          {
              obj[0].price=obj[i].price;
          }
          obj[0].display();
      }
      
  }
};


int main()
{
    product obj[2];
    int i;
    for(i=0;i<2;i++)
    obj[i].accept();
    
    for(i=0;i<2;i++)
    obj[i].max(obj);

    return 0;
}