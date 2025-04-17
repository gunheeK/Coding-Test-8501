#include <iostream>
#include <iomanip>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	double score = 4.0;

	if (str[0] == 'F') score = 0.0;
	else {
		score -= str[0] - 'A';
		if (str[1] == '+') score += 0.3;
		else if (str[1] == '-') score -= 0.3;
	}

	std::cout << std::fixed << std::setprecision(1);
	std::cout << score;

	return 0;
}