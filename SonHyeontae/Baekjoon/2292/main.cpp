#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int s = 1;

	int six = 6;

	int i = 0;

	while (n > s + i * six) {
		s += i * six;
		i++;
	}

	std::cout << i + 1;

	return 0;
}