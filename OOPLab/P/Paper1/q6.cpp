#include <iostream>
#include <math.h>
using namespace std;

int sum(int n[],int size){

    int total=0;

    for (int i=0 ;i<=size-1; i++){

        total=total+n[i];



    }

    return total;

}

void percent(int n[],int size){


    for (int i=0; i<=size-1; i++){


        int value=n[i];


        cout<<((value*1.0)/(10.0))*100.0<< " ";
    }
}

float sd(int n[],int size){

    int total=sum(n,size);

    float avg=(total*1.0)/size;

    float sd=0;


    for (int i=0 ;i<=size-1; i++){

        sd=sd +( (n[i]-avg) * (n[i]-avg)      );
    }

    sd=sd*1.0/size;


    sd=sqrt(sd);

    return sd;


}

float average(int n[],int size){

    int total=sum(n,size);


    float avg;

    avg=(total*1.0)/size;


    return avg;


}


int max(int n[],int size){


    int max=n[0];


    for (int i=1; i<=size-1;i++){

        if (n[i]>max){

            max=n[i];
        }


        
    }

    return max;

}

int min(int n[], int size){


    int min=n[0];


    for (int i=1; i<=size-1 ;i++){

        if (n[i]<min){

            min=n[i];
        }
    }

    return min;
}



int main()
{


    int s;

    cout<<"Enter your array size :";

    cin>>s;

    int arr[s];


    for (int i=0 ;i <=s-1;i++){


        int val;


        cout<<"Enter your value : ";

        cin>>val;

        arr[i]=val;



    }


    char op;

    cout<<"Enter you op m for max n for min s for sd p for percent j for sum a for average";

    cin>>op;

    float ans;



    switch (op)
    {
    case 'm':

    ans=max(arr,s);

    cout<<"ans:"<<ans<<endl;
        break;


    case 'n':

    ans=min(arr,s);

    cout<<"min value is :"<<ans<<endl;

    break;


    case 's':

    ans=sd(arr,s);

    cout<<"Sd is :"<<ans<<endl;

    break;

    case 'p':

    percent(arr,s);

    break;

    case 'j':

    ans=sum(arr,s);

    cout<<"Sum is :"<<ans<<endl;

    break;

    case 'a':

    ans=average(arr,s);
    
    cout<<"Average is :"<<ans<<endl;

    break;

    
    default:

    cout<<"Invalid opertaion entered ";
        break;
    }


    return 0;
}
