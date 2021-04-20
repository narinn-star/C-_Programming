#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	char ox[81];
	for (int i = 0; i < n; i++) {
		int  count = 1, sum = 0;
		cin >> ox;
		for (int j = 0; ox[j] != '\0'; j++) {
			if (ox[j] == 'O') {
				sum += count;
				count++;
			}
			else
				count = 1;
		}
		cout << sum << '\n';
	}
}