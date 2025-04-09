#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 1; i <= (n * 2) - 1; i++) {
		if (i < n) {
			for (int j = 0; j < i; j++) std::cout << '*';
			for (int k = 0; k < (n - i) * 2; k++) std::cout << ' ';
			for (int j = 0; j < i; j++) std::cout << '*';
		}
		else {
			for (int j = 0; j < ((n * 2) - i); j++) std::cout << '*';
			for (int k = 0; k < ((i - n) * 2); k++) std::cout << ' ';
			for (int j = 0; j < ((n * 2) - i); j++) std::cout << '*';
		}
		std::cout << '\n';
	}

	return 0;
}