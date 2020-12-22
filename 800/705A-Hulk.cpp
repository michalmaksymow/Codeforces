#include <iostream>
#include <string>


int main()
{
    int number;
    std::cin >> number;

    for (size_t i = 1; i <= number; i++)
    {
        std::cout << "I ";
        if (i % 2 != 0)
            std::cout << "hate ";
        else
            std::cout << "love ";
        
        
        if (i != number)
            std::cout << "that ";
        else
            std::cout << "it";
    }
    std::cout << '\n';

    return 0;
}