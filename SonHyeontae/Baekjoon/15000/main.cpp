#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	for (char e : str) {
		std::cout << char(e - ('a' - 'A'));
	}

	return 0;
}