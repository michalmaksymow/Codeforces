#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui citizens;
    cin >> citizens;
    vector<ui> money;
    ui read;
    for (size_t i = 0; i < citizens; i++)
    {
        cin >> read;
        money.push_back(read);
    }
    
    ui giveAway{};
    for (size_t i = 0; i < citizens; i++)
        giveAway += *max_element(money.begin(), money.end()) - money[i];

    cout << giveAway << endl;

    return 0;
}