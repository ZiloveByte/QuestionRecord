#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isAllZero(const vector<string>& matrix) {
    for (const auto& row : matrix) {
        for (char c : row) {
            if (c != '0') return false;
        }
    }
    return true;
}
bool solve() {
    int n, m;
    cin >> n >> m;
    vector<string> matrix(n);
    for (int i = 0; i < n; ++i) {
        cin >> matrix[i];
    }

    if (isAllZero(matrix)) {
        return true;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            bool ok = true;
            for (int k = 0; k < n; ++k) {
                if (k == i || k == j) continue;
                for (int l = 0; l < m; ++l) {
                    if (matrix[k][l] != '0') {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (!ok) continue;
            bool row_i_all_one = true;
            bool row_j_all_one = true;
            for (int l = 0; l < m; ++l) {
                if (matrix[i][l] != '1') row_i_all_one = false;
                if (matrix[j][l] != '1') row_j_all_one = false;
            }
            if (row_i_all_one && row_j_all_one) return true;
            bool complement = true;
            for (int l = 0; l < m; ++l) {
                if (matrix[i][l] == matrix[j][l]) {
                    complement = false;
                    break;
                }
            }
            if (complement) return true;
        }
    }
    for (int l1 = 0; l1 < m; ++l1) {
        for (int l2 = l1; l2 < m; ++l2) {
            bool ok = true;
            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < m; ++l) {
                    if (l == l1 || l == l2) continue;
                    if (matrix[k][l] != '0') {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (!ok) continue;
            bool col_l1_all_one = true;
            bool col_l2_all_one = true;
            for (int k = 0; k < n; ++k) {
                if (matrix[k][l1] != '1') col_l1_all_one = false;
                if (matrix[k][l2] != '1') col_l2_all_one = false;
            }
            if (col_l1_all_one && col_l2_all_one) return true;
            bool complement = true;
            for (int k = 0; k < n; ++k) {
                if (matrix[k][l1] == matrix[k][l2]) {
                    complement = false;
                    break;
                }
            }
            if (complement) return true;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            bool ok = true;
            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < m; ++l) {
                    if (k == i && l == j) continue;
                    if (k == i || l == j) {
                        if (matrix[k][l] != '1') {
                            ok = false;
                            break;
                        }
                    } else {
                        if (matrix[k][l] != '0') {
                            ok = false;
                            break;
                        }
                    }
                }
                if (!ok) break;
            }
            if (ok) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        cout << (solve() ? "YES" : "NO") << '\n';
    }
    return 0;
}