#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int sum = 0;
	int num;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		sum += num;
	}

	std::cout << sum;

	return 0;
}