#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5];

	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');
	}

	string result = names[0];
	for (int i = 1; i < 5; i++) {
		if (result < names[i]) {
			result = names[i];
		}
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << result << endl;
}