#include <iostream>


using namespace std;

int main()
{

    int x;

    int y;

    int z;


    cout<<"Enter first num :";

    cin>>x;

    cout<<"Enter second num:";

    cin>>y;

    cout<<"Enter third num :";

    cin>>z;

    int  *a ; int *b ; int *c;


    a=&x;

    b=&y;

    c=&z;

    cout<<"mean is "<<((*a)+(*b)+(*c))*1.0/3<<endl;





    return 0;
}
