#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstdio>

int main()
{
    std::string word;
    std::cin >> word;

    int upper{};

    for (size_t i = 0; i < word.size(); i++)
    {
        if (isupper(word[i])) 
            upper++;
    }
        
    if (upper > word.size()/2)
    {
        for (char c : word)
        {
            printf("%c", toupper(c));
        }
    }
    else
    {
        for (char c : word)
        {
            printf("%c", tolower(c));
        }
    }
    printf("\n");
    return 0;
}

