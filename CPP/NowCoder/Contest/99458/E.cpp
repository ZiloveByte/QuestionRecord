#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int start = 0; start <= n-m; start++) {
        vector<int> subseq;
        vector<int> remaining;
        for(int i = 0; i < n; i++) {
            if(i >= start && i < start + m) {
                subseq.push_back(a[i]);
            } else {
                remaining.push_back(a[i]);
            }
        }
        sort(remaining.begin(), remaining.end());
        for(int pos = 0; pos <= remaining.size(); pos++) {
            vector<int> result = remaining;
            result.insert(result.begin() + pos, subseq.begin(), subseq.end());
            bool increasing = true;
            for(int i = 1; i < n; i++) {
                if(result[i] <= result[i-1]) {
                    increasing = false;
                    break;
                }
            }
            if(increasing) return true;
        }
        sort(remaining.rbegin(), remaining.rend());
        for(int pos = 0; pos <= remaining.size(); pos++) {
            vector<int> result = remaining;
            result.insert(result.begin() + pos, subseq.begin(), subseq.end());
            bool decreasing = true;
            for(int i = 1; i < n; i++) {
                if(result[i] >= result[i-1]) {
                    decreasing = false;
                    break;
                }
            }
            if(decreasing) return true;
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        cout << (solve() ? "YES" : "NO") << "\n";
    }
    return 0;
}