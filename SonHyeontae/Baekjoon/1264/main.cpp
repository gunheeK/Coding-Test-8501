#include <iostream>
#include <string>

int main() {
	int counter = 0;
	std::string str;

	while (true) {
		std::getline(std::cin, str);

		counter = 0;

		if ((str.size() == 1) && (str[0] == '#')) break;
		for (int i = 0; i < str.size(); i++) {
			if ((str[i] == 'A') || (str[i] == 'a')) counter++;
			else if ((str[i] == 'E') || (str[i] == 'e')) counter++;
			else if ((str[i] == 'I') || (str[i] == 'i')) counter++;
			else if ((str[i] == 'O') || (str[i] == 'o')) counter++;
			else if ((str[i] == 'U') || (str[i] == 'u')) counter++;
			else continue;
		}

		std::cout << counter << '\n';
	}

	return 0;
}