#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
    int operations;
    std::cin >> operations;

    int value = 0;
    std::string read;
    for (size_t i = 0; i < operations; i++)
    {
        std::cin >> read;
        if (read == "++X" || read == "X++")
            value++;
        else 
            value--;
    }
    
    std::cout << value << std::endl;
    return 0;
}