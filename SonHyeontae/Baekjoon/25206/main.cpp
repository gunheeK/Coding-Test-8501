#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	std::cout << std::setprecision(7);
	double avg = 0.0;
	double sum = 0.0, credit_sum = 0.0;

	string s;

	for (int i = 0; i < 20; i++) {
		getline(cin, s);

		if (s.back() == 'P') {
			continue;
		}

		int j = 0;

		while (s[j] - 0 != 32) j++;
		j++;

		double grade = 0.0, credit = 0.0;
		
		credit += s[j] - 48;
		credit_sum += credit;

		j += 4;
		
		switch (s[j]) {
		case 'A':
			grade += 4.0;
			break;
		case 'B':
			grade += 3.0;
			break;
		case 'C':
			grade += 2.0;
			break;
		case 'D':
			grade += 1.0;
			break;
		}

		if (s[j + 1] == '+') grade += 0.5;

		sum += credit * grade;
	}

	avg = sum / credit_sum;

	cout << avg;

	return 0;
}