#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int max_sum = 0;
    set<int> seen;
    seen.insert(a[n-1]);
    for (int i = n-2; i >= 0; i--) {
        auto it = seen.lower_bound(a[i]);
        if (it != seen.begin()) {
            it--;
            max_sum = max(max_sum, a[i] + *it);
        }
        seen.insert(a[i]);
    }
    cout << max_sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}