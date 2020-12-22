#include <iostream>
#include <string>


int main()
{
    std::string line1, line2;
    std::cin >> line1 >> line2;

    std::string output {};
    for (size_t i = 0; i < line1.size(); i++)
    {
        if (line1[i] != line2[i])
            output += '1';
        else
            output += '0';
    }

    std::cout << output;

    return 0;
}