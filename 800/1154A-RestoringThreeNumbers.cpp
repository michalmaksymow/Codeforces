#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int ui;

int main()
{
    vector<ui> numbers;
    ui max{}, read;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> read;
        numbers.push_back(read);
        if (read > max)
            max = read;
    }
    for (size_t i = 0; i < 4; i++)
    {
        if (numbers[i] != max)
        {
            cout << max - numbers[i] << ' ';
        }
    }
    cout << '\n';
    return 0;
}