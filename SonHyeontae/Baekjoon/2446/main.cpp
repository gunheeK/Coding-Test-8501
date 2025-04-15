#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < ((2 * n) - 1); i++) {
		int spaces = (i < n) ? (i) : (2 * n - i - 2);
		int stars = (i < n) ? (2 * (n - i) - 1) : (2 * (i - n + 2) - 1);

		for (int j = 0; j < spaces; j++) std::cout << ' ';
		for (int k = 0; k < stars; k++) std::cout << '*';
		std::cout << '\n';
	}

	return 0;
}