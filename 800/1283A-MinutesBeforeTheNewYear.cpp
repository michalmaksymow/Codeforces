#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int h, m;
        cin >> h >> m;
        cout << (23 - h) * 60 + 60 - m << '\n';
    }

    return 0;
}