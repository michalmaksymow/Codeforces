#include <iostream>
#include <string>
#include <vector>

long long sum(std::string line, int length) {
  long long sum{};
  for (size_t i = 0; i < line.length(); ++i) {
    if (line[i] == 'L') {
      sum += i;
    } else {
      sum += length - 1 - i;
    }
  }
  return sum;
}

int main() {
  int cases{};
  std::cin >> cases;

  while (cases--) {
    int length{};
    std::string line;

    std::cin >> length >> line;

    if (length == 1) {
      std::cout << "0" << std::endl;
      continue;
    }

    long long curr = sum(line, length);
    std::vector<long long> inc{};
    for (size_t i = 0; i < length; ++i) {
      if (line[i] == 'L') {
        inc.push_back((length - 1 - i) - i);
      } else {
        inc.push_back(i - (length - i - 1));
      }
    }

    std::sort(inc.rbegin(), inc.rend());

    for (size_t i = 0; i < inc.size(); ++i) {
      if (inc[i] >= 0) {
        curr += inc[i];
      }
      inc[i] = curr;
      std::cout << curr << ' ';
    }
    std::cout << '\n';
  }
}
