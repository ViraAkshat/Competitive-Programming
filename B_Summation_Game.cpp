#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        vector<int> arr;
        string line;
        int data;
        getline(cin >> ws, line);
        stringstream words(line);
        words >> n;
        words >> k;
        words >> x;

        getline(cin >> ws, line);
        words.str(line);
        int sum = 0;
        while (words >> data)
        {
            arr.push_back(data);
            sum += data;
        }

        sort(arr.begin(), arr.end());

        while (k--)
        {
        }
    }

    return 0;
}