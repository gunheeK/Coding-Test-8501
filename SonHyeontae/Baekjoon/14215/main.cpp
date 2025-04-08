#include <iostream>

int main() {
	int tri[3] = { 0, 0, 0 };

	int longest_length = 0;
	int longest_idx = 0;

	for (int i = 0; i < 3; i++) {
		std::cin >> tri[i];
		if (tri[i] > longest_length) {
			longest_length = tri[i];
			longest_idx = i;
		}
	}

	int maximum_length = tri[(longest_idx + 1) % 3] + tri[(longest_idx + 2) % 3];
	// Perimeter of the longest possible triangle
	// => (longest side - 1) == (sum of the lengths of the other two sides)
	int new_length = (maximum_length <= tri[longest_idx]) ? maximum_length - 1 : tri[longest_idx];

	std::cout << maximum_length + new_length;

	return 0;
}