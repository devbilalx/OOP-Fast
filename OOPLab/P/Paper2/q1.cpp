#include <iostream>

using namespace std;


int main(){

    int r1; int c1; int r2; int c2;


    cout<<"Enter your rows for first array :";

    cin>>r1;

    cout<<"Enter your cloumns for first array :";

    cin>>c1;

    string arr1[r1][c1];


    cout<<"Enter your rows for second array :";

    cin>>r2;

    cout<<"Enter your columns for second array :";

    cin>>c2;

    string arr2[r2][c2];


    for (int i=0; i<r1; i++){

        for (int j=0; j<c1;j++){

            string val;

            cout<<"Enter your value :";
            cin>>val;

            arr1[i][j]=val;
        }
    }

    for (int i=0; i<r2; i++){

        for (int j=0; j<c2;j++){

            string val;

            cout<<"Enter your value :";
            cin>>val;

            arr2[i][j]=val;
        }
    }

    string arr3[r1][c1];

    for (int i=0; i<=r1-1; i++){

        for (int j=0; j<=c1-1; j++){
              arr3[i][j]="("+arr1[i][j]+","+arr2[i][j]+")";


        }


    }


    for (int i=0; i<=r1-1; i++){

        for (int j=0; j<=c1-1; j++){

            cout<<arr3[i][j];


        }


    }







    return 0;
}