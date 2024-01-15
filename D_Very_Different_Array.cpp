#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // string line;
        // int n, m;
        // getline(cin >> ws, line);
        // stringstream nums(line);

        // int n, m;
        // vector<int> a, b;
        // nums >> n;
        // nums >> m;
        // cout << "n " << n << endl;
        // cout << "m " << m << endl;

        // getline(cin >> ws, line);
        // nums.str(line);
        // int data;
        // while (nums >> data)
        // {
        //     a.push_back(data);
        //     cout << a[a.size() - 1] << " ";
        // }

        // cout << endl;

        // sort(a.begin(), a.end());

        // getline(cin >> ws, line);
        // nums.str(line);
        // while (nums >> data)
        // {
        //     b.push_back(data);
        //     cout << b[b.size() - 1];
        // }
        // cout << endl;

        // sort(b.begin(), b.end());

        int n, m;
        vector<int> a, b;

        cin >> n >> m;

        // cout << "n " << n << " "
        //  << "m " << m << endl;

        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            a.push_back(data);
            // cout << a[i] << " ";
        }

        // cout << endl;
        sort(a.begin(), a.end());

        for (int i = 0; i < m; i++)
        {
            int data;
            cin >> data;
            b.push_back(data);
            // cout << b[i] << " ";
        }
        // cout << endl;
        sort(b.begin(), b.end());

        // logic
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(a[i] - b[0]) > abs(a[i] - b[b.size() - 1]))
            {
                sum += abs(a[i] - b[0]);
                b.erase(b.begin());
            }
            else if (abs(a[i] - b[0]) < abs(a[i] - b[b.size() - 1]))
            {
                sum += abs(a[i] - b[b.size() - 1]);
                b.pop_back();
            }
            else
            {
                sum += abs(a[i] - b[0]);
                b.erase(b.begin());
            }

            // cout << sum << " ";
        }

        // cout << endl;

        cout << sum << endl;
    }
    return 0;
}