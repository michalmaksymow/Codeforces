#include <iostream>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui words, delay;
    cin >> words >> delay;

    ui read, last{}, current{};
    for (size_t i = 0; i < words; i++)
    {
        cin >> read;

        if (read - last > delay)
            current = 1;
        else
            current++;
        
        last = read;
    }

    cout << current << endl;
    return 0;
}