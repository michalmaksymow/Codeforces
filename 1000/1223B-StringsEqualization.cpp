#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string s, t;
        cin >> s >> t;
        set<char> ss, st;
        for (size_t i = 0; i < s.length(); i++)
            ss.insert(s[i]);
        for (size_t i = 0; i < t.length(); i++)
            st.insert(t[i]);

        bool found{false};
        for (char i = 97; i <= 122; ++i)
        {
            if (ss.find(i) != ss.end() && st.find(i) != st.end())
            {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}