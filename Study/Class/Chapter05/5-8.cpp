#include <iostream>
using namespace std;

class MyIntStack {
	int* p; // 스택 메모리로 사용할 포인터
	int size; // 스택 최대 크기
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() {
		tos = 0;
	}
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = 0;
	}
	MyIntStack(const MyIntStack& s) {// 복사 생성자
		this->size = s.size;
		p = new int[s.size]; // this->p = new int[s.size];
		tos = 0; // this->tos = s.tos;
	}
	~MyIntStack() {
		delete[] p;
	}
	bool push(int n) { // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
		if (tos < size) {
			p[tos] = n;
			tos++;
			return true;
		}
		else
			return false;
	}
	bool pop(int& n) { // 스택의 꼭대기에 있는 값을 n에 팝
		if (tos > -1) {
			n = p[--tos];
			return true;
		}
		else
			return false;
	}
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}