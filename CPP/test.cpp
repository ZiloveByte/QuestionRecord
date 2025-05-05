#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> G(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> G[i][j];
            }
        }
        vector<int> p(2 * n + 1, 0);
        unordered_set<int> seen;
        for (int k = 2; k <= 2 * n; ++k) {
            int i = 1, j = k - 1;
            if (j > n) {
                i = k - n;
                j = n;
            }
            p[k] = G[i - 1][j - 1];
            seen.insert(p[k]);
        }
        for (int num = 1; num <= 2 * n; ++num) {
            if (seen.find(num) == seen.end()) {
                p[1] = num;
                break;
            }
        }
        for (int i = 1; i <= 2 * n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}