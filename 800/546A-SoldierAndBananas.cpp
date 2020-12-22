#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>

int main()
{
    unsigned int firstBanana, bananas, dollars;
    std::cin >> firstBanana >> dollars >> bananas;

    unsigned int price = 0;
    for (size_t i = 1; i <= bananas; i++)
    {
        price += firstBanana * i;
    }
    
    if (price < dollars)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << price - dollars << std::endl;
    }
    
    return 0;
}