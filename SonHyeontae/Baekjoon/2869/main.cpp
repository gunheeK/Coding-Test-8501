#include <iostream>

int main() {
	int a, b, v;
	std::cin >> a >> b >> v;

	int days = 1;

	days += ((v - a) > (a - b)) ? ((v - a) / (a - b)) : 1;

	std::cout << days;
}