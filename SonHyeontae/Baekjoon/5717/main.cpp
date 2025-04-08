#include <iostream>

int main() {
	int m, f;
	
	while (true) {
		std::cin >> m >> f;
		if ((m == 0) && (f == 0)) break;

		std::cout << m + f << '\n';
	}

	return 0;
}