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

        vector<int> arr;
        string line;
        getline(cin >> ws, line);
        stringstream num(line);
        int data;

        while (num >> data)
        {
            arr.push_back(data);
        }
        bool start = false;
        bool end = false;
        int zero_sum = 0;
        int step_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                zero_sum = 0;
                start = true;
            }

            if (arr[i] == 0 && start == true && end == false)
            {
                zero_sum++;
            }
        }
    }
    return 0;
}