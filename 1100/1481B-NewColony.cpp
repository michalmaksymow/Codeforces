#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n, k, read, last{0};
        cin >> n >> k;
        vector<int> h;
        bool fell{false};
        for (size_t i = 0; i < n; ++i)
        {
            cin >> read;
            h.push_back(read);
        }
        while (k--)
        {
            if (fell)
                break;
            for (size_t i = 0; i < n; ++i)
            {
                if (i == n - 1)
                {
                    fell = true;
                    break;
                }
                if (h[i] >= h[i + 1])
                    continue;
                else
                {
                    h[i]++;
                    last = i + 1;
                    break;
                }
            }
        }
        if (fell)
            cout << -1 << '\n';
        else
            cout << last << '\n';
    }
    return 0;
}