#include <iostream>

using namespace std;


void copyArray(int *arr,int *&arr1,int size);

void reduceArray(int *arr,int *&arr1,int size);



int main()
{


    
    return 0;
}




void copyArray(int *arr, int *&arr1,int size){


    int arr[size];


    for(int i=0 ;i<=size-1; i++){


        int value;

        cout<<"Enter your value :";
        cin>>value;

        arr[i]=value;
    }


}
