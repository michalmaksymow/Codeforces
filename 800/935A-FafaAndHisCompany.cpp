#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui n, ways{1};
    cin >> n;
    for (size_t i = 2; i < n/2+1; i++)
        if ((n-i)%i==0)
            ways++;
    
    cout << ways << '\n';
    return 0;
}