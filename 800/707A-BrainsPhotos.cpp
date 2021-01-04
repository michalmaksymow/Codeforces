#include <iostream>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui n, m;
    cin >> n >> m;

    bool bw = true;
    char read;
    for (size_t i = 0; i < n*m; i++)
    {
        cin >> read;
        if (read == 'C' || read == 'M' || read == 'Y' || read == 'K')
        {
            bw = false;
            break;
        }
    }

    if (bw)
        cout << "#Black&White" << endl;
    else 
        cout << "#Color" << endl;
    

    return 0;
}