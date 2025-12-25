#include <iostream>

using namespace std;

void taskb();

int main()
{

    taska();

    taskb();

    return 0;
}

// task a


void taska(){

    float pi=3.14;


    float r;


    cout<<"Enter your radius :";

    cin>>r;

    float h;


    cout<<"Enter your height :";

    cin>>h;


    cout<<"Area of cylinder is :"<<2*pi*r*(h+r)<<"cm^2"<<endl;


}

// task b


void taskb(){



    string result="";


    int num;

    cout<<"Enter your decmial number :";

    cin>>num;

    for (int i=num; i>0; i=i/2){


        if (i%2==0){


            result="0"+result;
        }else if (i%2!=0){


            result="1"+result;
        }

    }

    cout<<result<<endl;



}