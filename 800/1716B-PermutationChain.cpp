#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void printVector(const std::vector<int> &vec) {
  for (auto i = vec.begin(); i != vec.end(); ++i) {
    cout << *i << ' ';
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int length{};
    cin >> length;
    cout << length << '\n';

    std::vector<int> perm(length);
    std::iota(perm.begin(), perm.end(), 1);
    for (size_t i = length - 1; i > 0; --i) {
      printVector(perm);
      std::swap(perm[i], perm[i - 1]);
    }
    printVector(perm);
  }
}
