#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string word;
        getline(cin >> ws, word);

        int left = 0, right = word.length() - 1;
        if (k >= n / 2 + n % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            while (left < right && word[left] == word[right])
            {
                left++;
                right--;
            }

            if (left >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}