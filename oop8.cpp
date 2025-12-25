#include <iostream>

using namespace std;

# define SIZE 5

# define ABS(a)  ((a)<0 ? -(a):a)

// #define INCLUDE_INVENTORY_MODULE



#ifdef INCLUDE_INVENTORY_MODULE
void show_inventory(){

    cout<<endl;
    cout<<"using inlcude .... "<<endl;

    cout<<"Showing inventory ..."<<endl;
}
#endif

int main()
{

    cout<<"Hello world!";

    for (int i=0 ; i<SIZE; i++){
        cout<<i<<endl;
    }

    cout<<"SIZE"<<endl;

    cout<<"Abs value :"<<ABS(-25)<<endl;




    #ifdef INCLUDE_INVENTORY_MODULE

    show_inventory();

    #endif 




    return 0;
}
