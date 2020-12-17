#include <iostream>


int main()
{
    int amount;
    std::cin >> amount;

    int groups{}, last{}, current;
    
    for (size_t i = 0; i < amount; i++)
    {
        std::cin >> current;
        if (current != last)
            groups++;

        last = current;
    }

    std::cout << groups;

    return 0;
}