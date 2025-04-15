#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a < b) {
		if (a < c) {
			if (b < c) {
				cout << a << ' ' << b << ' ' << c; // a < b < c
			}
			else {
				cout << a << ' ' << c << ' ' << b; // a < c < b
			}
		}
		else {
			cout << c << ' ' << a << ' ' << b; // c < a < b
		}
	}
	else {
		if (c > a) {
			cout << b << ' ' << a << ' ' << c; // b < a < c
		}
		else {
			if (b > c) {
				cout << c << ' ' << b << ' ' << a; // c < b < a
			}
			else {
				cout << b << ' ' << c << ' ' << a; // b < c < a
			}
		}
	}

	return 0;
}