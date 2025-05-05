#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_N = 1e6 + 10;

vector<int> power_of_two(MAX_N, 0);
vector<int> inv(MAX_N, 1);

void solve() {
    for (int i = 1; i < MAX_N; ++i) {
        power_of_two[i] = power_of_two[i - 1];
        int n = i;
        while (n > 0) {
            n /= 2;
            power_of_two[i] += n;
        }
    }
    for (int i = 2; i < MAX_N; ++i) {
        inv[i] = (MOD - 1LL * (MOD / i) * inv[MOD % i] % MOD) % MOD;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    int T;
    cin >> T;
    vector<int> ns(T);
    for (int i = 0; i < T; ++i) {
        cin >> ns[i];
    }
    for (int i = 0; i < T; ++i) {
        int n = ns[i];
        int a = power_of_two[n];
        int res = inv[a + 1];
        cout << res << (i == T - 1 ? "\n" : " ");
    }
    return 0;
}