#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;

	if (((n * 100) / m) > 0) std::cout << "Yes";
	else std::cout << "No";

	return 0;
}