#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int t;
	
	std::cin >> t;

	int a;
	int b;

	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		std::cout << a + b << '\n';
	}

	return 0;
}