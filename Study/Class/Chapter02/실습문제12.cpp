#include <iostream>
using namespace std;

int sum(int a, int b) {
	int result = 0;
	for (int k = a; k <= b; k++) {
		result += k;
	}
	return result;
}

int main() {
	int n = 0;
	cout << "�� ���� �Է��ϼ��� >> ";
	cin >> n;
	cout << endl << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << endl;
}