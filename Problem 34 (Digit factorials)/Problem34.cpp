#include <iostream>
#include <vector>

std::vector<int> a;

void init() {
    a.push_back(1);
    for (int b = 1; b <= 9; ++b) {
        a.push_back(a[b - 1] * b);
    }
}

int digit(int n) {
    int c = 0;
    while (n > 0) {
        c += a[n % 10];
        n /= 10;
    }
    return c;
}

int solve() {
    init();
    int limit = 999999;
    int d = 0;
    for (int n = 10; n <= limit; ++n) {
        if (n == digit(n)) {
            d += n;
        }
    }
    return d;
}

int main() {
    std::cout << solve() << "\n";
}

