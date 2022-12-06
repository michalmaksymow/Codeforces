#include <algorithm>
#include <iostream>
#include <string>

int main() {
  int t{};
  std::cin >> t;
  while (t--) {
    int length{};
    std::string s;

    std::cin >> length >> s;
    auto max = std::max_element(s.begin(), s.end());
    int alphabet_length = *max - 'a' + 1;
    std::cout << alphabet_length << '\n';
  }
}
