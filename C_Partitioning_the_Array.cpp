#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string line;
        getline(cin >> ws, line);
        stringstream nums(line);
        int data;
        vector<int> arr;
        int ans = 0;

        while (nums >> data)
        {
            arr.push_back(data);
        }

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                int k = n / i, g = 0;

                for (int j = 0; j < k; j++)
                {
                    int d = 0;
                    for (int l = j; l < n; l += k)
                    {
                        d = gcd(d, abs(arr[j] - arr[l]));
                    }
                    g = gcd(g, d);
                }

                ans += (g != 1);
            }
        }

        cout << ans << endl;
    }
    return 0;
}