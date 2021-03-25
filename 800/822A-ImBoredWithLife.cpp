#include <bits/stdc++.h>

using namespace std;

long long factorial(long long num)
{
    long long res{1};
    for (size_t i = 2; i <= num; i++)
        res *= i;
    return res;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << factorial(min(a, b)) << endl;
    return 0;
}