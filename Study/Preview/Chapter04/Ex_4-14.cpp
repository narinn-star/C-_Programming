#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;

	getline(cin, s, '\n');

	int sum = 0;
	int startIndex = 0;
	int fIndex;
	while (true) {
		fIndex = s.find('+', startIndex); 
		if (fIndex == -1) { // '+' 문자 발견 X
			string part = s.substr(startIndex);
			if (part == "") break; // "2+3+", 즉 +로 끝나는 경우
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "숫자들의 합은 " << sum;
}