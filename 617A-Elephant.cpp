#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>

int main()
{
    unsigned int distance;
    std::cin >> distance;

    unsigned int steps;

    steps = (distance / 5);
    if (distance % 5 != 0)
        steps++;

    std::cout << steps << std::endl;

    return 0;
}