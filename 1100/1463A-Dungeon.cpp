#include <iostream>
#include <algorithm>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;
    ui a,b,c;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> a >> b >> c;
        if ((a+b+c)%9==0 && min({a,b,c}) >= (a+b+c)/9)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}