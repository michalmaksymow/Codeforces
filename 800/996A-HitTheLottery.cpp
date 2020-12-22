#include <iostream>


int main()
{
    int balance;
    std::cin >> balance;

    int notes{};
    notes += balance/100 + (balance%100)/20 + (balance%100%20)/10 + (balance%100%20%10)/5 + (balance%100%20%10%5);

    std::cout << notes << std::endl;
    return 0;
}