#include <iostream>

int main() {
	int a, b, c, answer;
	std::cin >> a >> b >> c;

	answer = (((a * b) / c) > ((a / b) * c)) ? (a * b / c) : (a / b * c);

	std::cout << answer;

	return 0;
}