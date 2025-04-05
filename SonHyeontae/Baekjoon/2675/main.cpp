#include <iostream>
#include <string>

using namespace std;

int main() {
	while (!cin.eof()) {
		string s;
		getline(cin, s);

		int r = s[0] - 48;

		if (s.length() > 2) {
			for (int i = 2; i < s.length(); i++) {
				for (int j = 0; j < r; j++) {
					cout << s[i];
				}
			}
			cout << '\n';
		}
	}

	return 0;
}
