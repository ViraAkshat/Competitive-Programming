#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string qu;
    getline(cin >> ws, qu);

    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (qu[j - 1] == 'B' && qu[j] == 'G')
            {
                qu[j - 1] = 'G';
                qu[j] = 'B';
                j++;
            }
        }
    }

    cout << qu;

    return 0;
}