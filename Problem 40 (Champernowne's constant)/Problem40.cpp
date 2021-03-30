#include <iostream>
#include <string>

int solve() {
    std::string a;
    int i = 0;
    do {
        a += std::to_string(i);
        ++i;
    } while (a.size() <= 1000000);
    int product = 1;
    for (i = 1; i <= 1000000; i *= 10) {
        product *= a[i] - '0';
    }
    return product;
}

int main() {
    std::cout << solve() << "\n";
}