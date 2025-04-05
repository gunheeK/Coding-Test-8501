#include <iostream>

using namespace std;

int main() {
	int h, m, t;

	cin >> h >> m >> t;

	if (m + t > 59) {
		h = (h + ((m + t) / 60)) % 24;
		m = (m + t) % 60;
	}
	else {
		m += t;
	}

	cout << h << " " << m << endl;

	return 0;
}
