#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases, n;
    cin >> cases;
    while (cases--)
    {
        cin >> n;
        if ((n/2)%2!=0)
            cout << "NO \n" << endl;
        else
        {
            cout << "YES \n" << endl;
            ui left{};
            for (size_t i = 1; i <= n/2; i++)
            {
                cout << i*2 << ' '; 
                left += i*2;
            }
            for (size_t i = 1; i <= n/2-1; i++)
            {
                cout << i*2-1 << ' ';
                left -= i*2-1;
            }
            cout << left << '\n';
        }
    }
    return 0;
}