#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

vector<pair<int, int>> graph[100001];
long long dist[100001];
const long long INF = (1LL<<60);

void dijkstra(const vector<int>& finish, int N) {
	priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
	fill(dist, dist + N + 1, INF);

	for (int s : finish) {
		if (dist[s] != INF) continue;
		dist[s] = 0;
		pq.push({ 0, s });
	}

	while (!pq.empty()) {
		auto now = pq.top();
		pq.pop();
		long long d = now.first;
		int u = now.second;
		if (d > dist[u]) continue;
		for (auto next : graph[u]) {
			int v = next.first;
			int w = next.second;
			if (dist[v] > dist[u] + w) {
				dist[v] = dist[u] + w;
				pq.push({ dist[v], v });
			}
		}
	}
}

int main() {
	int N, M, K;
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++) {
		int from, to, weight;
		cin >> from >> to >> weight;
		graph[to].push_back({ from, weight });
	}
	vector<int> finish(K);
	for (int i = 0; i < K; i++) {
		int s;
		cin >> s;
		finish[i] = s;
	}

	dijkstra(finish, N);
	int max = 1;
	for (int i = 2; i <= N; i++) {
		if (dist[max] < dist[i]) {
			max = i;
		}
	}

	cout << max << "\n" << dist[max] << "\n";
}