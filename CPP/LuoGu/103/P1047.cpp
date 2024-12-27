#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, m;
    cin >> l >> m;
    vector<bool> trees(l + 1, true);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        for (int j = u; j <= v; j++) {
            trees[j] = false;
        }
    }
    int remaining_trees = 0;
    for (int i = 0; i <= l; i++) {
        if (trees[i]) {
            remaining_trees++;
        }
    }
    cout << remaining_trees << endl;
    return 0;
}