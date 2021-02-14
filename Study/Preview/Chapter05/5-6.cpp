#include <iostream>
#include <cstring>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = 0;
	}
	MyIntStack(const MyIntStack& s) {
		this->p = new int[s.size];
		this->size = s.size;
		this->tos = s.tos;
		for (int i = 0; i <= s.tos; i++)
			this->p[i] = s.p[i];
	}
	~MyIntStack() {
		delete []p;
	}
	bool push(int n) {
		if (tos > size)
			return false;
		else {
			p[tos] = n;
			tos++;
			return true;
		}
		
	}
	bool pop(int& n) {
		tos--;
		if (tos < 0)
			return false;
		else {
			n = p[tos];
			return true;
		}
	}
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a; // ���� ����
	b.push(30);

	int n;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}