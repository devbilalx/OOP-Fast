#include <iostream>

using namespace std;

int main()
{
    /* code */

    int x;

    x=25;


    int *p;

    p=&x;

    cout<<p;

    cout<<endl;

    cout<<*p<<endl;

    int a[]={1,2,3};

    int *s;

    s=&a[0];

    cout<<endl;
    cout<<*s<<endl;

    cout<<s;


    for (int i=0; i<3; i++){

        cout<<*s;
        s=s+1;
    }

    return 0;
}
