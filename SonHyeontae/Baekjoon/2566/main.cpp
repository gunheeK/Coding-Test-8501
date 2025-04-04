#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> matrix(9, vector<int>(9, 0));

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> matrix[i][j];
		}
	}

	int max = 0;
	int x = 0, y = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				x = i, y = j;
			}
		}
	}

	cout << max << '\n' << x + 1 << ' ' << y + 1;

	return 0;
}