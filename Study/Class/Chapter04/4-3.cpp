#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "문자열 입력 >> ";
	string str;
	getline(cin, str);

	int length = str.length();
	char a = 'a';
	int count = 0;

	for (int i = 0; i < length; i++) {
		if (str[i] == 'a')
			count++;
	}

	cout << "문자 a는 " << count << "개 있습니다.";
	
}