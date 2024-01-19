#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        string line;
        getline(cin >> ws, line);
        stringstream nums(line);
        int data;

        while (nums >> data)
        {
            a.push_back(data);
        }

        sort(a.begin(), a.end());

        long long l1, l2, l3;
        int count = 0;

        for (int i = n - 1; i >= 2; --i)
        {
            int left = 0;
            int right = i - 1;

            while (left < right)
            {
                if ((1LL << (a[left] - 1) + 1LL << (a[right] - 1)) > (1LL << (a[i] - 1)))
                {
                    count += (right - left);
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}