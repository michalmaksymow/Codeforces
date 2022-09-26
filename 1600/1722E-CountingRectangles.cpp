#include <iostream>
#include <vector>

struct Rectangle {
  long long height, width;
  Rectangle(long long height, long long width) : height(height), width(width) {}
  Rectangle() : height(0), width(0) {}
};

int main() {
  int cases{};
  std::cin >> cases;

  while (cases--) {
    long long r{}, q{}, r1{}, r2{};
    std::cin >> r >> q;

    std::vector<Rectangle> rectangles{};
    for (size_t i = 0; i < r; ++i) {
      std::cin >> r1 >> r2;
      rectangles.push_back(Rectangle(r1, r2));
    }

    Rectangle smaller, bigger;
    for (size_t i = 0; i < q; ++i) {
      std::cin >> r1 >> r2;
      smaller.height = r1;
      smaller.width = r2;
      std::cin >> r1 >> r2;
      bigger.height = r1;
      bigger.width = r2;
    }
  }
}
