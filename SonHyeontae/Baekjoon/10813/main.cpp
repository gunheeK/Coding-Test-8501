#include <iostream>

int main() {
	int n, m;

	std::cin >> n >> m;

	int* arr = new int[n + 1];

	for (int i = 0; i <= n; i++) {
		arr[i] = i;
	}

	int a, b;
	
	for (int i = 0; i < m; i++) {
		std::cin >> a >> b;
		std::swap(arr[a], arr[b]);
	}

	for (int i = 1; i <= n; i++) {
		std::cout << arr[i] << ' ';
	}

	return 0;
}
