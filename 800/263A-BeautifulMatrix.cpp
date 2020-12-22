#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#include <stdlib.h>

int main()
{
    int posx, posy;

    int read;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            std::cin >> read;
            if (read == 1)
            {
                posx = j;
                posy = i;
            }
        }
    }
    std::cout << abs(posx-2) + abs(posy-2) << std::endl;
    return 0;
}