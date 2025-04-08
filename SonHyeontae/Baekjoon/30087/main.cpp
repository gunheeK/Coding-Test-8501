#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	string str;
	char c;
	for (int i = 0; i < n; i++) {
		cin >> str;
		c = str[0];
		if (c == 'A') {
			if (str.size() < 11) cout << "204\n";
			else cout << "302\n";
		}
		if (c == 'C') cout << "B101\n";
		if (c == 'D') cout << "207\n";
		if (c == 'N') cout << "303\n";
		if (c == 'S') cout << "501\n";
		if (c == 'T') cout << "105\n";
	}

	return 0;
}