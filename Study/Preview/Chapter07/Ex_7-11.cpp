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
	friend Power operator+(int op1, Power op2) {
		Power tmp; //임시 객체 생성
		tmp.kick = op1 + op2.kick; //kick 더하기
		tmp.punch = op1 + op2.punch; // punch 더하기
		return tmp;
	}
};

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 + a;
	a.show();
	b.show();
}