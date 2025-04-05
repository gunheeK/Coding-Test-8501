#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += s[i] - 48;
	}

	std::cout << sum;

	return 0;
}