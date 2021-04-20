#include <iostream>
using namespace std;

int main() {
	int m, n;
	int min = 10001, sum = 0;
	cin >> m >> n;
	for (int i = 1; i <= 100; i++) {
		for (int j = m; j <= n; j++) {
			if (i * i == j) {
				sum += j;
				if (j < min)
					min = j;
			}
		}
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << min;
}