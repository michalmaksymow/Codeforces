
#include <iostream>
#include <vector>


int main()
{
    int k, l, m, n, dragons;
    std::cin >> k >> l >> m >> n >> dragons;

    std::vector<bool> harmed(dragons, false);

    for (size_t i = k; i <= dragons; i+=k)
        harmed[i-1] = true;
    for (size_t i = l; i <= dragons; i+=l)
        harmed[i-1] = true;
    for (size_t i = m; i <= dragons; i+=m)
        harmed[i-1] = true;
    for (size_t i = n; i <= dragons; i+=n)
        harmed[i-1] = true;

    int count{};
    for (size_t i = 0; i < harmed.size(); i++)
    {
        if (harmed[i])
            count++;
    }

    std::cout << count << std::endl;
    
    return 0;
}