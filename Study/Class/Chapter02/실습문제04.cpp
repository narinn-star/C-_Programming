#include <iostream>
using namespace std;

int main() {
	cout << "5 ���� �Ǽ��� �Է��϶� >> ";

	double num[5] , MAX = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		if (MAX < num[i])
			MAX = num[i];
	}

	cout << "���� ū �� = " << MAX;
}