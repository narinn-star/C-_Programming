#include <iostream>
using namespace std;

int main() {
	int num1, num2, result = 0;
	char oper;
	while (1) {
		cout << "? ";
		cin >> num1 >> oper >> num2;

		switch (oper) {
		case'+': result = num1 + num2;
			break;
		case'-': result = num1 - num2;
			break;
		case'*': result = num1 * num2;
			break;
		case'/': result = num1 / num2;
			break;
		case'%': result = num1 % num2;
			break;
		default: cout << "�ٽ� �Է����ּ���." << endl;
		}

		cout << num1 << " " << oper << " " << num2 << " = " << result << endl;
	}
}