#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;

	string s;
	while (1) {
		cout << ">> ";
		getline(cin, s);
		if (s == "exit")
			break;
		
		int len = s.length();
		
		for (int i = len-1; i >= 0; i--) {
			cout << s[i];
		}
		cout << endl;
	}

}