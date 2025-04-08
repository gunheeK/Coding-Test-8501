#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> vec;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		vec.push_back(tmp);
	}

	int left, right;
	for (int i = 0; i < m; i++) {
		cin >> left >> right;

		int sum = 0;

		for (int j = left - 1; j < right; j++) {
			sum += vec[j];
		}

		cout << sum << '\n';
	}
}