#include <iostream>

using namespace std;

int main()
{
    unsigned int initialTime{240};
    unsigned int problems, travelTime;
    cin >> problems >> travelTime;

    initialTime -= travelTime;
    unsigned int solved{};
    for (size_t i = 1; i <= problems; i++)
    {
        if (initialTime < i*5)
            break;
        initialTime -= i*5;
        solved++;
    }
    
    cout << solved << endl;
    return 0;
}