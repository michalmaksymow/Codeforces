#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int matches;
        cin >> matches;
        if (matches < 4)
        {
            cout << 4 - matches << endl;
            continue;
        }
        if (matches % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}