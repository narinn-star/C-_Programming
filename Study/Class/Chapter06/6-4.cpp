#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++)
			mem[i] = val;
	}

	~MyVector() {
		delete[] mem;
	}

	void show() {
		cout << "size = " << size << endl;
		for (int i = 0; i < size; i++) {
			cout << mem[i] << ' ';
		}
		cout << endl;
 	}
};

int main() {
	MyVector c;
	MyVector v(10, 50);
	c.show();
	v.show();
}