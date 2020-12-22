#include <iostream>


int main()
{
    int y, x;
    std::cin >> y >> x;

    bool side = true;
    for (size_t i = 0; i < y; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            if (i%2 == 0)
            {
                std::cout << '#';
            }
            else
            {
                if (side && j==x-1)
                    std::cout << '#';
                else if(!side && j==0)
                    std::cout << '#';
                else
                    std::cout << '.';
            }
        }
        std::cout << '\n';
        if (i%2 != 0)
            side = !side;
    }
    return 0;
}