#include <iostream>
#include <string>

int main()
{
    std::string number;
    std::cin >> number;

    int lucky{};
    for (size_t i = 0; i < number.size(); i++)
    {
        if (number[i] == '4' || number[i] == '7')
        {
            lucky++;
        }
    }
    
    if (lucky == 7 || lucky == 4)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}