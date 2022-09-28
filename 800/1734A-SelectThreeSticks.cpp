#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int cases{};
  std::cin >> cases;

  while (cases--) {
    int sticks{};
    std::cin >> sticks;

    std::vector<int> lengths{};
    int read;
    for (int i = 0; i < sticks; i++) {
      std::cin >> read;
      lengths.push_back(read);
    }
    std::sort(lengths.begin(), lengths.end());

    std::vector<int> differences{};
    for (int i = 0; i < sticks - 1; i++) {
      differences.push_back(std::abs(lengths[i] - lengths[i + 1]));
    }
    std::sort(differences.begin(), differences.end());

    std::cout << differences[0] + differences[1] + differences[2] << '\n';
  }
}
