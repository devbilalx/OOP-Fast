#include <iostream>

using namespace std;

int main()
{

    int y=1;

    while (y==1)
    {

          y=0;

        int fact = 1;

        int num;

        cout << "Enter your number :";

        cin >> num;

        if (num < 0)
        {

            num = -num;
        }

        if (num == 0)
        {

            cout << "Factorial is :1" << endl;
        }
        

            for (int i = 1; i <= num; i++)
            {

                fact = fact * i;
            }

            cout << "Factorial is :" << fact << endl;
        

        int z;

        cout << "Do you want to exit  press 1 else anyother key to contienr!";

        cin >> z;

        if (z==1)
        {

            y=0;
        }else{
            y=1;
        }
    }

    return 0;
}
