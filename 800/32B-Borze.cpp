#include <bits/stdc++.h>

using namespace std;

int main()
{
    string in, out{};
    cin >> in;
    for (size_t i = 0; i < in.length(); i++)
    {
        if (in[i] == '.')
            out.append("0");
        else if (i != in.length() - 1 && in[i + 1] == '.')
        {
            out.append("1");
            i++;
        }
        else
        {
            out.append("2");
            i++;
        }
    }
    cout << out << '\n';
    return 0;
}