#include <iostream>

using namespace std;


void table_mult(int n){

        for (int j=1; j<=10; j++){

            cout<<n<<"x"<<j<<"="<<n*j<<endl;
        }
    


}

int main()
{
    /* code */

    int num;


    char y='y';

    while(y=='y'){



    cout<<"Enter your number :";

    cin>>num;

    table_mult(num);

    char cont;

    cout<<"Do you want to continue press y else n";

    cin>>cont;

    if (cont=='y'){

        y='y';
    }else if(cont!='y'){

        y='n';
    }



    }



    return 0;
}
