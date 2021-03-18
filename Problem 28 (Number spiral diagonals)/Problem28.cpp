#include <iostream>

int solve() {

    int sum = 1;
    int a = 1;
    int b = 2;

    while (a < 1001 * 1001) {
        for (int i = 0; i < 4; ++i) {
            a += b;
            sum += a;
        }
        b += 2;
    }

    return sum;
}

int main() {
    std::cout << solve() << "\n";
}