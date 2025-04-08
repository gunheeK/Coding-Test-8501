#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> f1, f2;

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	f1.push_back(a); f1.push_back(b); f1.push_back(c);
	f2.push_back(d); f2.push_back(e); f2.push_back(f);

	for (int& ele : f1) ele *= d;
	for (int& ele : f2) ele *= a;

	int x, y;
	if (f1[0] + f2[0] == 0) {
		y = (f1[2] + f2[2]) / (f1[1] + f2[1]);
		x = ((f1[1] * y) < 0) ? ((f1[2] + abs(f1[1] * y)) / f1[0]) : ((f1[2] - abs(f1[1] * y)) / f1[0]);
	}
	else {
		y = (f1[2] - f2[2]) / (f1[1] - f2[1]);
		x = ((f1[1] * y) < 0) ? ((f1[2] + abs(f1[1] * y)) / f1[0]) : ((f1[2] - abs(f1[1] * y)) / f1[0]);
	}

	cout << x << ' ' << y;

	return 0;
}