#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) {// value �ʱ�ȭ
		this->value = value;
	}
	Accumulator& add(int n) { // value�� n�� ���� ���� ����
		value += n;
		return *this;
	}
	int get() { //������ �� value ����
		return value;
	}
};

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc�� value ��� 28
	cout << acc.get(); //28 ���
}