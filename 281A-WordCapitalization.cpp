#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#include <cstdio>

int main()
{
    std::string read;
    std::cin >> read;

    read[0] = toupper(read[0]);
    std::cout << read;
}