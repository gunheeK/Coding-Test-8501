#include <iostream>
#include <string>

int main() {
	std::string s;
	std::getline(std::cin, s);

	int count = 0;
	bool wordflag = false;

	for (int i = 0; i < s.length(); i++) {
		if ((!wordflag) && ((s[i] - 0) > 32)) {
			count++;
			wordflag = true;
		}
		else if ((s[i] - 0) == 32) {
			wordflag = false;
		}
	}

	std::cout << count;

	return 0;
}