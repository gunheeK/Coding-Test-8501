#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m, 0));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                int value;
                cin >> value;
                matrix[j][k] += value;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j];
            if (j != m - 1) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
