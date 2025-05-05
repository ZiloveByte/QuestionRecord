#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, sum = 0;
    cin >> n >> m;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    
    vector<long long> diffs;
    for (int i = 0; i < n - 1; i++) {
        long long diff = v[i + 1] * v[i + 1] - v[i] * v[i];
        diffs.push_back(diff);
    }
    sort(diffs.begin(), diffs.end());
    
    for (int i = 0; i < m - 1; i++) {
        sum += diffs[i];
    }
    cout << sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}