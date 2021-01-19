#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int cases, a, b, c, n;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b >> c >> n;
        n -= (max({a,b,c})-a + max({a,b,c})-b + max({a,b,c})-c);
        if (n==0 || (n>0&&n%3==0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}