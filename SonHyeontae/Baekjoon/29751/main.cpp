#include <iomanip>
#include <iostream>

int main() {
	int w, h;
	std::cin >> w >> h;
	std::cout << std::fixed << std::setprecision(1) << (w * h) / 2.0;
	return 0;
}