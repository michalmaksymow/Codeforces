#include <iostream>


int main()
{
    int friends;
    std::cin >> friends;

    int* receiver = new int[friends];

    int read;
    for (size_t i = 1; i <= friends; i++)
    {
        std::cin >> read;
        receiver[read-1] = i;
    }
    
    for (size_t i = 0; i < friends; i++)
        std::cout << receiver[i] << ' ';

    delete [] receiver;
    return 0;
}