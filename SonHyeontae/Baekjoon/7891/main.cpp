#include <iostream>

int main() {
	int t;
	std::cin >> t;

	int x, y;
	long long output;
	for (int i = 0; i < t; i++) {
		std::cin >> x >> y;
		output = x + y;
		std::cout << output << '\n';
	}

	return 0;
}