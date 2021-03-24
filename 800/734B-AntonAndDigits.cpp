#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int sum{};
    int k256 = min({k2, k5, k6});
    sum += k256 * 256;
    k2 -= k256;
    sum += min(k2, k3) * 32;
    cout << sum << endl;
    return 0;
}