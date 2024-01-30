#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int result = m / 2;
        result *= n;

        cout << result << endl;
    }
    return 0;
}