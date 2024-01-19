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
        string a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                count++;
                break;
            }
        }

        if (count == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}