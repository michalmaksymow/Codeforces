#include <iostream>
#include <unordered_set>


bool isBeautiful(int year)
{
    std::unordered_set<int> digits;
    digits.insert(year % 10);
    digits.insert((year/10) % 10);
    digits.insert((year/100) % 10);
    digits.insert((year/1000) % 10);

    if (digits.size() == 4)
    {
        return true;
    }
    return false;
}

int main()
{
    int year;
    std::cin >> year;

    while (1)
    {
        year++;
        if (isBeautiful(year))
            break;
    }

    std::cout << year << std::endl;

    return 0;
}