#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�� ���� �Է��ϼ��� >> ";

	int num, sum = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	cout << "1���� " << num << "������ ���� " << sum << " �Դϴ�.\n";
}