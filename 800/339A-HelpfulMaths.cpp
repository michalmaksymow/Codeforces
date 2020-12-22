#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
    std::vector<int> nums;
    std::string read;
    std::cin >> read;

    char c;
    
    for (size_t i = 0; i < read.size(); i++)
    {
        c = read[i];
        if (c == '+')
            continue;
        
        nums.push_back(c - '0');
    }
    
    std::sort(nums.begin(), nums.end());

    std::cout << nums[0];
    for (size_t i = 1; i < nums.size(); i++)
    {
        std::cout << "+" << nums[i];
    }
    std::cout << '\n';
    
    return 0;
}