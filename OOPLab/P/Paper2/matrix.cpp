#include <iostream>

#include <string.h>

#include <fstream>


using namespace std;



int main()
{


    int r1; int c1; int r2; int c2;


    while(1){


        cout<<"Enter your no of rows for matrix 1 :";

        cin>>r1;

        cout<<"Enter your no of columns for matrix 1:";

        cin>>c1;

        cout<<"Enter your no of rows for matrix 2:";

        cin>>r2;

        cout<<"Enter your no of columns for matrix 2:";

        cin>>c2;


        if (r1==r2 && c1==c2){
            break;
        }else{

            cout<<"Invalid rows and columns entered";
        }


    }

    int arr1[r1][c1];

    int arr2[r2][c2];

    int resultant[r1][c1];

    for (int i=0; i<=r1-1;i++){


        for (int j=0; j<=c1-1; j++){

            int val;

            cout<<"Enter your value :";

            cin>>val;

            arr1[i][j]=val;


           
        }
    }


    for (int i=0; i<=r2-1;i++){


        for (int j=0; j<=c2-1; j++){

            int val;

            cout<<"Enter your value :";

            cin>>val;

            arr2[i][j]=val;
           
        }
    }






    for (int i=0; i<=r1-1;i++){


        for (int j=0; j<=c1-1; j++){


            resultant[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    ofstream myfile("sample.txt");

    if (myfile.is_open()){

    for (int i=0; i<=r1-1;i++){


        for (int j=0; j<=c1-1; j++){

            myfile<<resultant[i][j]<<" ";
        }

        myfile<<endl;
    }





    }
    myfile.close();




    
    return 0;
}
