#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, curr{0}, max{1};
    long long read, last{};
    cin >> num;
    for (size_t i = 0; i < num; i++)
    {
        cin >> read;
        if (read <= last)
            curr = 1;
        else
            curr++;

        last = read;
        if (curr > max)
            max = curr;
    }
    cout << max << endl;
    return 0;
}