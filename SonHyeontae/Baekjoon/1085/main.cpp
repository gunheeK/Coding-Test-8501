#include <iostream>

int main() {
	int x, y, w, h;

	std::cin >> x >> y >> w >> h;

	int x_closer = (x < w - x) ? x : w - x;
	int y_closer = (y < h - y) ? y : h - y;
	int output = (x_closer < y_closer) ? x_closer : y_closer;

	std::cout << output;

	return 0;
}