#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	int count = 0;

	for (int i = 0; i < s.length(); i++) {
		if ((s[i] == '=') || (s[i] == '-')) {
			continue;
		}
		else if ((s[i] == 'l') || (s[i] == 'n')) {
			if (s[i + 1] == 'j') {
				i++;
			}
		}
		else if ((s[i] == 'd') && (s[i + 1] == 'z') && (s[i + 2] == '=')) {
			i += 2;
		}
		count++;
	}

	cout << count;

	return 0;
}