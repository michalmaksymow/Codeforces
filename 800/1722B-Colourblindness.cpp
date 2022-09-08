#include <iostream>
#include <string>

int main() {
  int cases;
  std::cin >> cases;

  while (cases--) {
    int length;
    std::string row1, row2;
    std::cin >> length >> row1 >> row2;

    bool same{true};
    for (size_t i = 0; i < length; ++i) {
      if ((row1[i] == 'R' && row2[i] != 'R') ||
          (row2[i] == 'R' && row1[i] != 'R')) {
        same = false;
        break;
      }
    }
    if (same)
      std::cout << "yes" << std::endl;
    else
      std::cout << "no" << std::endl;
  }
}
