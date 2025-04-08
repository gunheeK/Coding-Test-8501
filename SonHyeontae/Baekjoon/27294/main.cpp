#include <iostream>

int main() {
	int h;
	bool a;

	std::cin >> h >> a;

	if (((12 <= h) && (h <= 16)) && (!a)) std::cout << 320;
	else std::cout << 280;
	
	return 0;
}