#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<unsigned int> coordinates;
    unsigned int read;
    for (size_t i = 0; i < 3; i++)
    {
        cin >> read;
        coordinates.push_back(read);
    }
    sort(coordinates.begin(), coordinates.end());
    cout << coordinates[2]-coordinates[0] << endl;
    return 0;
}