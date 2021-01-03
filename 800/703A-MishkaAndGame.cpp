#include <iostream>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui rounds;
    cin >> rounds;

    ui mread, cread, m{}, c{};
    for (size_t i = 0; i < rounds; i++)
    {
        cin >> mread >> cread;
        if (mread > cread)
            m++;
        else if (mread < cread)
            c++;
    }
    
    if (m>c)
        cout << "Mishka" << endl;
    else if (m<c)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}