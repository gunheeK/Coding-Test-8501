#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;
int board[101][101];
int dist[101][101];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int INF = 1e9;

struct Node
{
	int cost, x, y;
	bool operator>(const Node& other) const {
		return cost > other.cost;
	}
};
void dijkstra(int N, int M) {
	priority_queue<Node, vector<Node>, greater<Node>> pq;
	fill(&dist[0][0], &dist[0][0] + 101 * 101, INF);
	dist[0][0] = 0;
	pq.push({ 0, 0, 0 });

	while (!pq.empty()) {
		auto cur = pq.top();
		pq.pop();
		int d = cur.cost;
		int x = cur.x;
		int y = cur.y;

		if (d > dist[x][y]) continue;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

			int nextCost = d + board[nx][ny];

			if (dist[nx][ny] > nextCost) {
				dist[nx][ny] = nextCost;
				pq.push({ dist[nx][ny], nx, ny });
			}
		}
	}
}

int main() {
	int N, M;
	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;

		for (int s = 0; s < tmp.size(); s++) {
			board[i][s] = tmp[s] - '0';
		}
	}

	dijkstra(N, M);

	cout << dist[N - 1][M - 1];
}