#include <iostream>

using namespace std;

int main()
{

    int x;

    int y;


    cout<<"Enter first num :";

    cin>>x;

    cout<<"Enter second num:";

    cin>>y;


    int *p;

    p=&x;

    int *d;

    d=&y;


    cout<<"Sum of numbers is:"<< (*p)+(*d)<<endl;
    cout<<"Difference of numbers is:"<< (*p)-(*d)<<endl;
    cout<<"Product of numbers is:"<< (*p)*(*d)<<endl;
    cout<<"Square of numbers are:"<< (*p)*(*p) <<","<<(*d)*(*d)<<endl;




    return 0;
}
