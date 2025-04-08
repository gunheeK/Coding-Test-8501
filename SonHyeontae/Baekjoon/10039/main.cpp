#include <iostream>

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int tmp;
		std::cin >> tmp;
		if (tmp < 40) {
			sum += 40;
			continue;
		}
		sum += tmp;
	}

	std::cout << sum / 5;

	return 0;
}