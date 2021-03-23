#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;

    long long *arr = new long long[size * size];

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cin >> arr[j + i * size];
        }
    }

    vector<int> res;
    res.push_back(sqrt(arr[1] * arr[2] / arr[2 + 1 * size]));
    for (size_t i = 1; i < size - 1; i++)
        res.push_back(sqrt(arr[i + 1 + i * size] * arr[i + (i - 1) * size] / arr[i + 1 + (i - 1) * size]));
    res.push_back(sqrt(arr[size - 1 + (size - 2) * size] * arr[size - 1 + (size - 3) * size] / arr[size - 2 + (size - 3) * size]));

    for (size_t i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << '\n';

    delete[] arr;
    return 0;
}
