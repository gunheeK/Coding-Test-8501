#include <iostream>

int main() {
	int n, answer = 0;
	std::cin >> n;

	if (n <= 10) answer = 1;
	else if (n > 81) answer = 0;
	else {
		for (int i = 2; i <= 9; i++) {
			if ((n / i <= 9) && (n % i == 0)) answer = 1;
		}
	}

	std::cout << answer;

	return 0;
}