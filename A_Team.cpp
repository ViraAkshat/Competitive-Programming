#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int solutions = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        string whoknows;
        getline(cin >> ws, whoknows);

        for (int j = 0; j < whoknows.length(); j += 2)
        {
            if (whoknows[j] == '1')
                count++;
        }

        if (count >= 2)
        {
            solutions++;
        }
    }

    cout << solutions;
    return 0;
}