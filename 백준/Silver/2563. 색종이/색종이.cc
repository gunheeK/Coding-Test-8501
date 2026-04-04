#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int c;
	int cnt = 0;
	cin >> c;

	int paper[100][100] = { 0 };

	for (int i = 0; i < c; i++) {
		int l, d;
		cin >> l >> d;

		for (int s = l; s < l + 10; s++) {
			for (int q = d; q < d + 10; q++) {
				paper[s][q] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int s = 0; s < 100; s++) {
			if (paper[i][s] == 1) {
				cnt++;
			}
		}
	}

	cout << cnt;
}