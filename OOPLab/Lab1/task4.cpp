#include <iostream>

using namespace std;

int main()
{

    int x;

    int y;


    cout<<"Enter first height :";

    cin>>x;

    cout<<"Enter second widht:";

    cin>>y;


    int  *b;

    int  *a;

    b=&x;

    a=&y;

    cout<<"Area is :"<<(*b)*(*a)<<endl;

    return 0;
}
