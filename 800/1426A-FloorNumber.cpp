#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int p, x;
        cin >> p >> x;
        p -= 2;
        if (p <= 0)
            cout << 1 << endl;
        else
        {
            if (p % x == 0)
                cout << p / x + 1 << endl;
            else
                cout << p / x + 2 << endl;
        }
    }
    return 0;
}