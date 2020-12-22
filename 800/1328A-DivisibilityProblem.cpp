#include <iostream>
#include <vector>


int main()
{
    int cases;
    std::cin >> cases;

    int a, b, mod;
    std::vector<int> answers;

    for (size_t i = 0; i < cases; i++)
    {
        std::cin >> a >> b;
        mod = a%b;
        if (mod == 0)
            answers.push_back(0);
        else
            answers.push_back(b-(a%b));
    }

    for (size_t i = 0; i < cases; i++)
        std::cout << answers[i] << std::endl;

    return 0;
}