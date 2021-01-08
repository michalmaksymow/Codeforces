#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef unsigned int ui;

int main()
{
    vector<ui> calories;
    string squares;

    ui read;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> read;
        calories.push_back(read);
    }

    ui caloriesWasted{};
    cin >> squares;
    for (size_t i = 0; i < squares.length(); i++)
        caloriesWasted += calories[(squares[i]-'0')-1];
    
    cout << caloriesWasted << endl;

    return 0;
}