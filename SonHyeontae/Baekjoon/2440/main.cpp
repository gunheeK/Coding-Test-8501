#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			std::cout << '*';
		}
		if (i == 1) break;
		std::cout << '\n';
	}
}