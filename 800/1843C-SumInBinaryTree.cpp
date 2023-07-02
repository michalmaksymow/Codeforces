#include <iostream>
#include <vector>

int main() {
    int t{};
    std::cin >> t;

    while (t--) {
        long long vertex{0ll}, sum{0ll};
        std::cin >> vertex;

        do {
            sum += vertex;
            vertex /= 2ll;
        } while (vertex >= 1ll);

        std::cout << sum << std::endl;
    }
}
