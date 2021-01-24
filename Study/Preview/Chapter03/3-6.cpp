#include <iostream>
#include <string>
using namespace std;

class Integer {
	int num1, num2, num3;
public:
	Integer(int n) {
		num1 = n;
	};
	Integer(string m) {
		num1 = stoi(m);
	};
	int set(int n2) {
		return num1 = n2;
	};
	int get() {
		return num1;
	};
	bool isEven() {
		if (num1 % 2 == 0)
			true;
		return true;
	};
};

int main() {
	Integer n(30);
	cout << n.get() << ' '; //30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력

	Integer m("300");
	cout << m.get() << ' '; //300 출력
	cout << m.isEven(); //true(정수로 1) 출력
}