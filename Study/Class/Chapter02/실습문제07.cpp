#include <iostream>
#include <string>
using namespace std;

int main() {
	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요 >> ";
		char yes[20];
		cin.getline(yes, 20, '\n');
		if (strcmp(yes, "yes") == 0) {
			cout << "종료합니다..." << endl;
			break;
		}
	}
}