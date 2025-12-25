#include <iostream>
#include <string>

using namespace std;

void test_array1d();
void test_array2d();
void char_test();
void struct_test();

int main()
{
    // test_array1d();

    // cout<<endl;
    // cout<<endl;

    // test_array2d();

    // cout<<endl;
    // cout<<endl;


    // char_test();
    
    // cout<<endl;
    // cout<<endl;

    struct_test();

    return 0;
}


void test_array1d(){

    cout<<"Before assignment"<<endl;

    int a[5];

    for (int i=0; i<5; i++){

        cout<<a[i]<<" ";  // will throw grabge values
    }
    cout<<endl;

    cout<<"After assignment "<<endl;

    for (int i=0 ; i<5 ; i++){

        a[i]=0;

        cout<<a[i]<< " ";
    }

}

// 2d array

void test_array2d(){

    cout << "2D array before assignment"<<endl;

    int a[2][3];

    for (int i=0; i<2 ; i++){

        for (int j=0; j<3; j++){

            cout<<a[i][j]<< " ";

            a[i][j]=i*j;
            cout<<a[i][j]<<" ";
        }
    }

}


void char_test(){
    cout<<"Char test"<<endl;

    char a[]="Heloo";  // will store it in array
    // will have null termainator at end

    cout<<endl;

    cout<<"using loop"<<endl;

    for (int i=0 ; i<6; i++){

        cout<<a[i];
    }

    cout <<endl;
    cout<<"string now "<<endl;

    string b="Hello string"; // in string there is no need to use char a[] so we can avoid brackets

    cout<<a; // we can use cout directly to get value it is intelligent enough so we can avoid using loop

    cout<<endl;
    cout<<b; // we can use cout directly to get value it is intelligent enough so we can avoid using loop

    cout<<endl;

    cout<<b.length(); // we can use it to find lengths
}


void struct_test(){


    struct student
    {

        string name;
        int rollno;
    };


    student s1;

    s1.name="Ali";
    s1.rollno=23;

    student s2;

    s2.name="bilal";
    s2.rollno=59;



    student s[2];

    cout<<s[0].name<<endl;

    s[0]=s1;

    s[1]=s2;

    for (int i=0 ; i<2; i++){


        cout<<s[i].name<<endl;
    }




    
}