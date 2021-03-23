#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show() {
		cout << "kick = " << kick << " punch = " << punch << endl;
	}
	friend Power operator++(Power& op) { // ���� ++ ������ �Լ� ����
		op.kick++;
		op.punch++;
		return op; // ���� ��� ����
	}
	friend Power operator++(Power& op, int x) { // ���� ++ ������ �Լ� ����
		Power tmp = op;
		op.kick++;
		op.punch++;
		return tmp; // ���� ������ op ����
	}
};

int main() {
	Power a(3, 5), b;
	b = ++a; // ����++
	a.show();
	b.show();

	b = a++; // ����++
	a.show();
	b.show();
}