#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int max_x = -10'000, min_x = 10'000;
	int max_y = -10'000, min_y = 10'000;

	int x, y;
	for (int i = 0; i < n; i++) {
		std::cin >> x >> y;
		if (x < min_x) min_x = x;
		if (x > max_x) max_x = x;
		if (y < min_y) min_y = y;
		if (y > max_y) max_y = y;
	}

	int area = (max_x - min_x) * (max_y - min_y);

	if (n == 1) std::cout << 0;
	else {
		std::cout << area;
	}

	return 0;
}