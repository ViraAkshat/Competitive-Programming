#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s, f;
        getline(cin >> ws, s);
        getline(cin >> ws, f);

        string change;

        // cout << "s " << s << endl;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == f[i])
            {
                change += '0';
            }
            else
            {
                change += '1';
            }
        }
        // cout << "change: " << change << endl;
        int sn = 0, fn = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                sn++;
            if (f[i] == '1')
                fn++;
        }

        int steps = abs(fn - sn);
        // cout << "fs " << fn - sn << " steps: " << steps << endl;

        for (int i = 0; steps > 0; i++)
        {
            if (change[i] == '1')
            {
                if (s[i] == '1' && fn - sn < 0)
                {
                    change[i] = '0';
                    steps--;
                }
                else if (s[i] == '0' && fn - sn > 0)
                {
                    change[i] = '0';
                    steps--;
                }

                // cout << "i " << i << " steps " << steps << "change: " << change << endl;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (change[i] == '1')
            {
                steps++;
            }
        }

        // cout << "move: " << steps << endl;

        steps /= 2;
        steps += abs(fn - sn);

        cout << steps << endl;
    }
    return 0;
}