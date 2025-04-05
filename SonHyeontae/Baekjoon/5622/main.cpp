#include <iostream>
#include <string>

using namespace std;

int main() {
	int t = 0;
	int d[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	string s;
	cin >> s;

	for (char e : s) {
		t += d[e - 65];
	}

	cout << t;

	return 0;
}