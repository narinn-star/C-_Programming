#include <iostream>	
using namespace std;

int main() {
	std::cout << "My name is Mike\n";

	cout << "��ǻ�Ͱ��а�\n" << "21��\n" << "�����\n";

	int sum = 0;
	for (int i = 0; i < 11; i++) {
		sum += i;
	}
	cout << "1���� 10���� ���� ����� " << sum << "�Դϴ�.\n";

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}