#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int&x:a)cin>>x;

    const long long INF = -1e18;
    vector<long long> prev(n + 1, INF);
    prev[0] = 0;

    for (int step = 1; step <= k; ++step) {
        vector<long long> current(n + 1, INF);
        for (int j = 0; j <= n; ++j) {
            if (prev[j] == INF) continue;
            for (int s = 1; s <= 6; ++s) {
                int new_pos = j + s;
                if (new_pos > n) continue;
                long long val = prev[j] + a[new_pos - 1];
                if (val > current[new_pos]) current[new_pos] = val;
            }
        }
        prev = move(current);
    }

    cout << *max_element(prev.begin(), prev.end()) << endl;
    return 0;
}