#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;

        string line;
        int data;
        getline(cin >> ws, line);
        stringstream words(line);
        words >> n;
        words >> k;
        words >> x;
        vector<int> arr(n + 1, 0);

        string line2;
        getline(cin >> ws, line2);
        stringstream words2(line2);
        int idx = 1;
        while (words2 >> data)
        {
            arr[idx] = data;
            idx++;
        }

        sort(arr.begin(), arr.end());

        int pref[n + 1];
        pref[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            pref[i] = arr[i] + pref[i - 1];
        }

        int ans = INT_MIN;

        for (int i = n; i >= 0; i--)
        {
            int ch = n - i;
            if (ch > k)
                break;
            int r = min(i, x);
            int sum = (pref[i - r] - (pref[i] - pref[i - r]));
            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;
}