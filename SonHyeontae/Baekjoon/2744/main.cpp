#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	for (char e : str) {
		if (int(e) < 'a') {
			std::cout << char(e + 'a' - 'A');
		}
		else {
			std::cout << char(e - ('a' - 'A'));
		}
	}

	return 0;
}