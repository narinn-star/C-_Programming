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
	cout << "�ΰ��� ������ �Է��ϼ��� >> ";
	cin >> num1 >> num2;
	if (!bigger(num1, num2, big))
		cout << "ū ���� : " << big;
	else
		cout << "�� ���� ����";
}