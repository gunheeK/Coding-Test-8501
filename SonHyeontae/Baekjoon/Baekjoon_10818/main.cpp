#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n;
	std::cin >> n;

	int* arr = new int[n];

	int min = 1'000'000;
	int max = -1'000'000;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	std::cout << min << ' ' << max;

	delete[] arr;

	return 0;
}