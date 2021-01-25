#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases, read;
    cin >> cases;
    while (cases--)
    {
        cin >> read;
        ui a{}, b{};
        for (size_t i = 1; i <= read/2-1; ++i)
            a+=pow(2,i);
        for (size_t i = read/2; i <= read-1; ++i)
            b+=pow(2,i);
        a+=pow(2, read);
        cout << a-b << endl;
    }
    return 0;
}