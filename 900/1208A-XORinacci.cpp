#include <iostream>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;
    
    ui f0, f1, n;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> f0 >> f1 >> n;
        switch (n%3) {
            case 0:
                cout << f0 << '\n';
                break;
            case 1:
                cout << f1 << '\n';
                break;
            case 2:
                cout << (f0^f1) << '\n';
                break;
        }
    }
    return 0;
}