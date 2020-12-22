#include <iostream>
#include <unordered_map>


int main()
{
    std::string name1, name2, pile;
    std::cin >> name1 >> name2 >> pile;

    std::unordered_map<char, size_t> letters;

    for (size_t i = 0; i < pile.size(); i++)
    {
        letters[pile[i]]++;
    }
    for (size_t i = 0; i < name1.size(); i++)
    {
        if (letters.find(name1[i]) == letters.end() || letters[name1[i]] == 0)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }
        else
        {
            letters[name1[i]]--;
        }
    }
    for (size_t i = 0; i < name2.size(); i++)
    {
        if (letters.find(name2[i]) == letters.end() || letters[name2[i]] == 0)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }
        else
        {
            letters[name2[i]]--;
        }
    }
    for (size_t i = 0; i < letters.size(); i++)
    {
        if(letters[i] != 0)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
    return 0;
}