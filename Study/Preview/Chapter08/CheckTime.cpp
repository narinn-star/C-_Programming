#include <iostream>
#include <string>
using namespace std;

class A {
	int x;
public:
	A() {
		x = 0;
	}
	A(int x) {
		this->x = x;
	}
};

class B : public A {
	int y;
public:
	B(int x, int y) : A(x + 5) {
		this->y = y;
	}
};

class C : public B {
	int m;
public:
	C(int x, int y, int z) : B(x, y) { 
		m = x * y * z; 
	}
};

int main() {
	C c(3, 5, 2);
	B b(3, 4);
}