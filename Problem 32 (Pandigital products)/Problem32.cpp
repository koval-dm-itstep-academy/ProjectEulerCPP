#include <iostream>
#include <string>

bool isPandigital(int multiplicand, int multiplier, int product) {
	std::string pan = std::to_string(multiplicand) + std::to_string(multiplier) + std::to_string(product);
	int elem = 1;
	if (pan.size() < 10) {
		for (int q : pan) {
			std::string str_elem = std::to_string(elem);
			auto find = pan.find(str_elem);
			if (find != pan.npos) {

				pan.erase(pan.begin() + find);
				find = pan.find(str_elem);

				if (find != pan.npos)
					return 0;

				++elem;
			}
		}
	}
	else
		return 0;

	if(elem == 10)
	return 1;

	else
	return 0;
}

int solve() {
	int sum = 0;
	int product;

	for(int q = 1; q < 1000; ++q)
		for (int w = 1 + q; w < 1000; ++w) {
			if (q != w) {
				product = q * w;
			
				if (isPandigital(q, w, product))
					sum += product;
			}
		}
	return sum;
}

int main() {
	std::cout << solve() << "\n";
}