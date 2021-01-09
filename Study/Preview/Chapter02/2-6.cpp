#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "새 암호를 입력하세요 >> ";
	string pw;
	getline(cin, pw);

	cout << "새 암호를 다시 한 번 입력하세요 >> ";
	string repw;
	getline(cin, repw);

	if (pw == repw)
		cout << "같습니다.";
	else
		cout << "같지 않습니다.";
}