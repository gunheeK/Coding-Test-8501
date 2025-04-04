#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<vector<char>> matrix;

	string s;
	int longest = 0;
	while (cin >> s) {
		if (s.size() > longest) longest = s.size();

		vector<char> mat;
		for (char e : s) {
			mat.push_back(e);
		}
		matrix.push_back(mat);
	}

	for (size_t i = 0; i < longest; i++) {
		for (size_t j = 0; j < matrix.size(); j++) {
			if (i < matrix[j].size()) cout << matrix[j][i];
		}
	}

	return 0;
}