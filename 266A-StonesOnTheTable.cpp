#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#include <stdlib.h>

int main()
{
    int amount;
    std::cin >> amount;

    std::string stones;
    std::cin >> stones;

    char currentColor;
    char lastColor = '0';
    int toRemove = 0;
    for (size_t i = 0; i < amount; i++)
    {
        currentColor = stones[i];
        if (lastColor == currentColor)
            toRemove++;
        lastColor = currentColor;
    }
    
    std::cout << toRemove << std::endl;

    return 0;
}