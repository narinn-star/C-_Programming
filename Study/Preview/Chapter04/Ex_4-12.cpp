#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5];

	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}

	string result = names[0];
	for (int i = 1; i < 5; i++) {
		if (result < names[i]) {
			result = names[i];
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << result << endl;
}