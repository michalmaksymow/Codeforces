#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
	int number_of_words;
	std::cin >> number_of_words;

	std::vector<std::string> words;
	words.reserve(number_of_words);

	for (size_t i = 0; i < number_of_words; i++)
	{
		std::string word;
		std::cin >> word;


		if (word.length() > 10)
		{
			std::string output = "";
			std::stringstream ss;
			ss << word.at(0) << word.length() - 2 << word.at(word.length() - 1);
			words.emplace_back(ss.str());
		}
		else
		{
			words.emplace_back(word);
		}
	}

	for (size_t i = 0; i < number_of_words; i++)
	{
		std::cout << words[i] << "\n";
	}

	return 0;
}