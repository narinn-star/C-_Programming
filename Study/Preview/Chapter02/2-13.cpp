#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, c;
	char b;

	while (1) {
		cout << "? ";
		cin >> a >> b >> c;

		switch (b) {
		case '+': cout << a << " " << b << " " << c << " = " << a + c << "\n";
			break;
		case '-': cout << a << " " << b << " " << c << " = " << a - c << "\n";
			break;
		case '*': cout << a << " " << b << " " << c << " = " << a * c << "\n";
			break;
		case '/': cout << a << " " << b << " " << c << " = " << a / c << "\n";
			break;
		case '%': cout << a << " " << b << " " << c << " = " << a % c << "\n";
			break;
		default: cout << "잘못된 연산자 입니다." << "\n";
		}
	}
}