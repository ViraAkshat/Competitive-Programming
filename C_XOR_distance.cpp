#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, r;
        cin >> a >> b >> r;

        int i = 0, x = 0;
        while ((a || b) && (x < r))
        {
            if (((a & 1) && (b & 0)) || ((a & 0) && (b & 1)))
            {
                if (r & 1)
                    x |= 1 << i;
            }

            a <<= 1;
            b <<= 1;
            i++;
        }

        cout << abs(a ^ x - b ^ x) << endl;
    }
    return 0;
}