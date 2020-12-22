#include <iostream>
#include <string>


int main()
{
    std::string situation;
    std::cin >> situation;

    int consecutive{1};
    char last = 'n';
    for (size_t i = 0; i < situation.size(); i++)
    {
        if (last == situation[i])
            consecutive++;
        else
        {
            last = situation[i];
            consecutive = 1;
        }
        
        if (consecutive == 7)
        {
            std::cout << "YES" << '\n';
            return 0;
        }
    }

    std::cout << "NO" << '\n';

    return 0;
}