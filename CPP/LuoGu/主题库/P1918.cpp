#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, Q, mark;
    cin >> n;
    int a[100050];
    unordered_map<int, int> indexMap;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(indexMap.find(a[i]) == indexMap.end()) {
            indexMap[a[i]] = i;
        }
    }
    
    cin >> Q;
    for(int i = 1; i <= Q; i++) {
        cin >> m;
        auto it = indexMap.find(m);
        if(it != indexMap.end()) {
            cout << it->second << "\n";
        } else {
            cout << "0\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}