#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b)
		return true;
	else {
		if (a > b) {
			big = a;
		}
		else {
			big = b;
		}
		return false;
	}
}

int main() {
	int num1, num2, big;
	cout << "두개의 정수를 입력하세요 >> ";
	cin >> num1 >> num2;
	if (!bigger(num1, num2, big))
		cout << "큰 수는 : " << big;
	else
		cout << "두 수가 같음";
}