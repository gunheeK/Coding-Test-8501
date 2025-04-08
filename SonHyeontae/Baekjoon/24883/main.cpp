#include <iostream>

int main() {
	char c;
	std::cin >> c;

	if ((c - 'N' == 0) || (c - 'n' == 0)) std::cout << "Naver D2";
	else std::cout << "Naver Whale";

	return 0;
}