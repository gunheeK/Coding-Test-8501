#include <iostream>

int main() {
	char c;
	std::cin >> c;

	if (c == 'M') std::cout << "MatKor";
	if (c == 'W') std::cout << "WiCys";
	if (c == 'C') std::cout << "CyKor";
	if (c == 'A') std::cout << "AlKor";
	if (c == '$') std::cout << "$clear";

	return 0;
}