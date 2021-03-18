#include <iostream>

int solve() {
    int month[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
    int day = 2;
    int sunday = 0;
    for (int i = 1901; i < 2001; i++) {
        if (i % 4 == 0) {
            month[1] = 29;
        }
        else {
            month[1] = 28;
        }
        for (int j = 0; j < 12; j++) {
            if (day % 7 == 0) {
                sunday++;
            }
            day += month[j];
        }
    }
    return sunday;
}

int main() {
    std::cout << solve() << "\n";
}