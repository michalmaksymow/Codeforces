#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int rotations{};
    char prev{'a'};
    for (size_t i = 0; i < str.length(); i++)
    {
        rotations += (int)min(abs(str[i] - prev), 26 - abs((str[i] - prev)));
        prev = str[i];
    }
    cout << rotations << endl;
    return 0;
}