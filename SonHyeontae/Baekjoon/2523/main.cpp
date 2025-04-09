#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++) {
		int stars = (i <= n) ? (i) : (2 * n - i);
		for (int k = 0; k < stars; k++) std::cout << '*';
		std::cout << '\n';
	}

	return 0;
}
