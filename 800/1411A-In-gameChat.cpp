#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int chars, len;
    string message;
    while (cases--)
    {
        len = 0;
        cin >> chars >> message;
        for (size_t i = chars - 1; i >= 0; i--)
        {
            if (message[i] == ')')
                len++;
            else
                break;
        }
        cout << (len > message.length() - len ? "Yes" : "No") << '\n';
    }
    return 0;
}