#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++)	std::cout << ' ';
		for (int k = 0; k < i - 1; k++) std::cout << '*';
		std::cout << '*';
		for (int k = 0; k < i - 1; k++) std::cout << '*';
		std::cout << '\n';
	}
	
	return 0;
}