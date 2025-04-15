#include <iostream>

int main() {
	int total, sum = 0;

	std::cin >> total;

	int tmp;
	for (int i = 0; i < 9; i++) {
		std::cin >> tmp;
		sum += tmp;
	}

	std::cout << total - sum;

	return 0;
}