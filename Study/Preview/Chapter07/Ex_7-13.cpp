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
	friend Power operator++(Power& op) { // 전위 ++ 연산자 함수 구현
		op.kick++;
		op.punch++;
		return op; // 연산 결과 리턴
	}
	friend Power operator++(Power& op, int x) { // 후위 ++ 연산자 함수 구현
		Power tmp = op;
		op.kick++;
		op.punch++;
		return tmp; // 변경 이전의 op 리턴
	}
};

int main() {
	Power a(3, 5), b;
	b = ++a; // 전위++
	a.show();
	b.show();

	b = a++; // 후위++
	a.show();
	b.show();
}