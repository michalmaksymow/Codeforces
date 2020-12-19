#include <iostream>
#include <vector>


int main()
{
    int cases;
    std::cin >> cases;

    std::vector<int> answers;
    int read;
    for (size_t i = 0; i < cases; i++)
    {
        std::cin >> read;
        if (read % 2 == 0)
            answers.push_back(read/2-1);
        else if (read == 2 || read == 1)
            answers.push_back(0);
        else
            answers.push_back(read/2);
    }
    
    for (size_t i = 0; i < cases; i++)
        std::cout << answers[i] << std::endl;

    return 0;
}