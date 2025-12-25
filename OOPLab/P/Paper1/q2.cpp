#include <iostream>

using namespace std;

int main()
{

    string text;

    cout << "Enter your text here only 6 character you can enter:";

    getline(cin, text);

    int w;

    w = text.length();

    if (w <= 6)
    {

        for (int i = w; i >= 0; i--)
        {

            cout << text[i];
        }
    }
    else if (w >= 7)
    {

        cout << "No of character is larger " << endl;
    }

    return 0;
}
