#include <iostream>

using namespace std;

void task_a(){

    int size;

    cout<<"Enter your array size :";

    cin>>size;


    int arr[size];



    for (int i=0 ; i<=size-1; i++){


        int value;

        cout<<"Enter your value :";

        cin>>value;

        arr[i]=value;

    }

    cout<<"Unsorted Array :";
    cout<<"[";
    for (int i=0; i<=size-1; i++){

        if (i!=size-1){

            cout<<arr[i]<<" ";
        }else if (i==size-1){

            cout<<arr[i];
        }

    }
    cout<<"]"<<endl;
    


   cout<<"Sorted Array :";

   cout<<"[";

    for (int i=0 ;i<=size-1; i++){

        for (int j=0+i; j<=size-1;j++){


            if (arr[i]<arr[j]){

                int temp=arr[i];

                arr[i]=arr[j];

                arr[j]=temp;
            }
        }

        if (i!=size-1){

            cout<<arr[i]<<" ";
        }else if(i==size-1){

            cout<<arr[i];
        }
    }
    cout<<"]"<<endl;


}

void task_b(){


    int size;

    cout<<"Enter your array size :";

    cin>>size;


    int arr[size];



    for (int i=0 ; i<=size-1; i++){


        int value;

        cout<<"Enter your value :";

        cin>>value;

        arr[i]=value;

    }

    for (int i=0; i<=size-1; i++){

        if (arr[i]%2==0){

            cout<<"Even number :"<<arr[i]<<" at index :"<<i<<endl;
        }else if(arr[i]%2!=0){

            cout<<"Odd number :"<<arr[i]<<" At index :"<<i<<endl;
        }
    }

}

int main(){

    // task_a();

    task_b();



}


