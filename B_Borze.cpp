#include <iostream>
using namespace std;

int main()
{
    string borze;
    getline(cin, borze);

    int i = 0;

    while (i < borze.length())
    {
        if (borze[i] == '.')
        {
            cout << 0;
        }
        else if (borze[i] == '-')
        {
            i++;
            if (borze[i] == '.')
            {
                cout << 1;
            }
            else if (borze[i] == '-')
            {
                cout << 2;
            }
        }

        i++;
    }

    return 0;
}