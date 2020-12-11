#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string string1, string2;
    std::cin >> string1 >> string2;

    std::transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    std::transform(string2.begin(), string2.end(), string2.begin(), ::tolower);

    for(size_t i = 0; i < string1.size(); i++)
    {
        if (string1[i] < string2[i])
        {
            std::cout << -1 << std::endl;
            return 0;
        }
        else if 
        (string1[i] > string2[i])
        {
            std::cout << 1 << std::endl;
            return 0;
        }
    }
    std::cout << 0 << std::endl;
    return 0;
}