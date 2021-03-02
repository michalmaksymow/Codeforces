#include <bits/stdc++.h>

using namespace std;

int main()
{
    int disks;
    cin >> disks;
    string pos, pass;
    cin >> pos >> pass;

    int moves{};
    for (size_t i = 0; i < disks; i++)
        moves += min({abs(pos[i] - pass[i]), abs(pos[i] - pass[i] - 10), abs(pos[i] - pass[i] + 10)});
    
    cout << moves << endl;

    return 0;
}