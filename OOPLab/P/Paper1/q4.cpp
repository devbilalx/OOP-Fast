#include <iostream>
#include <math.h>

using namespace std;

float straight(float m, float x, float c);

void quadratic(float a,float b,float c,float x,float y);
int main()
{

    char operation;

    cout<<"Enter q for queatratic opertation and s for straight line :";

    cin>>operation;

    if (operation=='q' || operation=='Q'){

        float a,b,c,x,y;

        cout<<"Enter your value for a:";

        cin>>a;

        cout<<"Enter your value for b";

        cin>>b;

        cout<<"Enter your value for c";

        cin>>c;

        cout<<"Enter your value for x";

        cin>>x;

        cout<<"Enter your value for y";

        cin>>y;



        quadratic(a,b,c,x,y);
    }else if(operation=='s'|| operation == 'S'){


        float m; float x; float c;
        cout<<"Enter your value for m:";

        cin>>m;

        cout<<"Enter your value for x";

        cin>>x;

        cout<<"Enter your value for c";

        cin>>c;


        float ans;



        ans=straight(m,x,c);

        cout<<"Y is :"<<ans<<endl;
    }else {

        cout<<"Invalid operation :"<<endl;
    }
    /* code */
    return 0;
}

void quadratic(float a,float b,float c,float x,float y) {

    y = a * x * x + b * x + c;
    cout << "Quadratic result: y = " << y << endl;
}

float straight(float m,float x,float c){




    float y=m*x+c;

    return y;

    
}