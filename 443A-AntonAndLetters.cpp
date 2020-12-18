#include <iostream>
#include <string>
#include <unordered_set>


int main()
{
    std::string letterSet;
    std::getline(std::cin, letterSet);

    std::unordered_set<char> letters;

    for (size_t i = 0; i < letterSet.size(); i++)
    {
        if (isalpha(letterSet[i]))
        {
            letters.insert(letterSet[i]);
        }
    }
    
    std::cout << letters.size() << std::endl;
    
    return 0;
}