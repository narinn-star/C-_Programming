#include <iostream>
using namespace std;

int main() {
	cout << "문자들을 입력하라 (100개 미만)." << endl;
	char text[100];
	int count = 0;
	cin.getline(text, 100, '\n');

	for (int i = 0; i < 101; i++) {
		if (text[i] == 'x')
			count++;
	}
	cout << "x의 개수는 " << count << endl;
}