#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	int zero = 0;
	if (a == b)
		return true;
	else {
		if (a > b)
			big = a;
		else 
			big = b;
		return false;
	}
	
}

int main() {
	int a, b, big;
	cout << "�ΰ��� ������ �Է��ϼ��� >> ";
	cin >> a >> b;
	if (bigger(a, b, big) != 1)
		cout << "ū ���� " << big;
	else
		cout << "�� ������ ���� ����"
}