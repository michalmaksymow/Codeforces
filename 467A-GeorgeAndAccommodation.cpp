#include <iostream>


int main()
{
    int rooms;
    std::cin >> rooms;
    
    int aviable{}, people, size;

    for (size_t i = 0; i < rooms; i++)
    {
        std::cin >> people >> size;
        if (size - people >= 2)
        {
            aviable++;
        }
    }

    std::cout << aviable << std::endl;

    return 0;
}