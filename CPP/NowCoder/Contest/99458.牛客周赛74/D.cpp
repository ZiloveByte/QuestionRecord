#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    
    // Check if any card type has more than half
    for(int i = 0; i < n; i++) {
        if(a[i] > total/2) {
            cout << -1 << "\n";
            return;
        }
    }
    
    // Need to peek until we can guarantee two different cards
    int needed = total - 1;
    cout << needed << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}