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
	cout << "�� ���� �Է��ϼ��� >> ";
	int num;
	cin >> num;
	cout << "1���� " << num << "������ ���� " << sum(num) << " �Դϴ�.\n";
}