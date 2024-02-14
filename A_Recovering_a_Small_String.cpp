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

        string ans = "";

        if (n > 53)
        {
            ans += (char)((int)'a' + (n - 52 - 1));
            n -= (n - 52);
        }
        else
        {
            ans += 'a';
            n--;
        }

        if (n > 26)
        {
            ans += (char)((int)'a' + (n - 26 - 1));
            n -= (n - 26);
        }
        else
        {
            ans += 'a';
            n--;
        }

        ans += (char)((int)'a' + n - 1);

        cout << ans << endl;
    }

    return 0;
}