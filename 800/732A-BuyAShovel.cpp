#include <iostream>

using namespace std;

typedef unsigned int ui;

int main()
{
    ui price, coin;
    cin >> price >> coin;

    ui amount{1};
    ui cost;

    while (1)
    {
        cost = amount*price;
        if (cost%10 == coin)
            break;
        else if (cost%10 == 0)
            break;

        amount++;
    }
        
    cout << amount << endl;

    return 0;
}