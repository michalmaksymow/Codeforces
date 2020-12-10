#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{

	int participants;
	int minimum_score_participant;
	int minimum_score = 0;
	int advanced = 0;
	std::cin >> participants >> minimum_score_participant;

	for (size_t i = 0; i < participants; i++)
	{
		int current_score;
		std::cin >> current_score;

		if (i == minimum_score_participant - 1)
		{
			minimum_score = current_score;
		}

		if ((minimum_score != 0 && current_score < minimum_score) || current_score == 0)
			break;
		
		advanced++;
	}

	std::cout << advanced;

	return 0;
}