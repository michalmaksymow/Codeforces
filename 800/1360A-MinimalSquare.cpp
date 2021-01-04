#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;

    ui a, b;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> a >> b;
        cout << pow(min(max(2*a,b), max(a,2*b)),2) << '\n';
    }

    return 0;
}