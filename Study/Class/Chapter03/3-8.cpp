#include <iostream>
#include <string>
using namespace std;

class Integer {
	int a;
public:
	Integer(int a) {
		this->a = a;
	}
	Integer(string s) {
		this->a = stoi(s);
	}
	int get() {
		return a;
	}
	void set(int a) {
		this->a = a;
	}
	bool isEven() {
		if (this->a % 2 == 0)
			return true;
		else
			return false;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 ���
	n.set(50);
	cout << n.get() << ' '; // 50 ���

	Integer m("300");
	cout << m.get() << ' '; // 300 ���
	cout << m.isEven(); // true(������ 1) ���
}