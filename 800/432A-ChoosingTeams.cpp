#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui students, times;
    cin >> students >> times;

    ui classifies{}, read;
    for (size_t i = 0; i < students; i++)
    {
        cin >> read;
        if (read+times<=5) 
            classifies++;
    }
    cout << classifies/3 << endl;
    return 0;
}