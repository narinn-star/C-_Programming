#include <iostream>
using namespace std;

int sum(int a, int b) { //a���� b���� ��
	int result = 0;
	for (int i = a; i <= b; i++) {
		result += i;
	}
	return result;
}

int sum(int a) { //0���� a���� ��
	int result = 0;
	for (int i = 0; i <= a; i++) {
		result += i;
	}
	return result;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}