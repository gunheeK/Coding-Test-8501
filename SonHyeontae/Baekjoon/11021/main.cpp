#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	std::cin >> t;

	int a, b;
	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		std::cout << "Case #" << i + 1 << ": " << a + b << '\n';
	}
}
