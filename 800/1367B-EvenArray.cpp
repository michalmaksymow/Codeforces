#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;
    ui length, read, badO, badE;
    while (cases--)
    {
        badO = badE = 0;
        cin >> length;
        for (size_t i = 0; i < length; i++)
        {
            cin >> read;
            if (i%2==0)
            {
                if (read % 2 == 1) 
                    badE++;
            }
            else
            {
                if (read % 2 == 0) 
                    badO++;
            }
        }
        if (badE == badO)
            cout << badE << '\n';
        else
            cout << "-1 \n";
    }
    return 0;
}