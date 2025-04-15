#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int num;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		std::cout << num << ' ' << num << '\n';
	}

	return 0;
}