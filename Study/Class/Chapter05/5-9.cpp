#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) {// value 초기화
		this->value = value;
	}
	Accumulator& add(int n) { // value에 n을 더해 값을 누적
		value += n;
		return *this;
	}
	int get() { //누적된 값 value 리턴
		return value;
	}
};

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc의 value 멤버 28
	cout << acc.get(); //28 출력
}