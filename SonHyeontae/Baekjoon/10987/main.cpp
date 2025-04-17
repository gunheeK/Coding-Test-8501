#include <iostream>
#include <string>

int main() {
	int count = 0;

	std::string str;
	std::cin >> str;

	for (char e : str) {
		if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
			count++;
	}

	std::cout << count;

	return 0;
}