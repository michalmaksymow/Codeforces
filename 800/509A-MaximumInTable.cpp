#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui n;
    cin >> n;

    ui* table = new ui[n*n];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i==0 || j ==0)
                table[j+i*n] = 1;
            else
                table[j+i*n] = table[(j-1)+i*n] + table[j+(i-1)*n];

            if (i==n-1 && j ==n-1)
                cout << table[j+i*n] << endl;
        }
    }
    delete [] table;
    return 0;
}