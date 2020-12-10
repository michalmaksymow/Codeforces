#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
	int problems;
	std::cin >> problems;

	int solution = 0;
	
	for (size_t i = 0; i < problems; i++)
	{
		int sure = 0;
		int read;
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> read;
			sure += read;
		}

		if (sure >= 2) 
			solution++;
	}

	std::cout << solution;

	return 0;
}