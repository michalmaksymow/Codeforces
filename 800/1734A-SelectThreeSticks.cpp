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
    int read{};
    for (int i = 0; i < sticks; i++) {
      std::cin >> read;
      lengths.push_back(read);
    }
    std::sort(lengths.begin(), lengths.end());

    int min{2147483647};
    for (size_t i = 0; i < lengths.size() - 2; ++i) {
      int curr = lengths[i + 2] - lengths[i];
      if (curr < min) {
        min = curr;
      }
    }

    std::cout << min << '\n';
  }
}
