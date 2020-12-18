#include <iostream>


int main()
{
    int drinks;
    std::cin >> drinks;

    int sum{}, read;
    for (size_t i = 0; i < drinks; i++)
    {
        std::cin >> read;
        sum += read;
    }
    
    float percent = static_cast<float>(sum)/static_cast<float>(drinks);

    std::cout << percent << std::endl;

    return 0;
}