#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases, read;
    cin >> cases;
    while (cases--)
    {
        cin >> read;
        if (read%2==0)
            cout << read/2 << '\n';
        else
            cout << read/2+1 << '\n';
    }
    return 0;
}