#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���ڿ� �Է� >> ";
	char ch[10];
	cin >> ch;

	for (int i = 1; i <= strlen(ch); i++) {
		for (int j = 0; j < i; j++) {
			cout << ch[j];
		}
		cout << "\n";
	}
}