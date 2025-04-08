#include <iostream>

int main() {
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < 5; i++) {
		int min = 100;
		int min_idx = -1;

		for (int j = i; j < 5; j++) {
			if (arr[j] < min) {
				min = arr[j];
				min_idx = j;
			}
		}

		std::swap(arr[i], arr[min_idx]);
	}

	std::cout << sum / 5 << '\n';
	std::cout << arr[2];

	return 0;
}