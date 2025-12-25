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


    int *a;  int *b;  int *c;


    a=&x;

    b=&y;
    
    c=&z;



    if ((*a)>(*b) && ((*a)>(*c))){

        cout<<"First num is largest :"<<(*a)<<endl;
    }else if ((*b)>(*a) && ((*b)>(*c)))
    {

        cout<<"Second num is largest :"<<(*b)<<endl;
    }else{
        cout<<"Third num is largest :"<<(*c)<<endl;

    }




    if ((*a)<(*b) && ((*a)<(*c))){

        cout<<"First num is smallest :"<<(*a)<<endl;
    }else if ((*b)<(*a) && ((*b)<(*c)))
    {

        cout<<"Second num is smallest :"<<(*b)<<endl;
    }else{
        cout<<"Third num is smallest :"<<(*c)<<endl;

    }
    



    return 0;
}
