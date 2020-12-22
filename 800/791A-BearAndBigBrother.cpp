#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>

int main()
{
    int a, b;
    std::cin >> a >> b;

    size_t i;
    for(i = 1;; i++)
    {
        a = 3 * a;
        b = 2 * b;
        if(a > b)
            break;
    }

    std::cout << i << std::endl;
}