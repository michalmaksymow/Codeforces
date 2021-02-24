#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        bool odd{}, even{};
        int length, read{}, sum{};
        cin >> length;
        while (length--)
        {
            cin >> read;
            sum += read;
            if (read % 2 == 0)
                even = true;
            else
                odd = true;
        }
        if (sum % 2 == 1 || (even && odd))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}