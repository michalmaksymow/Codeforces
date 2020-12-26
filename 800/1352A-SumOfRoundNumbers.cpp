#include <iostream>
#include <list>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    string read;
    vector<string> readNums;

    for (size_t i = 0; i < cases; i++)
    {
        cin >> read;
        readNums.push_back(read);
    }

    list<int> ans1, ans2;
    int num;
    for (size_t i = 0; i < cases; i++)
    {
        read = readNums[i];
        ans1.push_back(0);
        for (size_t j = 0; j < read.size(); j++)
        {
            if (read[read.size() - j - 1] != '0')
            {
                num = (read[read.size()-j-1]-'0') * ceil(pow(10, j));
                ans2.push_back(num);
                ans1.back()++;
            }
        }
    }

    for (size_t i = 0; i < cases; i++)
    {
        cout << ans1.front() << '\n';
        for (size_t j = 0; j < ans1.front(); j++)
        {
            cout << ans2.front() << ' ';
            ans2.pop_front();
        }
        cout << '\n';
        ans1.pop_front();
    }

    return 0;
}