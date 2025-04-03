#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, x;
	std::cin >> n >> x;

	int* a = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];

		if (a[i] < x) std::cout << a[i] << ' ';
	}

	return 0;
}
