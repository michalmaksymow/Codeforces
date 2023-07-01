#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t{};
  std::cin >> t;

  while (t--) {
    int len{};
    std::cin >> len;

    std::vector<int> elements(len);
    for (int i{}; i < len; ++i) {
      std::cin >> elements[i];
    }

    std::sort(elements.begin(), elements.end());
    int sum{};
    for (int i{}; i < len / 2; ++i) {
      sum += elements[len - 1 - i] - elements[i];
    }

    std::cout << sum << std::endl;
  }
}
