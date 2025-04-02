#include <iostream>

int main() {
	using namespace std;

	int h, m;
	cin >> h >> m;

	if (m < 45) {
		h = (h == 0) ? (23) : (h - 1);
		m = m + 60 - 45;
	}
	else {
		m -= 45;
	}

	cout << h << " " << m << endl;

	return 0;
}