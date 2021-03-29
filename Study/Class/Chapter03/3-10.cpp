#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a + b;
	}
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a - b;
	}
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a * b;
	}
};

class Div {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a / b;
	}
};

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char opr;
	
	while (1) {
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> x >> y >> opr;
		if (opr == '+') {
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (opr == '-') {
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if (opr == '*') {
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else if (opr == '/') {
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}
		else
			cout << "잘못된 연산자" << endl;
	}
}