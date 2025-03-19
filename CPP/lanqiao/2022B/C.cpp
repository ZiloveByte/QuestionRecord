#include <iostream>
using namespace std;

int main() {
	long long a, b, n;
	cin >> a >> b >> n;
	long long total_week = 5*a + 2*b;
	long long days = 0;
	if (total_week > 0) {
		long long weeks = n / total_week;
		days += weeks * 7;
		long long remain = n % total_week;
		if (remain == 0) {
			cout << days;
			return 0;
		}
		n = remain;
	}
	for (int i = 0; i < 5; ++i) {
		if (n <= 0) break;
		days++;
		n -= a;
	}
	for (int i = 0; i < 2; ++i) {
		if (n <= 0) break;
		days++;
		n -= b;
	}
	cout << days;
	return 0;
}
