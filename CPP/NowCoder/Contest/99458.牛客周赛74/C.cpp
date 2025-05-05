#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int minimizeNumber(int n, int m) {
    while (m > 0 && n > 1) {
        if (n % 2 == 0 && (n / 2 >= sqrt(n))) {
            n /= 2;
        } else if (sqrt(n) * sqrt(n) != n) {
            n = ceil(sqrt(n));
        } else {
            n -= 1;
        }
        m--;
    }
    while (m > 0) {
        n -= 1;
        m--;
    }
    return n;
}

int main() {
    int T;
    cin >> T;
    
    vector<int> results(T);
    
    for (int i = 0; i < T; ++i) {
        int n, m;
        cin >> n >> m;
        results[i] = minimizeNumber(n, m);
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}



