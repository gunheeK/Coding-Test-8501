#include <iostream>

int main() {
	int arr[31] = { 0 };

	int tmp;

	for (int i = 0; i < 28; i++) {
		std::cin >> tmp;
		arr[tmp] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (!arr[i]) { std::cout << i << '\n'; }
	}

	return 0;
}
