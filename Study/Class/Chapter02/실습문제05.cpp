#include <iostream>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶� (100�� �̸�)." << endl;
	char text[100];
	int count = 0;
	cin.getline(text, 100, '\n');

	for (int i = 0; i < 101; i++) {
		if (text[i] == 'x')
			count++;
	}
	cout << "x�� ������ " << count << endl;
}