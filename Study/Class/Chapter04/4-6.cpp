#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "아래 한 줄을 입력하세요. (exit을 입력하면 종료합니다)";
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