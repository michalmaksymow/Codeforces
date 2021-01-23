#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int cases;
    cin >> cases;

    string num;
    unsigned int digits;
    while (cases--)
    {
        digits = 0;
        cin >> num;
        digits += ((num[0] - '0') - 1 ) * 10;
        switch (num.length())
        {
            case 1:
                digits += 1;
                break;
            case 2:
                digits += 3;
                break;
            case 3:
                digits += 6;
                break;
            case 4:
                digits += 10;
                break;
        }
        cout << digits << '\n';
    }
    return 0;
}