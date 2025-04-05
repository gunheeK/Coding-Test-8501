#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int count = 0;
	int v;
	std::cin >> v;

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) count++;
	}

	std::cout << count;

	return 0;
}
