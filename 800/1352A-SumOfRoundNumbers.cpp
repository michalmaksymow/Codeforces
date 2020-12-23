#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    
    list<int> ans1, ans2;
    string read;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> read;
        ans1.push_back(0);
        for (size_t j = 0; j < read.size(); j++)
        {
            if (read[read.size() - j] != '0')
            {
                ans2.push_back((read[read.size() - j] - '0') * j * 10);
                ans1.back()++;
            }
        }
    }

    for (size_t i = 0; i < ans1.size(); i++)
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