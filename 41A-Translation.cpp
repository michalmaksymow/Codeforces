#include <iostream>
#include <string>


int main()
{
    std::string word, reverse;
    std::cin >> word >> reverse;

    bool isReverse = true;
    for (size_t i = 0; i < word.size(); i++)
    {
        if(word[i] != reverse[reverse.size()- 1 - i]) 
        {
            isReverse = false;
            break;
        }
    }
    
    if (isReverse)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}