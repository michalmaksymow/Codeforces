#include <iostream>
#include <string>
#include <cstdlib>
#include <set>
#include <map>

using namespace std;
typedef unsigned int ui;
typedef unsigned long long ull;

bool isFair(ull number)
{
    string s = to_string(number);
    set<char> digits;
    for (size_t j = 0; j < s.length(); j++)
        digits.insert(s[j]);
    
    digits.erase('0');
    ull numeric;
    for (char digit : digits)
    {
        numeric = digit-'0';
        if (number % numeric != 0)
            return false;
    }
    return true;
}

int main()
{
    ui cases;
    cin >> cases;
    ull read, num;
    map<ull, ull> prevAns;
    for (size_t i = 0; i < cases; i++)
    {
        cin >> read;
        num = read;

        if (prevAns.find(read) == prevAns.end())
        {
            while(!isFair(num))
                num++;
            cout << num << endl;
            prevAns.insert(std::pair<ull, ull>(read, num));
        }
        else
            cout << prevAns[read] << endl;
    }
    return 0;   
}