#include <iostream>

using namespace std;

int main()
{

    int x;

    x=25;

    cout<< "address of x is : "<<&x<<endl;
    cout<< "valur of x is   : "<<x<<endl;

    int *p;
    p=&x;
  
    cout<< "address of p is : "<<p<<endl;

    cout<<"value this address store is : "<<*p<<endl;


    int a[]={1,2,3};


    int *c; //pointer

    c=&a[0];

    cout<<c<<endl;

    cout<<*c<<endl;// will follow the address and written value sotre there


    cout<<a<<endl;  // will give same address as intial as a=&a[0]

    // c++;

    cout<<*c<<endl;

    for (int i=0; i<3; i++){
        cout<<*c<<endl;
        c++;
    }
 

    return 0;
}
