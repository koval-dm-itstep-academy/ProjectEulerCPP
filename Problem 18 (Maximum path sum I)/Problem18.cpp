#include <iostream>
#include <vector>

void fillVector(std::vector<int>& vec){
	vec = {
		75,
		95, 64,
		17, 47, 82,
		18, 35, 87, 10,
		20, 04, 82, 47, 65,
		19, 01, 23, 75, 03, 34,
		88, 02, 77, 73, 07, 63, 67,
		99, 65, 04, 28, 06, 16, 70, 92,
		41, 41, 26, 56, 83, 40, 80, 70, 33,
		41, 48, 72, 33, 47, 32, 37, 16, 94, 29,
		53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,
		70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,
		91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,
		63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,
		04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 04, 23
	};
}

int solve() {
	std::vector<int> triangle;
	fillVector(triangle);
	int max_sum = 0;
	int elem = 0;
	for (int q = 0; q < 15; ++q) {
		if (elem + q + 1 < triangle.size()) {
			if (triangle[elem + q + 1] > triangle[elem + q + 2]) {
				max_sum += triangle[elem + q + 1];
				elem += q + 1;
			}
			else {
				max_sum += triangle[elem + q + 2];
				elem += q + 2;
			}
		}
		else if (elem + q + 2 < triangle.size()) {
			if (triangle[elem + q + 1] > triangle[elem + q + 2]) {
				max_sum += triangle[elem + q + 1];
				elem += q + 1;
			}
			else {
				max_sum += triangle[elem + q + 2];
				elem += q + 2;
			}
		}
	}

	return max_sum;
}

int main() {
	std::cout << solve() << "\n";
}