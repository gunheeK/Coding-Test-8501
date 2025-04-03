#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a = -1, b = -1;

	while (true) {
		std::cin >> a >> b;
		if ((a == 0) && (b == 0)) break;
		std::cout << a + b << '\n';
	}

	return 0;
}