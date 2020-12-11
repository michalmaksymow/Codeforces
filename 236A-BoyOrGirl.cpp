#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>

int main()
{
    std::string name;
    std::cin >> name;

    std::unordered_set<char> chars;

    for (size_t i = 0; i < name.size(); i++)
    {
        chars.insert(name[i]);
    }
    
    if (chars.size() % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;
}