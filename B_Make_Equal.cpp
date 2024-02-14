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
        int sum = 0;
        while (words >> data)
        {
            arr.push_back(data);
            sum += data;
        }
        if (sum % n != 0)
        {
            cout << "NO" << endl;
            break;
        }
        int newSum = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] -= sum / n;
            newSum += arr[i];
            if (newSum < 0)
                break;
        }

        if (newSum < 0 || newSum > 0)
            cout << "NO" << endl;
        else if (newSum == 0)
            cout << "YES" << endl;
    }
    return 0;
}