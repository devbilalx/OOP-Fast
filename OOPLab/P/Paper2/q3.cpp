#include <iostream>

using namespace std;

void task_a()
{

    float pi = 3.14;

    float h;

    cout << "Enter your value for h:";

    cin >> h;

    float r;

    cout << "Enter your value for r:";

    cin >> r;

    cout << 2 * pi * r * (h + r) << "cm" << endl;
}

void task_b()
{

    int deci;

    cout << "Enter your decimal value :";

    cin >> deci;

    string result = "";

    if (deci == 0)
    {

        cout << "Binary value is :0";
    }
    else if (deci > 0)
    {

        for (int i = deci; i > 0; i = i / 2)
        {

            if (i % 2 != 0)
            {

                result = "1" + result;
            }
            else if (i % 2 == 0)
            {

                result = "0" + result;
            }
        }
    }

    cout << result << endl;
}

int main()
{

    /* code */

    task_b();
    return 0;
}
