#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;

	int n;
	cin >> n;

	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		vec.push_back(tmp);
	}

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (vec[j] > vec[j + 1]) swap(vec[j], vec[j + 1]);
		}
	}

	for (auto e : vec) cout << e << '\n';

	return 0;
}