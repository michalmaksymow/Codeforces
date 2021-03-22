#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    int chance = 7 - max(y, w);
    int denominator{6};

    for (size_t i = 2; i <= 3; i++)
    {
        if (chance % i == 0 && denominator % i == 0)
        {
            chance /= i;
            denominator /= i;
        }
    }
    cout << chance << '/' << denominator << endl;
    return 0;
}