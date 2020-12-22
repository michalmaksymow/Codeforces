#include <iostream>
#include <vector>


int main()
{
    int levels;
    std::cin >> levels;

    std::vector<bool> pass(levels, false);

    int plevels, read;
    for (size_t j = 0; j < 2; j++)
    {
        std::cin >> plevels;

        for (size_t i = 0; i < plevels; i++)
        {
            std::cin >> read;
            pass[read-1] = true;
        }
    }
    
    for (size_t i = 0; i < levels; i++)
    {
        if (pass[i] == false)
        {
            std::cout << "Oh, my keyboard!" << std::endl;

            return 0;
        }
    }

    std::cout << "I become the guy." << std::endl;

    return 0;
}