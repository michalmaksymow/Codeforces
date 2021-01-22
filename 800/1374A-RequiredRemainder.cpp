#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, x, y, n;
    cin >> cases;
    while (cases--)
    {
        cin >> x >> y >> n;
        if (n-n%x+y<=n) 
			cout << n-n%x+y << endl;
		else 
			cout << n-n%x+y-x << endl;
    }
}