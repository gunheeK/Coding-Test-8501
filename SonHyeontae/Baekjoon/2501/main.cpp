#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> arr;

	int n, k;
	cin >> n >> k;

	int i = 1;
	while (arr.size() < k) {
		if (n % i == 0) arr.push_back(i);
		i++;
		if (i > n) break;
	}

	if (arr.size() < k) cout << 0;
	else cout << arr[k - 1];

	return 0;
}