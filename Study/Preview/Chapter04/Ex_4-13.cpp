#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다. (한글 안됨) " << endl;
	getline(cin, s, '\n');
	int length = s.length();

	for (int i = 0; i < length; i++) {
		string first = s.substr(0, 1); // 맨 앞의 문자 1개를 문자열로 분리
		string sub = s.substr(1, length - 1); // 나머지 문자들을 문자열로 분리
		s = sub + first; // 두 문자열 연결
		cout << s << endl;
	}
}