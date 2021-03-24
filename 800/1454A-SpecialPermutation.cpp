#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int read;
        cin >> read;
        for (size_t i = 2; i <= read; i++)
        {
            cout << i << ' ';
        }
        cout << 1 << endl;
    }
    return 0;
}