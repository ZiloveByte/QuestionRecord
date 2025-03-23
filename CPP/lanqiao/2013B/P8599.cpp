#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int digits[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // 初始化为1-9的排列
    int ans = 0; // 记录符合条件的总数

    do {
        // 遍历a的可能位数x，范围1到7
        for (int x = 1; x <= 7; ++x) {
            int rem = 9 - x; // 剩余位数
            if (rem < 2) continue; // 至少需要两位分给b和c

            // 遍历b的可能位数y，范围1到rem-1
            for (int y = 1; y <= rem - 1; ++y) {
                // 生成a的值
                long long a_val = 0;
                bool a_too_big = false; // 标记a是否超过N
                for (int i = 0; i < x; ++i) {
                    a_val = a_val * 10 + digits[i];
                    if (a_val > N) { // 提前终止，节省时间
                        a_too_big = true;
                        break;
                    }
                }
                // 如果a >= N或中途超过，跳过当前分割
                if (a_too_big || a_val >= N) continue;

                long long target = N - a_val; // 目标值为N - a

                // 生成b的值，从x开始取y位
                long long b_val = 0;
                for (int i = x; i < x + y; ++i) {
                    b_val = b_val * 10 + digits[i];
                }

                // 生成c的值，取剩余位
                long long c_val = 0;
                for (int i = x + y; i < 9; ++i) {
                    c_val = c_val * 10 + digits[i];
                }

                // 检查条件：c非零，b能被c整除，且商等于目标值
                if (c_val != 0 && b_val % c_val == 0 && (b_val / c_val) == target) {
                    ans++;
                }
            }
        }
    } while (next_permutation(digits, digits + 9)); // 生成下一个排列

    cout << ans << endl;
    return 0;
}