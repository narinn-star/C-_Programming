#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) {
		this->value = value;
	}
	Accumulator& add(int n) {
		value += n;
		return *this; // 자기 자신의 참조 리턴
	}
	int get() {
		return value;
	}
};

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); //acc의 value 멤버 : 28
	cout << acc.get();
}