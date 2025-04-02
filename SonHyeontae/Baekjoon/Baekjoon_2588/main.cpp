#include <iostream>

int main() {
	int a, b;

	std::cin >> a >> b;

	std::cout << (b % 10) * a << std::endl;
	std::cout << (b % 100 / 10) * a << std::endl;
	std::cout << b % 1000 / 100 * a << std::endl;
	std::cout << a * b << std::endl;

	return 0;
}