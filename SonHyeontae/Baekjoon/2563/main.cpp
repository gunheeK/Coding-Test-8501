#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> vec(101, vector<int>(101, 0));
	
	int n, x, y;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				vec[j][k] = 1;
			}
		}
	}

	int area = 0;
	for (int i = 1; i < 101; i++) {
		for (int j = 1; j < 101; j++) {
			if (vec[i][j] == 1) area++;
		}
	}

	cout << area;
	
	return 0;
}