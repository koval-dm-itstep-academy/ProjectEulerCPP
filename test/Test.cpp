#include <iostream>
#include <string>

int main() {
	std::string pan = "123456789";

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

	return 1;
}