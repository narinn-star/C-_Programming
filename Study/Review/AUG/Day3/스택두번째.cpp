#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() {
		tos = 0;
	}
	MyIntStack(int size) {
		this->size = size;
		p[size];
	}
	MyIntStack(const MyIntStack& s) {

	}
	~MyIntStack() {
		
	}
	bool push(int n) {

	}
	bool pop(int& n) {

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
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}