#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int t;
	for (int i = 0; i < n; i++) {
		cin >> t;

		if (t >= 25) {
			cout << t / 25 << ' ';
			t %= 25;
		}
		else { cout << "0 "; }
		if (t >= 10) {
			cout << t / 10 << ' ';
			t %= 10;
		}
		else { cout << "0 "; }
		if (t >= 5) {
			cout << t / 5 << ' ';
			t %= 5;
		}
		else { cout << "0 "; }
		if (t >= 1) {
			cout << t / 1;
			t %= 1;
		}
		else { cout << "0"; }

		cout << '\n';
	}

	return 0;
}