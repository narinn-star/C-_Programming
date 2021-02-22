#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector() {
		mem = new int[100];
		size = 100;
		for (int i = 0; i < size; i++) {
			mem[i] = 0;
		}
	}
	MyVector(int n, int val) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++) {
			mem[i] = val;
		}
	}
	~MyVector() {
		delete[]mem;
	}
	void show() {
		cout << "size : " << size << endl;
		for (int i = 0; i < size; i++) {
			cout << mem[i] << ' ';
		}
		cout << endl;
	}
};

int main() {
	MyVector a;
	MyVector b(10, 20);
	cout << "TEST" << endl << endl;
	a.show();
	cout << endl;
	b.show();
}