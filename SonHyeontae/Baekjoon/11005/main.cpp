#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, b;
	std::cin >> n >> b;

	int e = 0;
	int exp = pow(b, e);
	while (exp <= n) {
		exp = pow(b, ++e);
	}

	string s;

	for (; e >= 0; e--) {
		int i = (n / pow(b, e));
		if (i >= 1) {
			if (i >= 10) {
				s.push_back(static_cast<char>(i + 55));
			}
			else {
				s += to_string(i);
			}
			int p = pow(b, e);
			n %= p;
		}
		else {
			s.push_back('0');
		}
	}

	if (s.front() == '0') s.erase(0, 1);

	for (char e : s)
		cout << e;

	return 0;
}