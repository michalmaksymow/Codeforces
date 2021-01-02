#include <iostream>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int officers{}, untreated{}, read;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> read;
        if (read == -1)
        {
            if (officers == 0)
                untreated++;
            else
                officers--;
        }
        else
            officers += read;
    }

    cout << untreated << '\n';     

    return 0;
}