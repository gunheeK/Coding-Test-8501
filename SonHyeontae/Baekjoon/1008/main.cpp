#include <iostream>

int main() {
	int a, b;
	
	std::cin >> a;
	std::cin >> b;

	std::cout.precision(9);
	std::cout << std::fixed;

	std::cout << double(a) / b;

	return 0;
}