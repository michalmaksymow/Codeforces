#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a{}, b{}, read, shelves;
    for (size_t i = 0; i < 3; i++)
    {
        cin >> read;
        a += read;
    }
    for (size_t i = 0; i < 3; i++)
    {
        cin >> read;
        b += read;
    }
    cin >> shelves;

    shelves -= a / 5 + (a % 5 == 0 ? 0 : 1);
    shelves -= b / 10 + (b % 10 == 0 ? 0 : 1);
    if (shelves < 0)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}