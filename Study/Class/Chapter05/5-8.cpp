#include <iostream>
using namespace std;

class MyIntStack {
	int* p; // ���� �޸𸮷� ����� ������
	int size; // ���� �ִ� ũ��
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() {
		tos = 0;
	}
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = 0;
	}
	MyIntStack(const MyIntStack& s) {// ���� ������
		this->size = s.size;
		p = new int[s.size]; // this->p = new int[s.size];
		tos = 0; // this->tos = s.tos;
	}
	~MyIntStack() {
		delete[] p;
	}
	bool push(int n) { // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
		if (tos < size) {
			p[tos] = n;
			tos++;
			return true;
		}
		else
			return false;
	}
	bool pop(int& n) { // ������ ����⿡ �ִ� ���� n�� ��
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
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}