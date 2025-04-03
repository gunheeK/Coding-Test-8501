#include <iostream>

int main() {
	int max = 0;
	int idx = -1;
	int tmp;

	for (int i = 1; i <= 9; i++) {
		std::cin >> tmp;
		if (tmp > max) {
			max = tmp;
			idx = i;
		}
	}

	std::cout << max << '\n' << idx;

	return 0;
}