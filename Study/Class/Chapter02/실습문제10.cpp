#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���ڿ� �Է� >> ";
	
	char hello[10];
	cin.getline(hello, 10);
	for (int i = 1; i <= strlen(hello); i++) {
		for (int j = 0; j < i; j++)
			cout << hello[j];
		cout << endl;
	}
}