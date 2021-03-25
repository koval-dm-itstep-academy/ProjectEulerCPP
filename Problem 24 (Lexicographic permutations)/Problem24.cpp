#include <iostream>
#include <string>
#include <algorithm>

std::string narayanaAlgorithm(std::string& num) {
    size_t str_size = num.size();
    auto left = num.begin();
    auto right = num.rbegin();
    int* last_min = nullptr; //i


    for (int i = str_size - 2; i > -1; --i) {
        if (num[i] < num[i + 1] && !last_min) {
            last_min = new int(i+1);
            for (int j = i + 2; j < str_size; ++j) {
                if (num[j] > num[i] && num[j] < num[*last_min]) {
                    last_min = new int(j);
                }
            }
            std::swap(num[i], num[*last_min]);
            std::reverse(&num[i + 1], &num[str_size]);
            break;
        }
        if (i == 0)
            std::reverse(&num[i], &num[str_size]);
    }
    return num;
}

void solve() {
}


int main() {
	std::string nums = "0123456789";
    size_t const n = nums.size();
   for (int q = 0; q < 1000000; ++q) { 
        narayanaAlgorithm(nums);
   }
    std::cout << nums << "\n";
}