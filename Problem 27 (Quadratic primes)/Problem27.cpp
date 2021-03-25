#include <iostream>

//n2 + an + b
bool isPrimeNumber(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int formula(int n, int a, int b) {
	return n * n + a * n + b;
}

int valuesN(int a, int b) {
	int n = 0;
	while (isPrimeNumber(formula(n, a, b))) {
		++n;
	}
	return n;
}

int coefficientsProduct() {
	int common_nums = 0;
	int max_a = 0;
	int max_b = 0;
	for (int a = 0; a < 1000; ++a) {
		for (int b = 0; b <= 1000; ++b) {
			int values = valuesN(a,b);
			if (values > common_nums) {
				common_nums = values;
				max_a = a;
				max_b = b;
			}
		}
	}
	return max_a * max_b;
}


int solve() {
	return coefficientsProduct();
}

int main() {
	std::cout << coefficientsProduct() << "\n";
}