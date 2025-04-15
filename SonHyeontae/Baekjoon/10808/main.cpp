#include <iostream>
#include <string>
#include <vector>

int main() {
	std::string str;
	std::cin >> str;

	std::vector<int> counter(26, 0);

	for (int i = 0; i < str.size(); i++) {
		counter[str[i] - 'a']++;
	}

	for (int e : counter) std::cout << e << ' ';

	return 0;
}
