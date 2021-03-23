#include <bits/stdc++.h>

using namespace std;

int main()
{
    int digits;
    cin >> digits;
    string letters;
    cin >> letters;

    unordered_map<char, unsigned int> count;
    for (size_t i = 0; i < letters.length(); i++)
        count[letters[i]]++;

    for (size_t i = 0; i < count['n']; i++)
        cout << "1 ";

    for (size_t i = 0; i < count['z']; i++)
        cout << "0 ";

    cout << '\n';

    return 0;
}