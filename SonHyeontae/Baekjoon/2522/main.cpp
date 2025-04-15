#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++) {
		int stars = (i <= n) ? (i) : (2 * n - i);
		int spaces = n - stars;
		for (int j = 0; j < spaces; j++) std::cout << ' ';
		for (int k = 0; k < stars; k++) std::cout << '*';
		std::cout << '\n';
	}

	return 0;
}