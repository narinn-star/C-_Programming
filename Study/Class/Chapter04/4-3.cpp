#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���ڿ� �Է� >> ";
	string str;
	getline(cin, str);

	int length = str.length();
	char a = 'a';
	int count = 0;

	for (int i = 0; i < length; i++) {
		if (str[i] == 'a')
			count++;
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
	
}