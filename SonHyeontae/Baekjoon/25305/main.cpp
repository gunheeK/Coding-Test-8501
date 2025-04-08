#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;

	int n, k;
	cin >> n >> k;

	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		vec.push_back(x);
	}

	for (int i = 0; i < k; i++) {
		int max = -1;
		int max_idx = -1;

		for (int j = i; j < n; j++) {
			if (max < vec[j]) {
				max = vec[j];
				max_idx = j;
			}
		}

		swap(vec[i], vec[max_idx]);
	}

	cout << vec[k - 1];

	return 0;
}