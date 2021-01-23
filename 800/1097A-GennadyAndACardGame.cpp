#include <bits/stdc++.h>

using namespace std;

int main()
{
    string table, read;
    cin >> table;
    bool y{false};
    for (size_t i = 0; i < 5; ++i)
    {
        cin >> read;
        if (table[0] == read[0] || table[1] == read[1])
            y=true;
    }
    if (y)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}