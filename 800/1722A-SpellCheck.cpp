#include <iostream>
#include <string>

int main() {
  int cases{0};
  std::cin >> cases;

  while (cases--) {
    int length{0};
    std::string s;
    std::cin >> length >> s;

    if (length != 5) {
      std::cout << "NO" << std::endl;
      continue;
    }

    std::sort(s.begin(), s.end());
    if (s != "Timru") {
      std::cout << "NO" << std::endl;
      continue;
    }
    std::cout << "YES" << std::endl;
  }
}
