#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int data;
	for (int i = 0; i < n; i++) {
		std::cin >> data;
		for (int j = 0; j < data; j++) std::cout << '=';
		std::cout << '\n';
	}

	return 0;
}