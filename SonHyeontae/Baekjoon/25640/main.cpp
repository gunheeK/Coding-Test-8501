#include <iostream>
#include <string>

int main() {
	std::string answer, str;
	int n, counter = 0;

	std::cin >> answer >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> str;
		if (answer == str) counter++;
	}

	std::cout << counter;

	return 0;
}