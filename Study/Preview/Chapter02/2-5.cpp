#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	char sentence[100];
	char ch = 'x';
	int count = 0;
	cin.getline(sentence, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (sentence[i] == ch) {
			count++;
		}
	}
	cout << "x�� ������ " << count << "\n";
}