#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;

    vector<ui> a, b;
    ui read;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> read;
        a.push_back(read);
        cin >> read;
        b.push_back(read);
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }

    vector<ui> answers;
    ui difference;
    ui steps;
    for (size_t i = 0; i < cases; i++)
    {
        steps = 0;
        difference = b[i] - a[i];
        if (difference != 0)
        {
            steps = difference/10;
            difference = difference % 10;
        }
        answers.push_back(steps);
        if (difference != 0)
            answers[i]++;
    }

    for (size_t i = 0; i < cases; i++)
        cout << answers[i] << endl;

    return 0;
}