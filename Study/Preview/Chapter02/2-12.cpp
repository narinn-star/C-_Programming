#include <iostream>
#include <string>
using namespace std;

int sum(int b) {
	int result = 0;
	for (int i = 1; i <= b; i++) {
		result += i;
	}
	return result;
}

int main() {
	cout << "끝 수를 입력하세요 >> ";
	int num;
	cin >> num;
	cout << "1부터 " << num << "까지의 합은 " << sum(num) << " 입니다.\n";
}