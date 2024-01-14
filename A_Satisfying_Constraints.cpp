#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        int mini = INT_MIN, maxi = INT_MAX;
        vector<int> notEq;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string line;
            getline(cin >> ws, line);
            stringstream words(line);
            int a, x;
            words >> a;
            words >> x;

            if (a == 1)
            {
                mini = max(mini, x);
                // cout << "min" << mini << endl;
            }
            else if (a == 2)
            {
                maxi = min(maxi, x);
                // cout << "max" << maxi << endl;
            }
            else
            {
                notEq.push_back(x);
                // cout << "eq" << notEq << endl;
            }
        }

        int num = 0;
        num = maxi - mini;
        // cout << "num:" << num << endl;
        if (num < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            num++;
            for (int j = 0; j < notEq.size(); j++)
            {
                if (notEq[j] >= mini && notEq[j] <= maxi)
                {
                    num--;
                    // cout << "ne: " << j << " " << num << endl;
                }
            }
            num = max(num, 0);
            cout << num << endl;
        }
    }

    return 0;
}