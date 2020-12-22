#include <iostream>
#include <string>

int main()
{
    int games;
    std::cin >> games;
    std::string wins;
    std::cin >> wins;

    int aWins{}, dWins{};
    for (size_t i = 0; i < games; i++)
    {
        if (wins[i] == 'A')
            aWins++;
        else
            dWins++;
    }
     
    if (aWins == dWins)
        std::cout << "Friendship" << std::endl;
    else if (aWins > dWins)
        std::cout << "Anton" << std::endl;
    else
        std::cout << "Danik" << std::endl;  
        
    return 0;
}