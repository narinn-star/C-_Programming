#include <iostream>
using namespace std;

int main() {
	cout << "5 개의 실수를 입력하라 >> ";
	
	double num[5], MAX = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];

		if (num[i] > MAX) {
			MAX = num[i];
		}
	}
	cout << "제일 큰 수 = " << MAX << "\n";
}