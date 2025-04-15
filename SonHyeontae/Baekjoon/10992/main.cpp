#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			std::cout << ' ';
		}
		std::cout << '*';
		if (i != n - 1) for (int k = 0; k < 2 * i - 1; k++) std::cout << ' ';
		else for (int k = 0; k < 2 * i - 1; k++) std::cout << '*';
		if (i != 0) std::cout << '*';
		std::cout << '\n';
	}

	return 0;
}
