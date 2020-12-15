#include <iostream>


int main()
{
    int people, height;
    std::cin >> people >> height;

    int width{}, read;
    for (size_t i = 0; i < people; i++)
    {
        std::cin >> read;
        if (read > height)
        {
            width += 2;
            continue;
        }
        width++;
    }
    
    std::cout << width;

    return 0;
}