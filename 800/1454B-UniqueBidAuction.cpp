#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int part;
    vector<int> arr;
    unordered_map<int, int> nums;
    while (cases--)
    {
        cin >> part;
        for (size_t i = 0; i < part; i++)
        {
            int read;
            cin >> read;
            arr.push_back(read);
            nums[read]++;
        }
        int min{INT_MAX};
        int minindx{-1};
        for (size_t i = 0; i < part; i++)
        {
            if (arr[i] < min && nums[arr[i]] == 1)
            {
                min = arr[i];
                minindx = i + 1;
            }
        }
        cout << minindx << '\n';
        arr.clear();
        nums.clear();
    }
    return 0;
}