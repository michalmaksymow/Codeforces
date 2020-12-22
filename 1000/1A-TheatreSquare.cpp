#include <iostream>


int main()
{
    long long n, m, a;
    std::cin >> n >> m >> a;

    long long amountx = (n%a==0) ? n/a : n/a+1;
    long long amounty = (m%a==0) ? m/a : m/a+1;

    std::cout << amountx * amounty << '\n';
    
    return 0;
}