#include <iostream>

int main() {
	int l;
	std::cin >> l;
	int t = (l % 5 == 0) ? (l / 5) : ((l / 5) + 1);
	std::cout << t;
	return 0;
}