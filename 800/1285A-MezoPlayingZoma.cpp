#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui commands;
    cin >> commands;
    string s;
    cin >> s;
    ui l{}, r{};
    for (size_t i = 0; i < commands; i++)
    {
        if (s[i] == 'L')
            l++;
        else
            r++;
    }
    cout << l+r+1 << endl;
}