#include <iostream>
#include <unordered_set>


int main()
{
    std::unordered_set<int> colors;
    int read;
    for (size_t i = 0; i < 4; i++)
    {
        std::cin >> read;
        colors.insert(read);
    }

    std::cout << 4 - colors.size() << std::endl;
    
    return 0;
}