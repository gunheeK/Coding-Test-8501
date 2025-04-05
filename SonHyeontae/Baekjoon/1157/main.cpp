#include <iostream>
#include <string>

using namespace std;

int main() {
	std::string s;
	std::cin >> s;

	int arr[26];
	for (int i = 0; i < 26; i++) {
		arr[i] = 0;
	}

	for (int i = 0; i < s.length(); i++) {
		if (s[i] - 0 < 91) {
			arr[s[i] - 65] += 1;
		}
		else {
			arr[s[i] - 97] += 1;
		}
	}

	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] >= arr[max]) {
			max = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if ((arr[max] == arr[i]) && (max != i)) {
			cout << '?';
			return 0;
		}
	}

	cout << char(max + 65);

	return 0;
}
