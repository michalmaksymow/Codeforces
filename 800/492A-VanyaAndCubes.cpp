#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int cubes;
    cin >> cubes;
    unsigned int reduction{1}, levels{1};
    while (cubes >= reduction)
    {
        cubes -= reduction;
        levels++;
        reduction += levels;
    }
    cout << levels-1 << '\n';
    return 0;
}