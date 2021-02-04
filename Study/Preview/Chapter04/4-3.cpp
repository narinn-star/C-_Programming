#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;
	string s;
	while (1) {
		cout << ">> ";
		getline(cin, s);
		if (s == "exit")
			break;
		int len = s.length();
		//for(int i = 0; i<len) 
	}
	//다시
}