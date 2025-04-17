#include <iostream>

int main() {
	int x;
	std::cin >> x;

	int remainder = x % 3;

	if (remainder == 1) std::cout << 'U';
	else if (remainder == 2) std::cout << 'O';
	else if (remainder == 0) std::cout << 'S';

	return 0;
}