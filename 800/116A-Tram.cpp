#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>

int main()
{
    unsigned int stops;
    std::cin >> stops;

    unsigned int current{0}, max{0}, read;

    for (size_t i = 0; i < stops * 2; i++)
    {
        std::cin >> read;
        if (i % 2 == 0)
            current = current - read;
        else 
            current = current + read;
            
        if (current > max)
            max = current;
    }
    std::cout << max << std::endl;
    return 0;
}