#include <iostream>
#include <unordered_set>
#include <string>


int main()
{
    int letters;
    std::cin >> letters;

    std::string word;
    std::cin >> word;

    std::unordered_set<char> set;
    for (size_t i = 0; i < letters; i++)
        set.insert(std::tolower(word[i]));
    
    std::cout << (set.size() == 26 ? "YES" : "NO") << std::endl;
    
    return 0;
}