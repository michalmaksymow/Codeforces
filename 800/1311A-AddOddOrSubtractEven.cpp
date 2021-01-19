#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases, a, b;
    cin >> cases;
    while(cases--)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << "0\n";
            continue;
        }
        bool aEven = (a%2==0);
        bool bEven = (b%2==0);
        if (a<b)
        {
            if ((aEven && !bEven) || (!aEven && bEven))
                cout << "1\n";
            else 
                cout << "2\n";   
        }
        else
        {
            if ((aEven && !bEven) || (!aEven && bEven))
                cout << "2\n";
            else 
                cout << "1\n";   
        }
    }
    return 0;
}