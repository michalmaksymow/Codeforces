#include <iostream>

using namespace std;
typedef unsigned int uint;

int main()
{
    uint competitions;
    cin >> competitions;

    uint read;
    cin >> read;
    uint best{read}, worst{read}, amazing{};
    for (size_t i = 0; i < competitions - 1; i++)
    {
        cin >> read;
        if (read > best)
        {
            best = read;
            amazing++;
        }
        if (read < worst)
        {
            worst = read;
            amazing++;
        }
    }

    cout << amazing << endl;
    return 0;
}