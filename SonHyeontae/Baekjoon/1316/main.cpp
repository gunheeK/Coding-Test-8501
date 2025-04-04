#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	string s;

	int count = n;

	for (int i = 0; i < n; i++) {
		cin >> s;

		bool breakpoint = false;
		char anchor = s[0];
		for (int j = 0; j < s.length() - 1; j++) {
			if (s[j + 1] == anchor) {
				anchor = s[j + 1];
				continue;
			}
			else {
				for (int k = j + 1; k < s.length(); k++) {
					if (s[k] == anchor) {
						count--;
						breakpoint = true;
						break;
					}
				}
				anchor = s[j + 1];
			}
			if (breakpoint == true) break;
		}
	}

	cout << count;

	return 0;
}