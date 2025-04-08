#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int output = 2;

	for (int i = 0; i < n; i++) {
		output = output * 2 - 1;
	}

	output *= output;

	std::cout << output;

	return 0;
}