#include <iostream>
#include <vector>

int main() {
	int n, m;
	std::cin >> n >> m;

	int* arr = new int[n + 1]();

	int a, b, c;
	for (int i = 0; i < m; i++) {
		std::cin >> a >> b >> c;

		std::fill(arr + a, arr + b + 1, c);
	}

	for (int i = 1; i <= n; i++) {
		std::cout << arr[i] << ' ';
	}

	delete[] arr;
	
	return 0;
}
