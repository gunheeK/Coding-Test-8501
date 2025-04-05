#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, b;
	cin >> n >> b;

	int e = 0;
	double exp = pow(b, e);
	while (exp < n) {
		exp = pow(b, ++e);
	}
	e--;

	string s;

	for (; e >= 0; e--) {
		double i = (n / pow(b, e));
		if (i > 1) {
			if (i >= 10) {
				s.push_back(char(i + 55));
			}
			else {
				s.push_back(char(i));
			}
			int p = pow(b, e);
			n %= p;
		}
		else {
			s.push_back('0');
		}
	}

	for (char e : s)
		cout << e;

	return 0;
}