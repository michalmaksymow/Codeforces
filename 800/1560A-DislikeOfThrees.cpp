#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

bool endWithThree(uint32_t num) {
  auto s = std::to_string(num);
  if (s[s.length() - 1] == '3') {
    return true;
  }
  return false;
}

int main() {
  int32_t t;
  std::cin >> t;

  while (t--) {
    int32_t limit;
    std::cin >> limit;

    int32_t current{0};
    int32_t step{0};

    while (step != limit) {
      current++;
      if (current % 3 == 0 || endWithThree(current)) {
        continue;
      }
      step++;
    }

    std::cout << current << std::endl;
  }
}
