#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	int area = n * 100;

	vector<vector<int>> vec(n, vector<int>(2, 0));
	
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vec[i][0] = x;
		vec[i][1] = y;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int abs_x = abs(vec[i][0] - vec[j][0]);
			int abs_y = abs(vec[i][1] - vec[j][1]);

			if ((abs_x < 10) && (abs_y < 10)) {
				area -= (10 - abs_x) * (10 - abs_y);
			}
		}
	}

	cout << area;
	
	return 0;
}