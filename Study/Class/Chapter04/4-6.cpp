#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "�Ʒ� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�)";
	while (1) {
		cout << "\n>> ";
		getline(cin, str);
		if (str == "exit")
			break;

		int len = str.length();

		for (int i = (len - 1); i >= 0; i--) {
			cout << str[i];
		}
	}
}