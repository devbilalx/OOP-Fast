#include <iostream>

using namespace std;


string first(string text);

string c_all(string text);

string d_all(string text);


int main()
{
  
    string lines;

    cout<<"Enter your text here:";

    getline(cin,lines);

    char op;

    cout<<"Enter your operation f for first c for all and d for all";

    cin>>op;

    string result;

    switch (op)
    {
    case 'f':

        result=first(lines);

        cout<<result<<endl;

        break;

    case 'c':
      
    result=c_all(lines);

    cout<<result<<endl;

    break;


    case 'd':

    result=d_all(lines);

    cout<<result<<endl;

    break;
    
    default:

    cout<<"Invalid operation entered :";
        break;
    }








}


string first( string text ){


    char first=text[0];


    if (int(first)>=97 && int(first)<=122){

        text[0]=char(int (first)-32);
    }

    return text;
}


string c_all(string text){


    int w=text.length();

    for (int i=0; i<=w-1; i++){

        if (int(text[i])>=97 && int(text[i])<=122){

            text[i]=char(int (text[i]-32));
        }

    }

    return text;


}


string d_all(string text){


    int w=text.length();

    for (int i=0; i<=w-1; i++){

        if (int(text[i])>=65 && int(text[i])<=90){

            text[i]=char(int (text[i]+32));
        }

    }

    return text;


}