#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cards;
    cin >> cards;
    int read, s{}, d{};
    bool turn{};
    list<int> cardValues;
    for (size_t i = 0; i < cards; ++i)
    {
        cin >> read;
        cardValues.push_back(read);
    }
    
    while(!cardValues.empty())
    {
        int m = max(cardValues.front(), cardValues.back());
        turn ? s+=m : d+=m;
        (cardValues.front()==m) ? cardValues.pop_front() : cardValues.pop_back();
        turn = !turn;
    }

    cout << d << ' ' << s << '\n';
    return 0;
}