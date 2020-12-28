#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int redSocks, blueSocks;
    cin >> redSocks >> blueSocks;

    unsigned int differentSocksDays, sameSocksDays;
    differentSocksDays = min(redSocks, blueSocks);
    sameSocksDays = (max(redSocks, blueSocks) - min(redSocks, blueSocks))/2;

    cout << differentSocksDays << ' ' << sameSocksDays;
    return 0;
}