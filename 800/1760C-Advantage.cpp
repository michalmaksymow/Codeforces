#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t{};
  std::cin >> t;

  while (t--) {
    size_t len{};
    std::cin >> len;

    std::vector<int> strength(len);
    for (int i{}; i < len; ++i) {
      std::cin >> strength[i];
    }

    std::vector<int> sorted = strength;
    std::sort(sorted.begin(), sorted.end());

    for (size_t i = 0; i < len; ++i) {
      if (strength[i] == sorted[len - 1]) {
        std::cout << strength[i] - sorted[len - 2] << ' ';
      } else {
        std::cout << strength[i] - sorted[len - 1] << ' ';
      }
    }
    std::cout << std::endl;
  }
}
