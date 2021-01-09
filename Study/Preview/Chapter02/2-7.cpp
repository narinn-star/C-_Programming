#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요 >> ";
		char yes[10];
		cin.getline(yes, 10);
		if (strcmp(yes, "yes") == 0) {
			cout << "종료합니다...";
			break;
		}
	}
}