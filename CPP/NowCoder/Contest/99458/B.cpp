#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> placeBalls(int n, int m, int k) {
    // 如果小球数量小于 n + m - 1，则无法保证每行每列都有一个小球
    if (k < n + m - 1) {
        return {{-1}};
    }
    
    // 初始化网格
    vector<vector<int>> grid(n, vector<int>(m, 0));
    
    // 在对角线上放置小球以确保每行每列都有一个小球
    int ballsUsed = 0;
    for (int i = 0; i < min(n, m); ++i) {
        grid[i][i] = 1;
        ballsUsed += 1;
    }
    
    // 分配剩余的小球
    int remainingBalls = k - ballsUsed;
    int row = 0;
    int col = min(n, m);
    
    while (remainingBalls > 0) {
        if (row < n && col < m) {
            grid[row][col] = 1;
            row += 1;
            col += 1;
            remainingBalls -= 1;
        } else if (row < n) {
            grid[row][0] += 1;
            row += 1;
            remainingBalls -= 1;
        } else if (col < m) {
            grid[0][col] += 1;
            col += 1;
            remainingBalls -= 1;
        }
    }
    
    return grid;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<vector<int>> result = placeBalls(n, m, k);
    
    if (result.size() == 1 && result[0].size() == 1 && result[0][0] == -1) {
        cout << -1 << endl;
    } else {
        for (const auto& row : result) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}



