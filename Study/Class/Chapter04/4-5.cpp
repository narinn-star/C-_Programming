#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string str;
	int n;
	cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)";

	while (1) {
		srand((unsigned)time(0));
		cout << "\n>> ";
		getline(cin, str);
		if (str == "exit")
			break;
		
		int len = str.length();
		while (1) {
			n = rand() % len;
			if (str[n] != ' ')
				break;
		}
		int a = rand() % 25 + 95;
		str[n] = (char)a;
		cout << str;
	}
}