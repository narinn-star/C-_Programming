#include <iostream>
using namespace std;

int main() {
	cout << "���� 5�� �Է� >> ";
	
	int* num = new int[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}

	cout << "��� " << (double)sum / 5;
}