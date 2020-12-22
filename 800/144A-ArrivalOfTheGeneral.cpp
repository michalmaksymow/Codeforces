#include <iostream>
#include <vector>


int main()
{
    int soldiers, read;
    std::cin >> soldiers;

    std::vector<int> heights(soldiers);

    int highest{}, highestindx, shortest{2147483647}, shortestindx;
    for (size_t i = 0; i < soldiers; i++)
    {
        std::cin >> read;
        heights[i] = read;
        if (read > highest)
        {
            highest = read;
            highestindx = i;
        }
        if (read <= shortest)
        {
            shortest = read;
            shortestindx = i;
        }
    }

    int swaps{};
    if(highestindx > shortestindx) swaps--;
    swaps += highestindx + soldiers - shortestindx - 1;

    std::cout << swaps << std::endl;

    return 0;
}