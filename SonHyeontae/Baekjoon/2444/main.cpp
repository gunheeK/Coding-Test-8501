#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;

	for (; i <= (2 * n - 1); i += 2) {
		int num_blank = (2 * n - 1 - i) / 2;

		for (int k = 0; k < num_blank; k++) {
			cout << ' ';
		}
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << '\n';
	}
	i -= 4;
	for (; i >= 1; i -= 2) {
		int num_blank = (2 * n - 1 - i) / 2;

		for (int k = 0; k < num_blank; k++) {
			cout << ' ';
		}
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}