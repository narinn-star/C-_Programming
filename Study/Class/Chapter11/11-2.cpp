#include <iostream>
using namespace std;

int main() {
	char ch;
	int cnt = 0;

	while (1) {
		cin.get(ch);
		if (cin.eof())
			break;
		if (ch == '\n')
			break;
		else if (ch == ' ')
			cnt++;
	}
	cout << cnt;
}