#include <array>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
  int cases{0};
  std::cin >> cases;

  while (cases--) {
    int words{};
    std::string readWord;
    std::array<std::vector<std::string>, 3> guys;
    std::map<std::string, int> wordCounter;

    std::cin >> words;
    for (size_t i = 0; i < 3; ++i) {
      for (size_t j = 0; j < words; ++j) {
        std::cin >> readWord;
        wordCounter[readWord]++;
        guys[i].push_back(readWord);
      }
    }

    for (size_t i = 0; i < 3; ++i) {
      int score{};
      for (auto &&word : guys[i]) {
        if (wordCounter[word] == 1) {
          score += 3;
        } else if (wordCounter[word] == 2) {
          score += 1;
        }
      }
      std::cout << score << ' ';
    }
    std::cout << std::endl;
  }
}
