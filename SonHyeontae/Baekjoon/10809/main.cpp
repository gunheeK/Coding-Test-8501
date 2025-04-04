#include <iostream>
#include <string>

int main() {
	int arr[26];

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	std::string s;
	std::cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (arr[s[i] - 97] == -1) {
			arr[s[i] - 97] = i;
		}
	}

	for (int e : arr) {
		std::cout << e << ' ';
	}

	return 0;
}