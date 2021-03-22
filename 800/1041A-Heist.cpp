#include <bits/stdc++.h>

using namespace std;

int main()
{
    int amount, read, min{2147483647}, max{};
    cin >> amount;
    for (size_t i = 0; i < amount; i++)
    {
        cin >> read;
        if(min > read) min = read;
        if(max < read) max = read;
    }

    cout << max-min+1-amount << endl;

    return 0;
}