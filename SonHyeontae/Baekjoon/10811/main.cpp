#include <iostream>
#include <numeric>

int main() {
	int n, m;
	
	std::cin >> n >> m;

	int* arr = new int[n + 1];
	std::iota(arr, arr + n + 1, 0);

	int a, b, tmp;

	for (int i = 0; i < m; i++) {
		std::cin >> a >> b;

		for (int j = 0; j <= ((a + b) / 2) - a; j++) {
			tmp = arr[a + j];
			arr[a + j] = arr[b - j];
			arr[b - j] = tmp;
		}
	}

    for (int i = 1; i <= n; ++i) {
        std::cout << arr[i] << ' ';
    }

    delete[] arr;

	return 0;
}
