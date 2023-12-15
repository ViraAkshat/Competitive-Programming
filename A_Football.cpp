#include <iostream>
using namespace std;

int main()
{
    string players;
    getline(cin, players);
    int count = 1;
    bool danger = false;

    for (int i = 1; i <= players.length(); i++)
    {
        if (players[i] == players[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count == 7)
        {
            danger = true;
            break;
        }
    }

    if (danger)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}