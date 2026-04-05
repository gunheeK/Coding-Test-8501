#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	int N, M;
	cin >> N >> M;
	int r, c, d;
	cin >> r >> c >> d;
	int room[50][50] = { 0 };
	bool visited[50][50] = { false };
	for (int i = 0; i < N; i++) {
		for (int s = 0; s < M; s++) {
			int v;
			cin >> v;
			room[i][s] = v;
			if (v == 1) {
				visited[i][s] = true;
			}
		}
	}

	int cnt = 0;

	while (true) {
		if (!visited[r][c]) {
			visited[r][c] = true;
			cnt++;
		}

		bool check = false;

		for (int i = 0; i < 4; i++) {
			int nx = r + dx[i];
			int ny = c + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (!visited[nx][ny]) check = true;
		}

		if (!check) {
			int b = (d + 2) % 4;
			int bx = r + dx[b];
			int by = c + dy[b];
			if (bx < 0 || by < 0 || bx >= N || by >= M) break;
			if (room[bx][by] == 1) break;
			r = bx;
			c = by;
		}
		else {
			for (int i = 0; i < 4; i++) {
				d = (d + 3) % 4;
				int nx = r + dx[d];
				int ny = c + dy[d];
				if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
				
				if (!visited[nx][ny]) {
					r = nx;
					c = ny;
					break;
				}
			}
		}
	}

	cout << cnt;

}