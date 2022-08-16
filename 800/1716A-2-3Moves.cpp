#include <cmath>
#include <iostream>

using namespace std;

int main() {
  uint32_t t;
  cin >> t;

  while (t--) {
    double desiredPosition;
    cin >> desiredPosition;

    if (desiredPosition == 1) {
      cout << 2 << endl;
      continue;
    }
    if (desiredPosition <= 3) {
      cout << 1 << endl;
      continue;
    }
    cout << (uint32_t)ceil(desiredPosition / 3.0) << endl;
  }
}
