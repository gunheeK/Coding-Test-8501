#include <iostream>
#include <string>

using namespace std;

int main() {
	int score = 0;
	string str;

	for (int i = 0; i < 8; i++) {
		cin >> str;
		for (int j = 0; j < 8; j++) {
			if (str[j] == 'P') score += 1;
			else if (str[j] == 'p') score -= 1;
			else if (str[j] == 'N') score += 3;
			else if (str[j] == 'n') score -= 3;
			else if (str[j] == 'B') score += 3;
			else if (str[j] == 'b') score -= 3;
			else if (str[j] == 'R') score += 5;
			else if (str[j] == 'r') score -= 5;
			else if (str[j] == 'Q') score += 9;
			else if (str[j] == 'q') score -= 9;
			else continue;
		}
	}

	cout << score;

	return 0;
}