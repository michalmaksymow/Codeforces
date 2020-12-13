#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>

int main()
{
    unsigned int children, seconds;
    std::cin >> children >> seconds;

    std::string arrangement, newarrangement;
    std::cin >> arrangement;

    for (size_t j = 0; j < seconds; j++)
    {
        newarrangement = arrangement;
        for (size_t i = 0; i < children - 1; i++)
        {
            if (arrangement[i] == 'B' && arrangement[i + 1] == 'G')
                std::swap(newarrangement[i], newarrangement[i+1]);
        }
        arrangement = newarrangement;
    }
    
    std::cout << arrangement << std::endl;

    return 0;
}
