#include <iostream>
#include <string>

using namespace std;
typedef unsigned int ui;

int main()
{
    ui cases;
    cin >> cases;
    string s;
    ui zerosU, zerosC;
    bool foundOne;
    for (size_t i = 0; i < cases; i++)
    {
        zerosU = 0;
        zerosC = 0;
        foundOne = false;
        cin >> s;
        for (size_t j = 0; j < s.length(); j++)
        {
            if (s[j] == '1')
            {
                foundOne = true;
                zerosC += zerosU;
                zerosU = 0;
            }
            else if (s[j] == '0' && foundOne)
                zerosU++;
        }
        cout << zerosC << endl;
    }
    return 0;   
}