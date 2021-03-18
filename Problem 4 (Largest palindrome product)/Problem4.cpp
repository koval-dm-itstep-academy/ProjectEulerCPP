#include <iostream>
#include <string>

bool isPalindrome(std::string pal) {
	auto left = pal.begin();
	auto right = pal.end() - 1;
	if (pal.size() > 1) {
		while (left < right) {
			if (*left == *right) {
				++left;
				--right;
			}
			else
				return 0;
		}
	}
	return 1;
}

int solution() {
	int biggest_pal = 0;
	for (int q = 1; q < 1000; ++q) {
		for (int w = 0; w < 1000; ++w) {
			int int_pal = q * w;

			std::string str_pal = std::to_string(int_pal);

			if (biggest_pal <= int_pal && isPalindrome(str_pal))
				biggest_pal = int_pal;
		}
	}
	return biggest_pal;
}

int main() {
	std::cout << solution() << "\n";
}