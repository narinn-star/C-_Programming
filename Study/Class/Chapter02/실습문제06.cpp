#include <iostream>
#include <string>
using namespace std;

int main() {
	char pwd[20], check[20];
	
	cout << "새 암호를 입력하세요 >> ";
	cin.getline(pwd, 20);

	cout << "새 암호를 다시 한 번 입력하세요 >> ";
	cin.getline(check, 20);

	if (strcmp(pwd, check) == 0)
		cout << "같습니다.";
	else
		cout << "다릅니다.";
}