#include <iostream>

using namespace std;

void age();

void for_loop();

void while_loop();
void checking_for_scope();

int main()
{

    int val;
    cout<<"Enter your value : "<<endl; // val and cout have no realtion with each other

    cin>>val;     // cin will assign value to val

    age();

    cout<<endl;

    for_loop();

    cout<<endl; 

    while_loop();

    cout<<endl;

    checking_for_scope();
    return 0;
}


void age(){

    int age=13;

    if (age<18){
        cout<<"your not allowed to vote";
    }else{
        cout<<"You can vote";

    }
}


// iteraion 

// for loop and while loop both are same


void while_loop(){

    int i=0;

    while(i <5){
        cout<<i;
        i+=1;  // try to avoid i++
    }

}


void for_loop(){

    for( int i=0 ; i<5;i++){

        if (i==2){
            continue; // will skip only 2 iteration
        }
        cout<<i;

    }
}


void checking_for_scope(){

    int i=0;

    for(i; i<5; i++){
        cout<<i;
    }
    cout<<endl;
    cout<<i;

    for (int y=0; y<5;y++){
        cout<<y;  // this will work fine as y is inside the body and its scope
    }

    cout<<endl;

    // cout<<y; // this will throw error bcs y exist only inside for body
}