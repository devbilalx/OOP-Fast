#include <iostream>

using namespace std;


int main()
{


    string monkey_names[3];

    float foodtrack[3][5];


    for (int i=0 ; i<3 ;i++){
        int j=0;

        string monkeyName;

        cout<<"Enter your monkey name :";

        cin>>monkeyName;

        monkey_names[i]=monkeyName;

        for (j=0; j<5; j++){

            float num;


            cout<<"Enter Food enter by your monkey on day "<<j+1<<" :";

            cin>>num;


            foodtrack[i][j]=num;

        }

    }


    float least;

    float greatest=0;

    int count=0;



    for (int i=0 ; i<3 ;i++){
        float sum=0.0;


        for (int j=0; j<5; j++){

            if (count==0){

                least=foodtrack[i][j];
            }

            if (foodtrack[i][j]>greatest){
                greatest=foodtrack[i][j];
            }

            if (foodtrack[i][j]<least){

                least=foodtrack[i][j];
            }
            count++;

            sum=sum+ foodtrack[i][j];

        }

        cout<<"The avereage amount of food eaten per day by whole week is : "<<sum/5*1.0<<" by the monkey : "<<monkey_names[i]<<endl;



    }

    cout<<"The least amount of food eaten during the week by any one monkey :"<<least<<endl;

    cout<<"The greatest amount of food eaten during the week by any one monkey"<<greatest<<endl;


    
    return 0;
}
