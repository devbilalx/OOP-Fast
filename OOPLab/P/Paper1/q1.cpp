#include <iostream>

using namespace std;

#include <string.h>

#include <fstream>



int main()
{
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

    
    
    ofstream myfile("sample.txt");

    if (myfile.is_open()){

        myfile<<"Unsorted array :";

        myfile<<"[";

        for (int i=0; i<=size-1; i++){


            myfile<<arr[i]<<" ";


            
        }

        myfile<<"]";



    }


    for (int i=0 ;i<=size-1; i++){

        for (int j=0+i; j<=size-1;j++){


            if (arr[i]<arr[j]){

                int temp=arr[i];

                arr[i]=arr[j];

                arr[j]=temp;
            }
        }
    }


    if (myfile.is_open()){


        myfile<<endl;

        myfile<<"Sorted array :";

        

        myfile<<"[";

        for (int i=0; i<=size-1; i++){


    


            myfile<<arr[i]<<" ";

        }

        myfile<<"]";
    }

    myfile.close();


    
    
    return 0;
}
