#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;

	int idx;
	std::cin >> idx;

	std::cout << s[idx - 1];

	return 0;
}