#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> values;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        values.insert(a[i]);
    }
    vector<int> sorted_values(values.begin(), values.end());
    sort(sorted_values.begin(), sorted_values.end());
    int m = 1;
    for (int i = 1; i < sorted_values.size(); ++i) {
        if (sorted_values[i] - sorted_values[i - 1] > 1) {
            m++;
        }
    }
    cout << m - 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}