#include <iostream>

int main() {
	int a, b, v;
	std::cin >> a >> b >> v;

	int days = 1;

	if (a != v) {
		days += ((v - a) / (a - b));

		if (((v - a) % (a - b)) != 0) days++;
	}

	std::cout << days;

	return 0;
}