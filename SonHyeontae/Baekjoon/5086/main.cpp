#include <iostream>

int main() {
	int a = -1;
	int b = -1;

	while ((a != 0) || (b != 0)) {
		std::cin >> a >> b;

		if (a == 0 || b == 0) break;

		if (a < b) {
			if (b % a == 0) std::cout << "factor\n";
			else std::cout << "neither\n";
		}
		else {
			if (a % b == 0) std::cout << "multiple\n";
			else std::cout << "neither\n";
		}
	}
}