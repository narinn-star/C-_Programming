#include <iostream>
using namespace std;

int main() {
	cout << "정수 5개 입력 >> ";
	
	int* num = new int[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}

	cout << "평균 " << (double)sum / 5;
}