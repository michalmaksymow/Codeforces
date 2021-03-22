#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;
    while (cases--)
    {
        ui goods, read, sum{};
        cin >> goods;
        for (size_t i = 0; i < goods; i++)
        {
            cin >> read;
            sum += read;
        }
        if (sum % goods == 0)
            cout << sum / goods << endl;
        else
            cout << sum / goods + 1 << endl;
    }
    return 0;
}