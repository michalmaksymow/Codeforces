#include <iostream>


int main()
{
    int teams;
    std::cin >> teams;

    int* homeColors = new int[teams];
    int* guestColors = new int[teams];

    for (size_t i = 0; i < teams; i++)
        std::cin >> homeColors[i] >> guestColors[i];
    
    int guest{};
    for (size_t i = 0; i < teams; i++)
    {
        for (size_t j = 0; j < teams; j++)
        {
            if (homeColors[i] == guestColors[j] && i != j)
                guest++;
        }
    }
    
    std::cout << guest << std::endl; 
    delete [] homeColors, guestColors;
    return 0;
}