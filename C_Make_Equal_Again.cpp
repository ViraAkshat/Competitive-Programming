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
        stringstream words(line);
        int data;
        vector<int> arr;

        while (words >> data)
        {
            arr.push_back(data);
        }

        int first = 0;
        int last = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
            {
                first++;
            }
            else
            {
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == arr[n - 1])
            {
                last++;
            }
            else
            {
                break;
            }
        }

        if (arr[0] == arr[n - 1])
        {
            cout << max(0, (n - 1 - last) - (first) + 1) << endl;
        }
        else
        {
            cout << n - max(first, last) << endl;
        }
    }
    return 0;
}