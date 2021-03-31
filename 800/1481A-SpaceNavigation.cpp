#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        string instr;
        cin >> instr;
        unordered_map<char, int> orders;
        for (size_t i = 0; i < instr.size(); ++i)
            orders[instr[i]]++;

        if (x > 0 && x > orders['R'])
        {
            cout << "NO\n";
            continue;
        }
        else if (x < 0 && abs(x) > orders['L'])
        {
            cout << "NO\n";
            continue;
        }
        else if (y > 0 && y > orders['U'])
        {
            cout << "NO\n";
            continue;
        }
        else if (y < 0 && abs(y) > orders['D'])
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}