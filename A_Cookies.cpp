#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string line;
    getline(cin >> ws, line);

    vector<int> nums;
    int data;
    int odd = 0, even = 0;
    stringstream words(line);

    while (words >> data)
    {
        nums.push_back(data);
        if (data % 2 == 0)
            even++;
        else
            odd++;
    }

    if (odd % 2 == 0)
    {
        cout << even;
    }
    else
    {
        cout << odd;
    }

    return 0;
}
