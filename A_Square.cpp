#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> x, y;

        for (int i = 0; i < 4; i++)
        {
            string line;
            getline(cin >> ws, line);
            stringstream num(line);

            int x1, y1;
            num >> x1;
            num >> y1;

            if (find(x.begin(), x.end(), x1) == x.end())
            {
                x.push_back(x1);
            }
            if (find(y.begin(), y.end(), y1) == y.end())
            {
                y.push_back(y1);
            }
        }

        cout << abs((x[0] - x[1]) * (y[0] - y[1])) << endl;
    }

    return 0;
}