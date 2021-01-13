#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;
    
    ui n, read;
    vector<pair<ui, ui>> aEven, aOdd; // value, index
    while (cases--)
    {
        cin >> n;
        for (size_t i = 1; i <= n*2; i++)
        {
            cin >> read;
            if (read % 2 == 0)
                aEven.push_back(pair<ui, ui>(read, i));
            else
                aOdd.push_back(pair<ui, ui>(read, i));
        }
        for (size_t i = 0; i<aEven.size()-1 && n>1; i+=2)
        {
            cout << aEven[i].second << ' ' << aEven[i+1].second << '\n';
            n--;
        }
        for (size_t i = 0; i<aOdd.size()-1 && n>1; i+=2)
        {
            cout << aOdd[i].second << ' ' << aOdd[i+1].second << '\n';
            n--;
        }
        aEven.clear();
        aOdd.clear();
    }
    return 0;
}