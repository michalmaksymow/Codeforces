#include <iostream>
#include <numeric>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui simon, antisimon, stones;
    cin >> simon >> antisimon >> stones;

    bool turn{false};
    while (stones > gcd(stones, turn ? antisimon : simon))
    {
        stones -= gcd(stones, turn ? antisimon : simon);
        turn = !turn;
    }
    
    cout << (int)turn << endl;

    return 0;
}